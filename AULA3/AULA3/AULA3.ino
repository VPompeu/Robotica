#include <HCSR04.h>
int pinVelD = 11;
int motorD1= 12;
int motorD2 = 13;

int pinVelE = 9;
int motorE1= 8;
int motorE2 = 10;

int sensorE= 3;
int sensorD= 4;
int sensorF= 6;

byte triggerPin = 21;
byte echoPin = 12;

void setup () 
{
  pinMode(sensorE,INPUT);
  pinMode(sensorD,INPUT);
  pinMode(sensorF,INPUT);

  pinMode(motorD1,OUTPUT);
  pinMode(motorD2,OUTPUT);
  pinMode(motorE1,OUTPUT);
  pinMode(motorE2,OUTPUT);

  Serial.begin(9600);
  HCSR04.begin(triggerPin, echoPin);
}

void loop () 
{
  double* distances = HCSR04.measureDistanceCm();
  
  Serial.print("1: ");
  Serial.print(distances[0]);
  Serial.println(" cm");
  
  Serial.println("---");
  delay(250);
  
}