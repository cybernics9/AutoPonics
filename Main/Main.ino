#include <SoftwareSerial.h>
#include <ArduinoJson.h>

#include "DHT.h"
#define DHTPIN 2     
#define DHTTYPE DHT11 

DHT dht(DHTPIN, DHTTYPE);

SoftwareSerial s(5,6);

int lightVal;
int nutriVal;
int waterVal;
float phVal;
float tempVal;
float humidityVal;

int serialSendingLightPin = 7;


void setup() 
{
  pinMode(serialSendingLightPin, OUTPUT);
  pinMode(10, OUTPUT);
  
  s.begin(9600);
  dht.begin();

  digitalWrite(10, LOW);
}

void loop() 
{
  nutriVal = getNutriLevelSensorVal();
  waterVal = getWaterLevelSensorVal();
  phVal = getpHSensorVal();
  lightVal = getLightSensorVal();
  humidityVal = getHumidityVal();
  tempVal = getAirTempVal();

  SerialJSONCommunication();

 
}
