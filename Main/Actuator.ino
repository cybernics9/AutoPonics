void startLights()
{
  digitalWrite(LEDStripPin, LOW);  // D3 pin  IN 1
}

void endLights()
{
  digitalWrite(LEDStripPin, HIGH);  // D3 pin IN 1
}

void openNutrientValve()
{
  digitalWrite(valvePin, LOW); // D4 pin IN 2
}

void closeNutrientValve()
{
  digitalWrite(valvePin, HIGH);  // D4 pin IN 2
}

void openAndcloseNutrientValve()
{
  digitalWrite(valvePin, LOW);  // D4 pin IN 2
  delay(10000);
  digitalWrite(valvePin, HIGH);
}
