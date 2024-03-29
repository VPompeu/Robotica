/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/Blink
*/

// the setup function runs once when you press reset or power the board
int v = LOW;

void setup() 
{
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(5, OUTPUT);
  pinMode(10, INPUT);
  Serial.begin(9600);
  
}

// the loop function runs over and over again forever
void loop() 
{
  v = digitalRead(10);
  if(v == LOW)
  {
    digitalWrite(5, LOW);
  }
  else
  {
    digitalWrite(5, HIGH);
  }
  //delay(1000);

 /* analogWrite(6, 150);
  delay(300);
  analogWrite(10, 200);
  delay(600);
  analogWrite(11, 255);
  delay(900);/*

  /*digitalWrite(10, HIGH); 
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);   
  delay(700);

  digitalWrite(10, LOW); 
  digitalWrite(11, HIGH);
  digitalWrite(12, LOW);   
  delay(300);

  digitalWrite(10, LOW); 
  digitalWrite(11, LOW);
  digitalWrite(12, HIGH);   
  delay(700);*/


}
