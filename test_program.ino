const int motorPin = 10;
const int switchPin = A3;
const int LEDonR = 6;
const int LEDonG = 5;

void setup() {
  pinMode(motorPin, OUTPUT);
  pinMode(switchPin, INPUT);
  pinMode(LEDonR, OUTPUT); 
  pinMode(LEDonG, OUTPUT); 
}

void loop() {
  int switchState = !digitalRead(switchPin);
  
  if (switchState == HIGH) {
    // Turn on the motor
    digitalWrite(motorPin, HIGH);
    digitalWrite(LEDonR, HIGH);
    digitalWrite(LEDonG, LOW);

  } else {
    // Turn off the motor
    digitalWrite(motorPin, LOW);
    digitalWrite(LEDonG, HIGH);
    digitalWrite(LEDonR, LOW);

  }
}
