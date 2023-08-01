// IT WORKS

const int defaultPinNumber = 9;
const int maximumPinNumber = 12;
const int defaultDelay = 900;

int pinDirection = 1;
int pinNumber = defaultPinNumber;

int delayDirection = 1;
int delayTime = defaultDelay;

void setup() {
  // put your setup code here, to run once:
  for (int i = defaultPinNumber; i <= maximumPinNumber; i++) {
    pinMode(i, OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(pinNumber, HIGH);

  if (delayTime <= 0) {
    delayTime = 0;
    delayDirection *= -1;
  }

  if (delayTime >= defaultDelay) {
    delayTime = defaultDelay; // Reset the delay time once it reaches zero (blink cycle completed)
    delayDirection *= -1;
  }
 
  delay(delayTime);
  digitalWrite(pinNumber, LOW);
  delay(delayTime);

  delayTime -= 30 * delayDirection;
  pinNumber += 1 * pinDirection;

  if (pinNumber == maximumPinNumber || pinNumber == defaultPinNumber) {
    pinDirection *= -1;
  }
}
