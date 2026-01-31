// Smart Door Alarm System
// Author: Your Name
// Description: Arduino-based door security alarm using reed switch

int reedPin = 2;      // Magnetic reed switch
int buzzerPin = 8;    // Buzzer
int ledPin = 7;       // LED indicator

void setup() {
  pinMode(reedPin, INPUT_PULLUP);
  pinMode(buzzerPin, OUTPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
  Serial.println("Smart Door Alarm System Started");
}

void loop() {
  int doorState = digitalRead(reedPin);

  if (doorState == HIGH) {   // Door Open
    digitalWrite(buzzerPin, HIGH);
    digitalWrite(ledPin, HIGH);
    Serial.println("ALERT! Door Opened");
  } 
  else {                     // Door Closed
    digitalWrite(buzzerPin, LOW);
    digitalWrite(ledPin, LOW);
    Serial.println("Door Closed");
  }

  delay(200);
}
