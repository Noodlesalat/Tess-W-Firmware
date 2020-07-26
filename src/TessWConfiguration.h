#ifndef TESSWCONFIGURATION_H
#define TESSWCONFIGURATION_H

#include <string>
#include "Logging.h"

class TessWConfiguration {
  public:
    TessWConfiguration(Logging* log);
    ~TessWConfiguration();

    float getoffsetMagnitudes();
    int getHeaterPin();

  private:
    Logging* logging;

    // LOCAL Configuration
    int hardwareVersion;
    std::string tessName;
    float offsetMagnitudes;
    int heaterPin;

    // WiFi Configuration
    std::string ssid;
    std::string wifiPassword;

    // MQTT Configuration
    std::string mqttBroker;
    std::string mqttUser;
    std::string mqttPassword;
};

#endif /* TESSWCONFIGURATION_H */