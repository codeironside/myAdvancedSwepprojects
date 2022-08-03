const int btn = 2;
const int fan = 11;
void setup() {
  // put your setup code here, to run once:
  pinMode(btn,INPUT_PULLUP);//inpt
  pinMode(fan, 1);
  attachInterrupt(INT0, myfx, HIGH);
  attachInterrupt(INT0, myfx, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
//  int btnVal = digitalRead(btn);
//  if(btnVal ==1){
//    digitalWrite(fan, 1);
//  }else{
//    digitalWrite(fan, 0);
//  }

}
  void myfx(){

    digitalWrite(fan, 1);
  }
