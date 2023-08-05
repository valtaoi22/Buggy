const int trigPin = 13;
const int echoPin = 12;
long duration;
int distance;
int r1,r2;
int buggypin5=5;
int buggypin6=6;
int buggypin7=7;
int buggypin8=8;
void forward()
 {
 digitalWrite(5,HIGH);
 digitalWrite(6,LOW);
 digitalWrite(7,LOW);
 digitalWrite(8,HIGH);
 }
void Stop()
 {
 digitalWrite(5,LOW);
 digitalWrite(6,LOW);
 digitalWrite(7,LOW);
 digitalWrite(8,LOW);
 }
void right()
 {
 digitalWrite(5,LOW);
 digitalWrite(6,LOW);
 digitalWrite(7,LOW);
 digitalWrite(8,HIGH);
 }
void left()
 {
 digitalWrite(5,HIGH);
 digitalWrite(6,LOW);
 digitalWrite(7,LOW);
 digitalWrite(8,LOW);
 }
void setup() 
 {
 // put your setup code here, to run once:
pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
 pinMode(echoPin, INPUT); // Sets the echoPin as an Input
 pinMode(5,OUTPUT);
 pinMode(6,OUTPUT);
 pinMode(7,OUTPUT);
 pinMode(8,OUTPUT);
 pinMode(A0,INPUT);
 pinMode(A2,INPUT);
 Serial.begin(9600);
 }
void loop() 
{
 // put your main code here, to run repeatedly:
 digitalWrite(trigPin, LOW);
 delayMicroseconds(2);
 // Sets the trigPin on HIGH state for 10 micro seconds
 digitalWrite(trigPin, HIGH);
 delayMicroseconds(10);
 digitalWrite(trigPin, LOW);
 // Reads the echoPin, returns the sound wave travel time in microseconds
 duration = pulseIn(echoPin, HIGH);
 // Calculating the distance
 distance= duration*0.034/2;
 
r1=digitalRead(A0);
r2=digitalRead(A2);
if 
 (distance<=20)
 {
 Stop();
 delay(2000);
 }
if(r1==1 && r2==1)
{
 forward();
}
else if(r1==0 && r2==0)
{
 forward();
} 
else if(r1==0 && r2==1)
{
left();
}
else if(r1==1 && r2==0)
{ 
 right();
}
else
{
 Stop();
}
}
