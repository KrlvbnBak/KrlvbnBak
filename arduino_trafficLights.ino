// Kelvin
 
void setup()
{
  pinMode(13, OUTPUT); // Red LED
  pinMode(12, OUTPUT); // Amber LED
  pinMode(11, OUTPUT); // Green LED
}
 
void loop()
{
  // Green
  digitalWrite(13, LOW);
  digitalWrite(12, LOW);
  digitalWrite(11, HIGH);
  delay(3000); // Wait for 3000 millisecond(s)
  
  // Amber
  digitalWrite(12, HIGH);
  digitalWrite(11, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
 
  // Red
  digitalWrite(13, HIGH);
  digitalWrite(12, LOW);
  delay(3000); // Wait for 3000 millisecond(s)
 
  // Red + Blinking Amber
  digitalWrite(13, HIGH);
  digitalWrite(11, LOW);
  for (int i = 0; i < 3; i++) {
    digitalWrite(12, HIGH);
    delay(500); // Wait for 500 millisecond(s)
    digitalWrite(12, LOW);
    delay(500); // Wait for 500 millisecond(s)
  }
}
