#include <Arduino_LSM9DS1.h>

void setup() {
  // Initialize the serial communication at a baud rate of 115200.
  Serial.begin(115200);

  // Wait until the serial connection is established (useful for debugging).
  while (!Serial)

  // Initialize the LSM9DS1 IMU (Inertial Measurement Unit).
  if (!IMU.begin()) {
    // If initialization fails, print an error message and enter an infinite loop.
    Serial.println("Failed to initialize IMU!");
    while (1);
  }
}

void loop() {
  // Declare variables to store accelerometer, gyroscope, and magnetometer data.
  float x, y, z;

  // Check if accelerometer data is available.
  if (IMU.accelerationAvailable()) {
    // Read accelerometer data into variables x, y, and z.
    IMU.readAcceleration(x, y, z);

    // Print accelerometer data in the format: x, y, z
    Serial.print(x); Serial.print(',');
    Serial.print(y); Serial.print(',');
    Serial.print(z); Serial.print(',');
  }

  // Check if gyroscope data is available.
  if (IMU.gyroscopeAvailable()) {
    // Read gyroscope data into variables x, y, and z.
    IMU.readGyroscope(x, y, z);

    // Print gyroscope data in the format: x, y, z
    Serial.print(x); Serial.print(',');
    Serial.print(y); Serial.print(',');
    Serial.print(z); Serial.print(',');
  }

  // Check if magnetometer data is available.
  if (IMU.magneticFieldAvailable()) {
    // Read magnetometer data into variables x, y, and z.
    IMU.readMagneticField(x, y, z);

    // Print magnetometer data in the format: x, y, z
    Serial.print(x); Serial.print(',');
    Serial.print(y); Serial.print(',');
    Serial.println(z); // Print the final value with a newline character.
  }

  // Delay for 300 milliseconds before the next iteration.
  delay(300);
}
