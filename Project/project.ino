int led = 12;
int buzzer = 13;
int PIR = 11;

void setup()
{
  pinMode(led, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(PIR, INPUT);
}

void loop()
{
  if(digitalRead(PIR) == HIGH)
  {
    digitalWrite(led, HIGH);
    digitalWrite(buzzer, HIGH);
    delay(1000);
  }
  else
  {
    digitalWrite(led, LOW);
    digitalWrite(buzzer, LOW);
    delay(1000);
  }
}