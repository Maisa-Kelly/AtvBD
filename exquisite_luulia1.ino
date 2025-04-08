// C++ code
//
void setup()
{
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop()
{
  digitalWrite(9, HIGH);
  delay(2000); // Ligado por 1000 millisecond((1seg)(s)
  digitalWrite(9, LOW);
  delay(2000); // Apagado por 1000 millisecond(s)
  
  digitalWrite(10, HIGH);
  delay(3000); // Ligado por 1000 millisecond((1seg)(s)
  digitalWrite(10, LOW);
  delay(2000); // Apagado por 1000 millisecond(s)
  
  digitalWrite(11, HIGH);
  delay(4000); // Ligado por 1000 millisecond((1seg)(s)
  digitalWrite(11, LOW);
  delay(2000); // Apagado por 1000 millisecond(s)
  
  digitalWrite(12, HIGH);
  delay(5000); // Ligado por 1000 millisecond((1seg)(s)
  digitalWrite(12, LOW);
  delay(2000); // Apagado por 1000 millisecond(s)
}
