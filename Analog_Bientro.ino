int batPin = A0; 

void setup() {
  pinMode(batPin, INPUT); 
  Serial.begin(9600);
}

void loop() {
  int batValue = analogRead(batPin); 
  Serial.println(batValue); 
  float volValue = (batValue/1023.0)*3.3; 
  Serial.print(volValue); 
  Serial.println(" V"); 
  delay(100); 
}
