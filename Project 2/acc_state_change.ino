#include <Arduino_LSM9DS1.h>

void setup() {
  // Initialize setup:
  pinMode(LED_BUILTIN, OUTPUT);  // Set the built-in LED pin as an output.
  Serial.begin(115200);          // Start serial communication at a baud rate of 115200.
  while (!Serial);               // Wait for serial connection to be established.
  Serial.println("Started");     // Print "Started" message to serial monitor.
  
  // Initialize the IMU (Inertial Measurement Unit):
  if (!IMU.begin()) {
    Serial.println("Failed to initialize IMU!");  // If IMU initialization fails, print an error message.
    while (1);  // Enter an infinite loop to halt further execution.
  }
}

void loop() {
  float x, y, z;  // Declare variables to store accelerometer data (x, y, z).
  
  if (IMU.accelerationAvailable()) {
    // Read accelerometer data:
    IMU.readAcceleration(x, y, z);
    
    // Check for lying postures:
    // - z = 1 indicates supine, z = -1 indicates prone, z = 0 indicates side.
    if (z <= 0) {  // Check if not supine (side or prone).
      if (z < -0.33) {  // Check for prone posture (more negative z).
        blink();blink();  // Call the blink function twice.
      } else if (y < -0.8 || y > 0.8) {  // Check for side posture (large y value).
        blink();blink();blink();  // Call the blink function three times.
      }
    } else {  // Check if supine.
      if (z > 0.33) {  // Check for supine posture (more positive z).
        blink();  // Call the blink function once.
      } else if (y < -0.8 || y > 0.8) {  // Check for side posture (large y value).
        blink();blink();blink();  // Call the blink function three times.
      }
    }
    Serial.println(z);  // Print the z-axis accelerometer value to the serial monitor.
  }
  
  delay(1000);  // Pause for 1 second.
}

void blink() {
  digitalWrite(LED_BUILTIN, HIGH);  // Turn the built-in LED on (HIGH voltage).
  delay(200);  // Pause for 200 milliseconds.
  digitalWrite(LED_BUILTIN, LOW);   // Turn the built-in LED off (LOW voltage).
  delay(200);  // Pause for another 200 milliseconds.
}
