// C++ code
void setup()
{
  //initiazlize digital pin13 as output
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop()
{
  digitalWrite(12, HIGH);
  delay(1000); 
  digitalWrite(12, LOW); 
  digitalWrite(13, HIGH);
  delay(1000); 
  digitalWrite(13, LOW);
   
}