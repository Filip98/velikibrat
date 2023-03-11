uint8_t pinState = 1; // HIGH

void setup() {
  // put your setup code here, to run once:
  pinMode(8, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(8, pinState);
  pinState = !pinState;
  delay(500);
}
