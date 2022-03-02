#define redPin 10
#define greenPin 9
#define bluePin 6

int t = 1000;
void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);

}

void loop() {
  digitalWrite (redPin,HIGH);
  digitalWrite (greenPin,HIGH);

//  analogWrite(redPin, 255);
//  delay(t);
//  analogWrite(greenPin, 255);
//  delay(t);
//  analogWrite(bluePin, 255);
//  delay(t);
//  analogWrite(redPin, 0);
//  delay(t);
//  analogWrite(greenPin, 0);
//  delay(t);
}
