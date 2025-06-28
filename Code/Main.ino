// Line Follower Bot Logic – Main.ino

// --- Constants (Pin Mapping) ---
const int sensorLeft        = 2;
const int sensorRight       = 3;
const int motorLeftForward  = 10;
const int motorLeftBackward = 11;
const int motorRightForward = 8;
const int motorRightBackward= 9;
const int enableLeft        = 5;
const int enableRight       = 6;

// --- Setup ---
void setup() {
  pinMode(sensorLeft, INPUT);
  pinMode(sensorRight, INPUT);

  pinMode(motorLeftForward, OUTPUT);
  pinMode(motorLeftBackward, OUTPUT);
  pinMode(motorRightForward, OUTPUT);
  pinMode(motorRightBackward, OUTPUT);
  pinMode(enableLeft, OUTPUT);
  pinMode(enableRight, OUTPUT);

  analogWrite(enableLeft, 255);
  analogWrite(enableRight, 255);
}

// --- Main Loop ---
void loop() {
  int leftValue = digitalRead(sensorLeft);
  int rightValue = digitalRead(sensorRight);

  if (leftValue == LOW && rightValue == LOW) {
    moveForward();
  } else if (leftValue == HIGH && rightValue == LOW) {
    turnRight();
  } else if (leftValue == LOW && rightValue == HIGH) {
    turnLeft();
  } else {
    stopMotors();
  }
}

// --- Movement Functions ---
void moveForward() {
  digitalWrite(motorLeftForward, HIGH);
  digitalWrite(motorLeftBackward, LOW);
  digitalWrite(motorRightForward, HIGH);
  digitalWrite(motorRightBackward, LOW);
}

void turnRight() {
  digitalWrite(motorLeftForward, LOW);
  digitalWrite(motorLeftBackward, LOW);
  digitalWrite(motorRightForward, HIGH);
  digitalWrite(motorRightBackward, LOW);
}

void turnLeft() {
  digitalWrite(motorLeftForward, HIGH);
  digitalWrite(motorLeftBackward, LOW);
  digitalWrite(motorRightForward, LOW);
  digitalWrite(motorRightBackward, LOW);
}

void stopMotors() {
  digitalWrite(motorLeftForward, LOW);
  digitalWrite(motorLeftBackward, LOW);
  digitalWrite(motorRightForward, LOW);
  digitalWrite(motorRightBackward, LOW);
}

