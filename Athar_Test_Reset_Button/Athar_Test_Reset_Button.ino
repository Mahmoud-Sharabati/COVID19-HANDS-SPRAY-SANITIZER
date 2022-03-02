// NOTE: THIS CODE IS DEPEND ON LED STRIP CODE
// SO TO ENSURE THE TEST, THE LED MUST INSURE WORK

#define LED 2
#define reset_button 4


void setup() {
  pinMode (LED, OUTPUT);
  //pinMode (6, OUTPUT);
  pinMode (reset_button, INPUT);
 // digitalWrite (6, HIGH);
}

void loop() {
  if (digitalRead(reset_button))
    digitalWrite (LED, HIGH);
  else
    digitalWrite (LED, LOW);
  delay(100);
}
