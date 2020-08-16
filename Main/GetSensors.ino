int getNutriLevelSensorVal()
{
  int value = analogRead(A3);  // Dummy pin number

  return value;
  
  
}

int getWaterLevelSensorVal()
{
  int value = analogRead(A2);

  
  return value;
 
  
}

float getpHSensorVal()
{
  unsigned long int avgValue;
  float b;
  int buf[10], temp;
  int sensorValue = 0;
  float calibration = 21.34;

  
  for (int i = 0; i < 10; i++)
  {
    buf[i] = analogRead(A0); // Dummy pin
    delay(30);
  }

  for (int i = 0; i < 9; i++)
  {
    for (int j = i+1; j < 10; j++)
    {
      if (buf[i] > buf[j])
      {
        temp = buf[i];
        buf[i] = buf[j];
        buf[j] = temp;
      }
    }
  }

  avgValue = 0;

  for (int i = 2; i < 8; i++)
  {
    avgValue += buf[i];
  }
  
  float pHVol = (float)avgValue*5.0/1024/6;
  float phValue = -5.70 * pHVol + calibration + 11;

//Serial.print("sensor = ");
//Serial.println(phValue);

return phValue;

delay(500);
  
}

int getLightSensorVal()
{
  int value = digitalRead(3);
//Serial.println(value);

  
  if (value)
  {
    return 1;   // Light is NOT ON
  }
  else
  {
    return 0; // Light is ON
  }
  
}

float getHumidityVal()
{
   float h = dht.readHumidity();

   if (isnan(h))
   {
    Serial.println("Failed to read Humidity!");
    return 0;
   }
   else
   {
    return h;
   }
   
}

float getAirTempVal()
{
  float t = dht.readTemperature();

   if (isnan(t))
   {
    Serial.println("Failed to read Air Temperature!");
    return 0;
    
   }
   else
   {
    return t;
   }
}


float getWaterTempSensorVal()
{
  return 25;
}
