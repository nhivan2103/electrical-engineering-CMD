#include <Servo.h> 

int batPin = A0; 
int servoPin = D6; 
int buzzerPin = D3;

Servo myServo; 

void setup() {
  pinMode(batPin, INPUT); 
  myServo.attach(servoPin); 
  pinMode(buzzerPin, OUTPUT);
  Serial.begin(9600); 
}

void loop() {
  int batValue = analogRead(batPin); 
  Serial.println(batValue); 
  float angleValue = map(batValue, 0, 1023, 0, 179); 
  Serial.print(angleValue); 
  myServo.write(angleValue); 
  if(angleValue>100) {
    digitalWrite(buzzerPin, LOW); 
  }
  else {
    digitalWrite(buzzerPin, HIGH);
  }
  delay(100); 
}