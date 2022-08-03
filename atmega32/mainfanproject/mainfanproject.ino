void setup(){
  pinMode(11, 1);
  pinMode(A1,0);
  Serial.begin(9600);
  
  
  
 }

void loop(){
  // analog write to give ending value
  int portVal = analogRead(A1);
  analogWrite(map(portVal,0,1024,0,255),11);
  Serial.println(portVal);

  
}
