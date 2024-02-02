#include <Servo.h>

Servo myservo;
int v = LOW;

void setup() 
{
  myservo.attach(9);
  pinMode(5, INPUT);
  Serial.begin(9600);
}

void loop() 
{
  v= digitalRead(5);
  if(v == HIGH)
  {
    digitalWrite(5, LOW);
    myservo.write(180);
  }
  else
  {
    digitalWrite(5, HIGH);
    myservo.write(90);
  }
  delay(1000);

  
 // delay(2000);
  
 // delay(2000);
}
