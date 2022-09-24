// C++ code
//
void setup()
{
  //initiazlize digital pin13 as output
  pinMode(13, OUTPUT);
}

void loop()
{
  digitalWrite(13, HIGH);//turns on the led
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(13, LOW); //turn off the led
  delay(1000); // Wait for 1000 millisecond(s)
}