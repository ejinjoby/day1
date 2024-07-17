const int ledPin =12;
const int buttonPin =2;
int buttonState =0;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
  buttonState=digitalRead(buttonPin);
if (buttonState==HIGH){
  digitalWrite(ledPin, LOW);
}else{
  digitalWrite(ledPin, HIGH);
}
}
