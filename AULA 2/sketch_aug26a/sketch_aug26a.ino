int pinoVelD = 3;
int motorD1 = 4;
int motorD2 = 5;

int pinoVelE = 9;
int motorE1 = 10;
int motorE2 = 11;

void setup() 
{
  pinMode(motorD1, OUTPUT);
  pinMode(motorD2, OUTPUT);
}


void frente1()
{
  ditalWrite(motorD1, HIGH);
  ditalWrite(motorD2, HIGH);
  analogWrite(pinoVelD, 255);
}

void frente2()
{
  ditalWrite(motorE1, HIGH);
  ditalWrite(motorE1, HIGH);
  analogWrite(pinoVelE, 255);
}

void reverso1()
{
  ditalWrite(motorD1, HIGH);
  ditalWrite(motorD2, HIGH);
  analogWrite(pinoVelD, 255);
}

void reverso2()
{
  ditalWrite(motorE1, HIGH);
  ditalWrite(motorE2, HIGH);
  analogWrite(pinoVelE, 255);
}

void parar1()
{
  ditalWrite(motorD1, LOW);
  ditalWrite(motorD2, LOW);
  analogWrite(pinoVelD, 0);
}

void parar2()
{
  ditalWrite(motorE1, LOW);
  ditalWrite(motorE2, LOW);
  analogWrite(pinoVelD, 0);
}

void loop() 
{
  parar1();
  delay(3);
  frente1();
  delay(3);
  reverso1();
  delay(3);
  parar2();
  delay(3);
  frente2();
  delay(3);
  reverso2();
  delay(3);
}