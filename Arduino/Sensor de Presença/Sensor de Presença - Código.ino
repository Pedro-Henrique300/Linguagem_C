int sensor = 7;

void setup()
{
  pinMode(sensor, INPUT);
  
  Serial.begin(9600);
  Serial.println("Arduino Inicializado!");
}

void loop()
{
  int acionamento = digitalRead(sensor);
  
  Serial.println(acionamento);
  
  delay(2000);
}