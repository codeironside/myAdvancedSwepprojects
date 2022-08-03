
//const int echo =6;
//const int trig = 7;
int pin2 = 2;
int pin3 = 3;
int pin4 = 4;
int pin5 = 5;
int pin6 = 6;
int pin7 = 7;
int pin8 = 8;
int pin9 = 9;
int pin10 = 10;


void setup() {
  // put your setup code here, to run once:
  for (int here = 2; here < 11; here++) {
    pinMode(here, OUTPUT);
  }


}

void loop() {
  // put your main code here, to run repeatedly:
  for (int where = 2; where < 11; where++) {
      if (where%2==0){
         digitalWrite(where, HIGH);
        delay(200);
        digitalWrite(where,LOW);
      }
  }
  //  if (where%2==0){
  //     digitalWrite(where, HIGH);
  //    delay(200);
  //    digitalWrite(where,LOW);
  //  }
  //  else{
  //    digitalWrite(where, HIGH);
  //    delay(200);
  //    digitalWrite(where,LOW);
  //    break;
  //  }

}
