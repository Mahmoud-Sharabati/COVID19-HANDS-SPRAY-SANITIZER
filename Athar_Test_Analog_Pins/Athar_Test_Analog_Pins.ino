// NOTE: THIS CODE IS DEPEND ON LED STRIP CODE
// SO TO ENSURE THE TEST, THE LED MUST INSURE WORK

//const int analogInPin = A0;  // Analog input pin that the potentiometer is attached to
const int analogOutPin = 9; // Analog output pin that the LED is attached to
const int analogInPin = A1;  // Analog input pin that the potentiometer is attached to

int sensorValue = 0;        // value read from the pot
int outputValue = 0;        // value output to the PWM (analog out)
const int analogOutPin1 = 10; // Analog output pin that the LED is attached to
const int analogInPin1 = A1;  // Analog input pin that the potentiometer is attached to

int sensorValue1 = 0;        // value read from the pot
int outputValue1 = 0;  
void setup() {

}

void loop() {
  // read the analog in value:
  sensorValue = analogRead(analogInPin);
  // map it to the range of the analog out:
  outputValue = map(sensorValue, 0, 1023, 0, 255);
  // change the analog out value:
  analogWrite(analogOutPin, outputValue);
  // read the analog in value:
  sensorValue1 = analogRead(analogInPin1);
  // map it to the range of the analog out:
  outputValue1 = map(sensorValue1, 0, 1023, 0, 255);
  analogWrite(analogOutPin1, outputValue1);
  // wait 2 milliseconds before the next loop for the analog-to-digital
  // converter to settle after the last reading:
  delay(2);
}
