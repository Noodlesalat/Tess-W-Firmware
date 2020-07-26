#include "WiFiConnection.h"
#include <string>
#include <Arduino.h>
#include <ESP8266WiFi.h>

WiFiConnection::WiFiConnection(Logging* log) {
    this->logging = log;
}

void WiFiConnection::connect(std::string ssid, std::string wifiPassword) {
    logging->write("WiFi", "Connecting to wifi network " + ssid);
    WiFi.begin(ssid.c_str(), wifiPassword.c_str());

    while (WiFi.status() != WL_CONNECTED) {
        delay(500);
    }
    logging->write("WiFi", "successfully connected to wifi network");
}