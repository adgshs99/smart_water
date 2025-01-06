#include <WiFi.h>
#include <WiFiClient.h>
#include <HTTPClient.h>
const char* ssid = "Kinneret College";
const char* password = "";
WiFiClient client;

void WiFi_SETUP(){
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("");
  Serial.println("WiFi connected");
}

void  sendData(){
     HTTPClient http;

   http.begin(client, "http:// 10.9.1.176:4001/esp");

int httpCode = http.GET();
   if(httpCode == HTTP_CODE_OK) {
     Serial.print("HTTP response code ");
     Serial.println(httpCode);
    //  String Res = http.getString();
     //Serial.println(Res);
    //  ret = Res.toInt();
    }
    http.end();
}


