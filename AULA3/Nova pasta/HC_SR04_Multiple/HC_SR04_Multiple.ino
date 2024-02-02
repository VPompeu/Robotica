#include <HCSR04.h>
int pinVelD = 3;
int motorD1 = 5;
int motorD2 = 4;

int pinVelE = 9;
int motorE1 = 11;
int motorE2 = 10;

int sensorE= 6;
int sensorD= 8;
int sensorF= 7;

//int velo = 80;

byte triggerPin = 2;
byte echoCount = 3;
byte* echoPins = new byte[echoCount] {6, 7, 8};

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
  HCSR04.begin(triggerPin, echoPins, echoCount);
}

void pararD()
{
  digitalWrite(motorD1, LOW);
  digitalWrite(motorD2, LOW);
  digitalWrite(pinVelD, 0);
}

void frenteD()
{
  digitalWrite(motorD1, HIGH);
  digitalWrite(motorD2, LOW);
  digitalWrite(pinVelD, 10);
}

void reversoD()
{
  digitalWrite(motorD1, LOW);
  digitalWrite(motorD2, HIGH);
  digitalWrite(pinVelD, 10);
}

void pararE()
{
  digitalWrite(motorE1, LOW);
  digitalWrite(motorE2, LOW);
  digitalWrite(pinVelE, 0);
}

void frenteE()
{
  digitalWrite(motorE1, HIGH);
  digitalWrite(motorE2, LOW);
  digitalWrite(pinVelE, 10);
}

void reversoE()
{
  digitalWrite(motorE1, LOW);
  digitalWrite(motorE2, HIGH);
  digitalWrite(pinVelE, 10);
}

void loop () {
  double* distances = HCSR04.measureDistanceCm();

  double distanciaF = distances[0];
  double distanciaE = distances[1];
  double distanciaD = distances[2];

  Serial.print("Esquerdo: ");
  Serial.print(distanciaE);
  Serial.print(" cm ");

  Serial.print("Direita: ");
  Serial.print(distanciaD);
  Serial.print(" cm ");

  Serial.print("Frente: ");
  Serial.print(distanciaF);
  Serial.print(" cm ");

  /*
  for (int i = 0; i < echoCount; i++) {
    Serial.print(i + 1);
    Serial.print(": ");
    Serial.print(distances[i]);
    Serial.println(" cm");
  }*/
  const double limiteFrente = 10;
  const double limiteLateral = 10;
  Serial.println("---");

 if(distanciaF < limiteFrente)
  {
    pararD();
    pararE();
    delay(300);
    reversoE();
    delay(300);
    pararD();
  }
  else if(distanciaE < limiteLateral)
  {
    pararD();
    pararE();
    delay(300);
    reversoE();
    pararE();
  }
  else if(distanciaD < limiteLateral)
  {
    pararD();
    pararE();
    delay(300);
    reversoD();
    delay(300);
    pararD();
  }
  else
  {
    frenteD();
    frenteE();
  }

  delay(600);
}