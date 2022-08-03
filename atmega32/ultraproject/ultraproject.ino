#define trigPin1 9
#define echoPin1 8
#define trigPin2 7
#define echoPin2 6


long duration, distance, RightSensor,BackSensor,FrontSensor,LeftSensor;

void setup()
{
Serial.begin (9600);
pinMode(trigPin1, OUTPUT);
pinMode(echoPin1, INPUT);
pinMode(trigPin2, OUTPUT);
pinMode(echoPin2, INPUT);

}

void loop() {

RightSensor = SonarSensor(trigPin1, echoPin1);
LeftSensor = SonarSensor(trigPin2, echoPin2);


Serial.print(LeftSensor);
Serial.print(" - ");
Serial.println(RightSensor);
}

float SonarSensor(int trigPin,int echoPin)
{
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
duration = pulseIn(echoPin, HIGH);
//distance = (duration/2) / 29.1;
distance =  (duration * 0.034) / 2;  // the speed of sound was measured in milliseconds so its converted to seconds :- the distance is in cm
return distance;

}
