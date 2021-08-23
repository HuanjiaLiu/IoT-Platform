#include "fishtank.h"
#include "math.h"
#include "ESP8266WiFi.h"
#include "WiFiUdp.h"



fishtank mytank();                  //fishtank object, which is write in fishtank.h, the resistor is 10K ohm

const char* ssid = "aceleo2.4";               //wifi ssid and password
const char* password = "liuhuanjia@.";










void setup() {


    mytank.wifi_connect(ssid,password);

    

}

void loop() {



 


}
                                     
