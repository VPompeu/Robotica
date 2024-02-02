int sensor = 2;
volatile int pulsos;

int pinVelD = 9;
int motorD1 = 10;
int motorD2 = 11;

int pinVelE = 3;
int motorE1 = 4;
int motorE2 = 5;

void contador()
{
  pulsos++;
}

void setup() 
{
  attachInterrupt(digitalPinToInterrupt(sensor), contador, RISING);
  pulsos = 0;
  Serial.begin(9600);

  pinMode(motorD1,OUTPUT);
  pinMode(motorD2,OUTPUT);
  pinMode(motorE1,OUTPUT);
  pinMode(motorE2,OUTPUT);
}

void frenteE()
{
  digitalWrite(motorE1, LOW);
  digitalWrite(motorE2, HIGH);
  analogWrite(pinVelE, 100);
}

void frenteD()
{
  digitalWrite(motorD1, LOW);
  digitalWrite(motorD2, HIGH);
  analogWrite(pinVelD, 100);
}

void pararE()
{
  digitalWrite(motorE1, LOW);
  digitalWrite(motorE2, LOW);
  analogWrite(pinVelE, 0);
}

void pararD()
{
  digitalWrite(motorD1, LOW);
  digitalWrite(motorD2, LOW);
  analogWrite(pinVelD, 0);
}

void loop() 
{
  
  float distancia = (pulsos * 20.7) / 60;

  if(distancia < 31)
  {
    frenteD();
    frenteE();
  }
  else
  {
    pararD();
    pararE();
  }

  Serial.println(pulsos);
  // Serial.println(distancia);
}
