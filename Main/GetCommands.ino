bool getLightCommand(FirebaseData firebaseData, String userId, int nodeId, String Date[])
{
  Firebase.getJSON(firebaseData, "/ESP8266_Test/ESP8266_Test/" +String(userId)+ "/NODE-" +String(nodeID)+"/"+ String(Date[0])+String(Date[1])+String(Date[2]) +"/Commands");

  StaticJsonBuffer<200> jsonBuffer;
      
  JsonObject& root = jsonBuffer.parseObject(firebaseData.jsonData());

  int comm = root["LightC"];
  //Serial.println(comm);      // Prints the value from the database

  if (comm == 1)
  {
    return true; // return true if ON
  }
  else
  {
    return false;
  }
  
}

bool getNutriValveCommand(FirebaseData firebaseData, String userId, int nodeId, String Date[])
{
  Firebase.getJSON(firebaseData, "/ESP8266_Test/ESP8266_Test/" +String(userId)+ "/NODE-" +String(nodeID)+"/"+ String(Date[0])+String(Date[1])+String(Date[2]) +"/Commands");

  StaticJsonBuffer<200> jsonBuffer;
      
  JsonObject& root = jsonBuffer.parseObject(firebaseData.jsonData());

  int comm = root["NutriC"];
  //Serial.println(comm);      // Prints the value from the database

  if (comm == 1)
  {
    return true; // return true if ON
  }
  else
  {
    return false;
  }
}
