/*int pinoVelD = 3;
int motorD1 = 4;
int motorD2 = 5;

int pinoVelE = 9;
int motorE1 = 10;
int motorE2 = 11;

void setup() 
{
  pinMode(A0, INPUT);
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);

  pinMode(A1, INPUT);
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);

  pinMode(A2, INPUT);
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);

  pinMode(motorD1, OUTPUT);
  pinMode(motorD2, OUTPUT);
}


void frente1()
{
  digitalWrite(motorD1, HIGH);
  digitalWrite(motorD2, LOW);
  analogWrite(pinoVelD, 255);
}

void frente2()
{
  digitalWrite(motorE1, HIGH);
  digitalWrite(motorE1, LOW);
  analogWrite(pinoVelE, 255);
}

void reverso1()
{
  digitalWrite(motorD1, HIGH);
  digitalWrite(motorD2, LOW);
  analogWrite(pinoVelD, 255);
}

void reverso2()
{
  digitalWrite(motorE1, HIGH);
  digitalWrite(motorE2, LOW);
  analogWrite(pinoVelE, 255);
}

void parar1()
{
  digitalWrite(motorD1, LOW);
  digitalWrite(motorD2, LOW);
  analogWrite(pinoVelD, 0);
}

void parar2()
{
  digitalWrite(motorE1, LOW);
  digitalWrite(motorE2, LOW);
  analogWrite(pinoVelD, 0);
}

void loop() 
{
  int v = analogRead(A0);
  Serial.println(v);
    if(v < 200)
    {
      digitalWrite(LED_BUILTIN, LOW);
      parar1();
      delay(3);
    }
    else
    {
      digitalWrite(LED_BUILTIN, HIGH);
      frente1();
      delay(3);
    }

  int z = analogRead(A1);
  Serial.println(z);
    if(z < 200)
    {
      digitalWrite(LED_BUILTIN, LOW);
      parar1();
      delay(3);
    }
    else
    {
      digitalWrite(LED_BUILTIN, HIGH);
      frente1();
      delay(3);
    }

  int x = analogRead(A2);
  Serial.println(x);
    if(x < 200) 
    {
      digitalWrite(LED_BUILTIN, LOW);
      parar1();
      delay(3);
    }
    else
    {
      digitalWrite(LED_BUILTIN, HIGH);
      frente1();
      delay(3);
    }
}*/
int pinoVelD = 3;
int motorD1 = 4;
int motorD2 = 5;

int pinoVelE = 9;
int motorE1 = 10;
int motorE2 = 11;

void setup() 
{
  pinMode(A0, INPUT);
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);

  pinMode(A1, INPUT);
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);

  pinMode(A2, INPUT);
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);

  pinMode(motorD1, OUTPUT);
  pinMode(motorD2, OUTPUT);
}

void loop()
{
  //direita
  int v = analogRead(A2);
  Serial.println(v);
    if(v > 200)
    {
      digitalWrite(LED_BUILTIN, LOW);
      digitalWrite(motorD1, LOW);
      digitalWrite(motorD2, HIGH);
      analogWrite(pinoVelD, 255);
      delay(3);
      
    }
    else
    {
      digitalWrite(LED_BUILTIN, HIGH);
      digitalWrite(motorD1, LOW);
      digitalWrite(motorD2, LOW);
      analogWrite(pinoVelD, 0);
      delay(3);
    }
    //ESQUERDA
  int z = analogRead(A4);
  Serial.println(z);
    if(z > 200)
    {
      digitalWrite(LED_BUILTIN, LOW);
      digitalWrite(motorE1, HIGH);
      digitalWrite(motorE2, LOW);
      analogWrite(pinoVelE, 255);
      delay(3);
      
    }
    else
    {
      digitalWrite(LED_BUILTIN, HIGH);
      digitalWrite(motorE1, LOW);
      digitalWrite(motorE2, LOW);
      analogWrite(pinoVelE, 0);
      delay(3);
    }

    //FRENTE
  int t = analogRead(A1);
  Serial.println(t);
    if(t > 200)
    {
      digitalWrite(LED_BUILTIN, LOW);
      digitalWrite(motorE1, HIGH);
      digitalWrite(motorD1, LOW);
      digitalWrite(motorE2, LOW);
      digitalWrite(motorD2, HIGH);
      analogWrite(pinoVelE, 255);
      analogWrite(pinoVelD, 255);
      delay(3);
      
    }
    else
    {
      digitalWrite(LED_BUILTIN, HIGH);
      digitalWrite(motorE1, LOW);
      digitalWrite(motorD1, LOW);
      digitalWrite(motorE2, LOW);
      digitalWrite(motorD2, LOW);
      analogWrite(pinoVelD, 0);
      analogWrite(pinoVelE, 0);
      delay(3);
    }

/*
  int z = analogRead(A1);
  Serial.println(z);
    if(z < 200)
    {
      digitalWrite(LED_BUILTIN, LOW);
      parar1();
      delay(3);
    }
    else
    {
      digitalWrite(LED_BUILTIN, HIGH);
      frente1();
      delay(3);
    }

  int x = analogRead(A2);
  Serial.println(x);
    if(x < 200) 
    {
      digitalWrite(LED_BUILTIN, LOW);
      parar1();
      delay(3);
    }
    else
    {
      digitalWrite(LED_BUILTIN, HIGH);
      frente1();
      delay(3);
    }*/
}