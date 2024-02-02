

int pinVelD = 9;
int motorD1 = 10;
int motorD2 = 11;

int pinVelE = 3;
int motorE1 = 4;
int motorE2 = 5;


void setup() 
{
  pinMode(motorD1,OUTPUT);
  pinMode(motorD2,OUTPUT);
  pinMode(motorE1,OUTPUT);
  pinMode(motorE2,OUTPUT);

  Serial.begin(9600);
  Serial.flush();

}

void pararD()
{
  digitalWrite(motorD1, LOW);
  digitalWrite(motorD2, LOW);
  digitalWrite(pinVelD, 0);
}

void frenteD()
{
  digitalWrite(motorD1, LOW);
  digitalWrite(motorD2, HIGH);
  digitalWrite(pinVelD, 10);
}

void reversoD()
{
  digitalWrite(motorD1, HIGH);
  digitalWrite(motorD2, LOW);
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
  digitalWrite(motorE1, LOW);
  digitalWrite(motorE2, HIGH);
  digitalWrite(pinVelE, 10);
}

void reversoE()
{
  digitalWrite(motorE1, HIGH);
  digitalWrite(motorE2, LOW);
  digitalWrite(pinVelE, 10);
}

void loop() 
{
  
 // pararD();
 // pararE();
  
  String mensagem = "";
  if(Serial.available())
  {
    mensagem = Serial.readString();
    Serial.println(mensagem);

    if(mensagem == "F")
    {
      frenteD();
      frenteE();
    }
    if(mensagem == "B")
    {
      reversoD();
      reversoE();
    }
    if(mensagem == "R")
    {
      frenteD();
      pararE();
    }
    if(mensagem == "L")
    {
      frenteE();
      pararD();
    }
    if(mensagem == "G ")
    {
      pararE();
      pararD();
    }

    //delay(1000);
    

  }

}

/*void executeCommand(char command)
{
  switch(command)
  {
    case 'F':
      frenteD();
      frenteE();
    break;
    case 'B':
      reversoE();
      reversoD();
    break;
    case 'L':
      frenteE();
    break;
    case 'R':
      frenteD();
    break;
    case 'C':
      frenteD();
    break;
    case 'X':
      reversoE();
      reversoD();
    break;
    case 'T':
      frenteD();
      frenteE();
    break;
    case 'S':
      frenteE();
    break;
    case 'A':
      frenteE();
      frenteD();
    break;
    case 'P':
      pararE();
      pararD();
    break;
    default:

    break;
  }
}*/
