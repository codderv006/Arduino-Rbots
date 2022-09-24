int a=0;



void setup()
{
  pinMode(7, INPUT);
  pinMode(11, OUTPUT);
}

void loop()
{
  a=digitalRead(7);
  if(a==HIGH)
  {
    digitalWrite(11, HIGH);
  }
  else
  {
    digitalWrite(11,LOW);
  }
}