int pin2 = 2;//green
int pin4 = 3;//yellow
int pin7 = 4;//red
int pin8 =5;//buzzer
int pin12 = 6;//yelow2
int pin13 =13;//green2
void setup() {
  // put your setup code here, to run once:
  pinMode(pin2, OUTPUT);
  pinMode(pin4, OUTPUT);
  pinMode(pin7, OUTPUT);
  pinMode(pin8, OUTPUT);
  pinMode(pin12, OUTPUT);
  pinMode(pin13, OUTPUT);
  for(int i = 0; i < 15;i++){
    digitalWrite(pin2,HIGH);
    delay(50);
    digitalWrite(pin2,LOW);
    delay(50);
    digitalWrite(pin4,HIGH);
    delay(50);
    digitalWrite(pin4,LOW);
    delay(50);
    digitalWrite(pin7,HIGH);
    delay(50);
    digitalWrite(pin7,LOW);
    delay(50);
    
    digitalWrite(pin12, HIGH);
    delay(50);
    digitalWrite(pin12,LOW);
    delay(50);
    digitalWrite(pin13, HIGH);
    delay(50);
    digitalWrite(pin13,LOW);
    delay(50);
    digitalWrite(pin8,HIGH);
    delay(50);
    digitalWrite(pin8,LOW);
    
   
    
    delay(250);
  }

}

void loop() {
  // put your main code here, to run repeatedly:
     digitalWrite(pin2,HIGH);
     digitalWrite(pin8,HIGH);
     delay(250);
    digitalWrite(pin2,LOW);
    digitalWrite(pin8,LOW);
      delay(250);
     digitalWrite(pin4,HIGH);
     digitalWrite(pin8,HIGH);
     delay(250);
    digitalWrite(pin4,LOW);
    digitalWrite(pin8,LOW);
      delay(250);
       digitalWrite(pin7,HIGH);
     digitalWrite(pin8,HIGH);
     delay(250);
    digitalWrite(pin7,LOW);
    digitalWrite(pin8,LOW);
      delay(250);
       digitalWrite(pin12,HIGH);
     digitalWrite(pin8,HIGH);
     delay(250);
    digitalWrite(pin12,LOW);
    digitalWrite(pin8,LOW);
      delay(250);
     digitalWrite(pin13,HIGH);
     digitalWrite(pin8,HIGH);
     delay(250);
    digitalWrite(pin13,LOW);
    digitalWrite(pin8,LOW);
      delay(250);
      setup();
}
