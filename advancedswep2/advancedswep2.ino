int green=2;
int yellow=3;
int red = 4;
int buzz = 5;
int yellow2=6;
void setup() {
  // put your setup code here, to run once:
  for(int start =2; start<=6;start++){
    pinMode(start,OUTPUT);
    
  }

}

void loop() {
  // put your main code here, to run repeatedly:
  for(int start =2; start<=6;start++){
    digitalWrite(start, HIGH);
    delay(80);
   digitalWrite(start, LOW);
   delay(80);  
  }
  for(int start =6; start>2;start--){
    digitalWrite(start, HIGH);
    delay(80);
    digitalWrite(start, LOW);
    delay(80);
    
  }

}
