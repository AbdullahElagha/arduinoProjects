int x; 

void setup() {
  Serial.begin(9600);
  pinMode(6, OUTPUT);
}
 
void loop() {
  x = analogRead(0);
  Serial.println(x);
  analogWrite(6, x/3);
}
