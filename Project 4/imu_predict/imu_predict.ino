#include <TensorFlowLite.h>
#include "main_functions.h"
#include "model.h"
#include "output_handler.h"
#include "tensorflow/lite/micro/all_ops_resolver.h"
#include "tensorflow/lite/micro/micro_interpreter.h"
#include "tensorflow/lite/micro/micro_log.h"
#include "tensorflow/lite/micro/system_setup.h"
#include "tensorflow/lite/schema/schema_generated.h"
#include <Arduino_LSM9DS1.h>

// Global variables and definitions
namespace {
  const tflite::Model* model = nullptr;
  tflite::MicroInterpreter* interpreter = nullptr;
  TfLiteTensor* input = nullptr;
  TfLiteTensor* output = nullptr;
  int inference_count = 0;
  constexpr int kTensorArenaSize = 2000; // Define the size of the tensor arena
  alignas(16) uint8_t tensor_arena[kTensorArenaSize]; // Allocate memory for the tensor arena
}
int sensorChoice = 0;

// Setup function
void setup() {
  // Initialize the serial connection for debugging
  Serial.begin(115200);
  while (!Serial);

  // Initialize the LSM9DS1 sensor
  if (!IMU.begin()) {
    Serial.println("Failed to initialize IMU!");
    while (1);
  }

  // Prompt the user to select a sensor
  Serial.println("Select a sensor to read:");
  Serial.println("1) Accelerometer");
  Serial.println("2) Gyroscope");
  Serial.println("3) Magnetometer");
  while (!Serial.available());

  sensorChoice = Serial.parseInt();

  tflite::InitializeTarget();

  // Map the model
  model = tflite::GetModel(g_model);
  if (model->version() != TFLITE_SCHEMA_VERSION) {
    MicroPrintf(
        "Model provided is schema version %d not equal "
        "to supported version %d.",
        model->version(), TFLITE_SCHEMA_VERSION);
    return;
  }

  // Create a resolver to pull in operation implementations
  static tflite::AllOpsResolver resolver;

  // Build an interpreter to run the model
  static tflite::MicroInterpreter static_interpreter(
      model, resolver, tensor_arena, kTensorArenaSize);
  interpreter = &static_interpreter;

  // Allocate memory for the model's tensors
  TfLiteStatus allocate_status = interpreter->AllocateTensors();
  if (allocate_status != kTfLiteOk) {
    MicroPrintf("AllocateTensors() failed");
    return;
  }

  // Obtain pointers to the model's input and output tensors
  input = interpreter->input(0);
  output = interpreter->output(0);

  // Initialize inference count
  inference_count = 0;
}

// Loop function
void loop() {
  // Read sensor data based on user's choice
  float x, yy, z;
  if (sensorChoice == 1 && IMU.accelerationAvailable()) {
    IMU.readAcceleration(x, yy, z);
  } else if (sensorChoice == 2 && IMU.gyroscopeAvailable()) {
    IMU.readGyroscope(x, yy, z);
  } else if (sensorChoice == 3 && IMU.magneticFieldAvailable()) {
    IMU.readMagneticField(x, yy, z);
  }

  // Set the input tensor with the sensor data
  input->data.f[0] = x;
  input->data.f[1] = yy;
  input->data.f[2] = z;

  // Run inference
  TfLiteStatus invoke_status = interpreter->Invoke();
  if (invoke_status != kTfLiteOk) {
    MicroPrintf("Invoke failed on x: %f\n", static_cast<double>(x));
    return;
  }

  // Process model output to determine predicted class
  float y_quantizedd[5];
  float y[5];

  // Convert output tensor to arrays
  for (int i = 0; i < 5; i++) {
    y[i] = output->data.f[i];
  }

  int predictedClass = 0;
  float maxProbability = -1.0;

  // Determine the predicted class based on output probabilities
  for (int i = 0; i < 5; i++) {
    float probability = y[i];
    if (probability > maxProbability) {
      maxProbability = probability;
      predictedClass = i;
    }
  }

  // Display the predicted orientation
  switch (predictedClass) {
    case 0:
      Serial.println("Orientation: Supine");
      break;
    case 1:
      Serial.println("Orientation: Prone");
      break;
    case 2:
      Serial.println("Orientation: Side");
      break;
    case 3:
      Serial.println("Orientation: Sitting");
      break;
    case 4:
      Serial.println("Orientation: None");
      break;
    default:
      Serial.println("Invalid prediction");
      break;
  }

  // Delay before the next inference
  delay(1000);
}
