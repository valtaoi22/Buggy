void setup() {
  // put your setup code here, to run once:
  pinMode(5,OUTPUT);
   pinMode(6,OUTPUT);
    pinMode(7,OUTPUT);
     pinMode(8,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
      digitalWrite(5,HIGH); //FORWARD
      digitalWrite(6,LOW);
      digitalWrite(7,LOW);
      digitalWrite(8,HIGH);
      delay(2500);
      digitalWrite(5,HIGH); //LEFT
      digitalWrite(6,LOW);
      digitalWrite(7,LOW);
      digitalWrite(8,LOW);
      delay(1300);
      digitalWrite(5,HIGH); //FORWARD
      digitalWrite(6,LOW);
      digitalWrite(7,LOW);
      digitalWrite(8,HIGH);
      delay(2500);
      digitalWrite(5,LOW); //RIGHT
      digitalWrite(6,LOW);
      digitalWrite(7,LOW);
      digitalWrite(8,HIGH);
      delay(1300);
      digitalWrite(5,HIGH); //FORWARD
      digitalWrite(6,LOW);
      digitalWrite(7,LOW);
      digitalWrite(8,HIGH);
      delay(2500);
      digitalWrite(5,LOW); //CLOCKWISE
      digitalWrite(6,HIGH);
      digitalWrite(7,LOW);
      digitalWrite(8,HIGH);
      delay(3000);
      digitalWrite(5,HIGH); //ANTICLOCKWISE
      digitalWrite(6,LOW);
      digitalWrite(7,HIGH);
      digitalWrite(8,LOW);
      delay(3000);
       digitalWrite(5,LOW); //STOP
      digitalWrite(6,LOW);
      digitalWrite(7,LOW);
      digitalWrite(8,LOW);
      delay(1000);

      
}
