bool updateWaterLevelValue(FirebaseData firebaseData, int value, String userId, int nodeId, String Date [], String Time [])
{
  //String jsonStr = "{\""+ String(value)+"}";
  //String jsonStr = "{\"Time :" +  String(Time[0]) + String(Time[1]) + "\":" + String(value)+"}";
  String jsonStr = "{\"Water" +  String(1) + "\":" + String(value)+"}";
  return Firebase.updateNode(firebaseData, "/ESP8266_Test/ESP8266_Test/"+String(userId)+"/NODE-"+ String(nodeId)+"/"+String(Date[0])+String(Date[1])+String(Date[2])+"/Water_Level/Current/", jsonStr);
  
}

bool updatepHValue(FirebaseData firebaseData, float value, String userId, int nodeId, String Date [], String Time [])
{
  //String jsonStr = "{\"Time :" +  String(Time[0]) + String(Time[1]) + "\":" + String(value)+"}";
  String jsonStr = "{\"pH" +  String(1) + "\":" + String(value)+"}";
  //String jsonStr = "{\""+ String(value)+"}";
 // Serial.println("Gave");
  return (Firebase.updateNode(firebaseData, "/ESP8266_Test/ESP8266_Test/"+String(userId)+"/NODE-"+ String(nodeId)+"/"+String(Date[0])+String(Date[1])+String(Date[2])+"/pH_Value/Current", jsonStr));
  
}


bool updateLightValue(FirebaseData firebaseData, int value, String userId, int nodeId, String Date [], String Time [])
{
  //String jsonStr = "{\"Time :" +  String(Time[0]) + String(Time[1]) + "\":" + String(value)+"}";
  String jsonStr = "{\"Light" +  String(1) + "\":" + String(value)+"}";
  //String jsonStr = "{\""+ String(value)+"}";
  return Firebase.updateNode(firebaseData, "/ESP8266_Test/ESP8266_Test/"+String(userId)+"/NODE-"+ String(nodeId)+"/"+String(Date[0])+String(Date[1])+String(Date[2])+"/Light_Status/Current", jsonStr);
  
}

bool updateTemperatureValue(FirebaseData firebaseData, float value, String userId, int nodeId, String Date [], String Time [])
{
  //String jsonStr = "{\"Time :" +  String(Time[0]) + String(Time[1]) + "\":" + String(value)+"}";
  String jsonStr = "{\"Temp" +  String(1) + "\":" + String(value)+"}";
  //String jsonStr = "{\""+ String(value)+"}";
  return Firebase.updateNode(firebaseData, "/ESP8266_Test/ESP8266_Test/"+String(userId)+"/NODE-"+ String(nodeId)+"/"+String(Date[0])+String(Date[1])+String(Date[2])+"/Temp_Value/Current", jsonStr);
  
}

bool updateNutriLevelValue(FirebaseData firebaseData, int value, String userId, int nodeId, String Date [], String Time [])
{
  String jsonStr = "{\"Nutri" +  String(1) + "\":" + String(value)+"}";
  return Firebase.updateNode(firebaseData, "/ESP8266_Test/ESP8266_Test/"+String(userId)+"/NODE-"+ String(nodeId)+"/"+String(Date[0])+String(Date[1])+String(Date[2])+"/Nutri_Level/Current/", jsonStr);
  
}

bool updateNutriCommand(FirebaseData firebaseData, int value, String userId, int nodeId, String Date [], String Time [])
{
  String jsonStr = "{\"NutriC\":" + String(value)+"}";
  return Firebase.updateNode(firebaseData, "/ESP8266_Test/ESP8266_Test/"+String(userId)+"/NODE-"+ String(nodeId)+"/"+String(Date[0])+String(Date[1])+String(Date[2])+"/Commands/", jsonStr);
  
}

bool updateHumidityValue(FirebaseData firebaseData, int value, String userId, int nodeId, String Date [], String Time [])
{
  String jsonStr = "{\"Humidity" +  String(1) + "\":" + String(value)+"}";
  return Firebase.updateNode(firebaseData, "/ESP8266_Test/ESP8266_Test/"+String(userId)+"/NODE-"+ String(nodeId)+"/"+String(Date[0])+String(Date[1])+String(Date[2])+"/Humidity/Current/", jsonStr);
  
}
