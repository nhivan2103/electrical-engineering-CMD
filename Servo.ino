#include <Servo.h> 

Servo S1; 

void setup() {
  S1.attach(D3); 
}

void loop() {
  S1.write(0); 
  delay(4000); 
  S1.write(90); 
  delay(4000); 

}
