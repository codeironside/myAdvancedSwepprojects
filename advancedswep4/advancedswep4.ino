int red = 9;
int buzzer = 10;
void setup() {
  // put your setup code here, to run once:
  pinMode(red, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int volt = 0; volt <= 255; volt+=5) {
    analogWrite(red, volt);
//    analogWrite(buzzer, volt);

//    analogWrite(buzzer, 255);
  }
  

}
