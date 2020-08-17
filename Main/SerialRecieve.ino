void SerialRecieval()
{
  //Serial.println("Hi");
  s.write("s");
  
  StaticJsonBuffer<1000> jsonBuffer;
  JsonObject& root = jsonBuffer.parseObject(s);
  if (root == JsonObject::invalid())
  {
    //Serial.println("NO");
    return;
  }
    

  else
  {  
    Serial.print("i value: ");
    Serial.println(i);
    i = 100;
    
    Serial.println("JSON received and parsed");
  //  root.prettyPrintTo(Serial);
    lightVal = root["light"];
    nutriVal = root["nutri"];
    waterVal = root["water"];
    phVal = root["ph"];
    tempVal = root["temp"];
    humidityVal = root["humidity"];
    
    Serial.println(phVal);
    Serial.println(nutriVal);
    Serial.println(waterVal);
    Serial.println(lightVal);
    Serial.println(humidityVal);
    Serial.println(tempVal);
  

    digitalWrite(serialRecivalIndicatorPin, HIGH);
    delay(500);
    digitalWrite(serialRecivalIndicatorPin, LOW);

  }

}
