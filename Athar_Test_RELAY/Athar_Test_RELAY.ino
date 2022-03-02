#define pumb 2
void setup() {
pinMode(pumb,OUTPUT);

}

void loop() {
digitalWrite(pumb,HIGH);
delay (500);
digitalWrite(pumb,LOW);
delay (500);
}
