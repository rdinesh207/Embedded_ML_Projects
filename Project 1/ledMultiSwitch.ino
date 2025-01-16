#define RED 22  // the state number of the red LED 
#define BLUE 23 // the state number of the blue LED 
#define GREEN 24 // the state number of the green LED 

// variables will change:
String buttonState = "";  // variable for reading the pushbutton status
int state = 0; // variable that keeps in count which state it is in
int redValue = 255, blueValue = 255, greenValue = 255; // Color values of RGB
long int t1, t2; // For calculate time after each state

void setup() {
//  stateMode(buttonstate, INPUT); // initialize the pushbutton state as an input:
  
  pinMode(RED, OUTPUT); // initialize the red LED state as an output
  pinMode(BLUE, OUTPUT); // initialize the blue LED state as an output
  pinMode(GREEN, OUTPUT); // initialize the green LED state as an output
  Serial.begin(9600); // Begin the serial monitor
  setColor(255, 255, 255); // TURN OFF all leds
}

void loop() {
  buttonState = Serial.readString();  // read the state of the pushbutton value:
  
  if (buttonState == "d\n") { // If the button is pressed
    if (state == 0) { // if the state is 0 meaning no leds turned on, then turn red
      redValue = 0, blueValue = 255, greenValue = 255; // color values to turn red
      state = RED; t1 = millis(); // state updated, note the time of start
    } else if (state == RED) { // if the previous state is 22 meaning red led turned on, then turn blue
      blueValue = 0, redValue = 255, greenValue = 255; // color values to turn bllue
      state = BLUE; t1 = millis(); // state updated, note the time of start
    } else if (state == BLUE) { // if the previous state is 23 meaning blue led turned on, then turn green
      greenValue = 0, redValue = 255, blueValue = 255; // color values to turn green
      state = GREEN; t1 = millis(); // state updated, note the time of start
    } else if (state == GREEN) { // if the previous state is 24 meaning green led turned on, then turn off all leds
      redValue = 255, blueValue = 255, greenValue = 255; // color values to turn off 
      state = 0; // state updated
    }
    setColor(redValue, blueValue, greenValue); // once all the color values are updated, turn on the leds
  }
  t2 = millis(); // note current time
  if (state == RED && t2-t1 >= 5000) { // if the state was RED and the start time of state executed is > 5sec, then turn off
    setColor(255, 255, 255); state = 0; // turn off leds, update state back to off
  } else if (state == BLUE && t2-t1 >= 4000) { // if the state was BLUE and the start time of state executed is > 4sec, then turn to red
    setColor(0, 255, 255); state = RED; // turn red led on, update state back to RED
    t1 = millis(); // note the time back to RED state
  } else if (state == GREEN && t2-t1 >= 3000) { // if the state was GREEN and the start time of state executed is > 4sec, then turn to blue
    setColor(255, 0, 255); state = BLUE; // turn blue led on, update state back to BLUE
    t1 = millis(); // note the time back to BLULE state
  }
}

/* THis function is used to turn on leds based on the color values and using analog write*/
void setColor(int redValue, int greenValue, int blueValue) {
  analogWrite(RED, redValue);  // Analog write to the pin 22, for red led
  analogWrite(GREEN, greenValue); // Analog write to the pin 23, for geen led
  analogWrite(BLUE, blueValue); // Analog write to the pin 24, for blue led
}
