int pino10 = 10;

void setup()
{
  //Ativando o pino 10 para saida
  pinMode(pino10,OUTPUT);
}
  
void loop()
{
  //ponto
  digitalWrite(pino10,HIGH);
  delay(500);
  digitalWrite(pino10,LOW);
  delay(500);
  
  digitalWrite(pino10,HIGH);
  delay(500);
  digitalWrite(pino10,LOW);
  delay(500);
  
  digitalWrite(pino10,HIGH);
  delay(500);
  digitalWrite(pino10,LOW);
  delay(500);
  
  //traço
  digitalWrite(pino10,HIGH);
  delay(1500);
  digitalWrite(pino10,LOW);
  delay(500);
  
  digitalWrite(pino10,HIGH);
  delay(1500);
  digitalWrite(pino10,LOW);
  delay(500);
  
  digitalWrite(pino10,HIGH);
  delay(1500);
  digitalWrite(pino10,LOW);
  delay(500);
  
  //ponto
  digitalWrite(pino10,HIGH);
  delay(500);
  digitalWrite(pino10,LOW);
  delay(500);
  
  digitalWrite(pino10,HIGH);
  delay(500);
  digitalWrite(pino10,LOW);
  delay(500);
  
  digitalWrite(pino10,HIGH);
  delay(500);
  digitalWrite(pino10,LOW);
  delay(1000);
}