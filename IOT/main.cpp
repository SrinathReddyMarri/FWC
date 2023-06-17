
//----------------------Skeleton Code--------------------//
#include <WiFi.h>
#include <WiFiUdp.h>
#include <ArduinoOTA.h>

//    Can be client or even host   //
#ifndef STASSID
#define STASSID "Oneplus"  // Replace with your network credentials
#define STAPSK  "asdf1234"
#endif

const char* ssid = STASSID;
const char* password = STAPSK;


void OTAsetup() {
  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);
  while (WiFi.waitForConnectResult() != WL_CONNECTED) {
    delay(5000);
    ESP.restart();
  }
  ArduinoOTA.begin();
}

void OTAloop() {
  ArduinoOTA.handle();
}

//-------------------------------------------------------//
int  x,y;
int p = 0,q = 0;
int D1,D2;

void setup(){
  OTAsetup();

  //-------------------//
  // Custom setup code //
  //-------------------//
  pinMode(2, INPUT);   
  pinMode(3, OUTPUT);   
  pinMode(13, OUTPUT);   

}

void loop() {
  OTAloop();
  delay(10);  // If no custom loop code ensure to have a delay in loop
  //-------------------//
  // Custom loop code  //
  //-------------------//
  digitalWrite(13, HIGH);
  delay(2000);
         x = digitalRead(2);
         digitalWrite(13,LOW);
         delay(1500);
         D1 = (q&&!x);
         D2 = (x);
         y = (p&&x);


         if(y==1)
         {
                 digitalWrite(3,HIGH);
         }
         else
         {
                 digitalWrite(3,LOW);
         }
         p = D1;
         q = D2; 
}




