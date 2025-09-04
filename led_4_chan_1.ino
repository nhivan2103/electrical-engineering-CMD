#define COLOR_RED 255,0,0
#define COLOR_MAGENTA 255,0,255

int redPin = 11; 
int bluePin = 10; 
int greenPin = 9; 

void changeColor(int _red,int _blue,int _green ) {
  analogWrite(redPin, _red);
  analogWrite(bluePin, _blue); 
  analogWrite(greenPin, _green); 
}

void setup() {
  pinMode(redPin, OUTPUT); 
  pinMode(bluePin, OUTPUT);
  pinMode(greenPin, OUTPUT);
}

void loop() {
  changeColor(COLOR_RED); 
  delay(1000); 
  changeColor(COLOR_MAGENTA);
  delay(1000); 
}