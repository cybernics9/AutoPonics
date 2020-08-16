void SerialJSONCommunication()
{


  StaticJsonBuffer<1000> jsonBuffer;
  JsonObject& root = jsonBuffer.createObject();

  root["ph"] = phVal;
  root["nutri"] = nutriVal;
  root["water"] = waterVal;
  root["light"] = lightVal;
  root["humidity"] = humidityVal;
  root["temp"] = tempVal;


  if (s.available() > 0)
  {
    digitalWrite(serialSendingLightPin, HIGH);
    root.printTo(s);
    delay(500);
    digitalWrite(serialSendingLightPin, LOW);
  }


}
