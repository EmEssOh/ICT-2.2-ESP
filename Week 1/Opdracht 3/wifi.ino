#include <WiFi.h>
#include "secret.h"
#include "time.h"
// data below is set as a define in the file secret.h
//const char* ssid       = "HANZE-XX";
//const char* password   = "AXAXAXA";

void WiFi_connect(){
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
      delay(500);
      printf(".");
  }
  printf(" CONNECTED\r\n");
}

void setup(){
  WiFi_connect();
}

void loop(){
}

