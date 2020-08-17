void GetDateandTime()
{
  timeClient.update();
  //Serial.println(timeClient.getFormattedTime());

  Time[0] = String(timeClient.getFormattedTime().substring(0, 2));  // Hours
  Time[1] = String(timeClient.getFormattedTime().substring(3, 5));  // Minutes

  date[0] = timeClient.getFormattedDate().substring(0, 4);  // Year
  date[1] = timeClient.getFormattedDate().substring(5, 7);  // Month
  date[2] = timeClient.getFormattedDate().substring(8, 10); // Day

  Serial.println(timeClient.getFormattedTime());
}
