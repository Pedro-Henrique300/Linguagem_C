# define pin_temp A0 
  
void setup()
{
  pinMode(pin_temp, INPUT);
  
  Serial.begin(9600);
  Serial.println("Arduino Inicializado!"); 
}

void loop()
{
  float temp = analogRead(pin_temp);
  
  temp = ((temp*5)/1024 - 0.5) * 100; // Convertendo para °C
  
  Serial.print(temp);
  Serial.println(" C");
  
  delay(2000);
}