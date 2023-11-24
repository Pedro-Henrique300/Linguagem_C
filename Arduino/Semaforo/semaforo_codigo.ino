int pino10 = 10;//vemelho
int pino08 = 8;//amarelo
int pino06 = 6;//verde

void setup()
{
  //ativando pinos
  pinMode(pino10, OUTPUT);
  pinMode(pino08, OUTPUT);
  pinMode(pino06, OUTPUT);
}

void loop()
{
  //ligando o sinal vermelho e desligando o amarelo
  digitalWrite(pino06, HIGH);
  digitalWrite(pino08, LOW);
  delay(5000);
  
  //desligando sinal vermelho e ligando o verde
  digitalWrite(pino06, LOW);
  digitalWrite(pino10, HIGH);
  delay(5000);
  
  //desligando o sinal verde e ligando o amarelo 
  digitalWrite(pino10, LOW);
  digitalWrite(pino08, HIGH);
  delay(2000);
}
