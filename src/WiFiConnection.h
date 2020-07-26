#ifndef WIFICONNECTION_H
#define WIFICONNECTION_H

#include <string>
#include "Logging.h"

class WiFiConnection {
    public:
        WiFiConnection(Logging* log);
        ~WiFiConnection();

        void startAccessPoint(std::string ssid);
        void connect(std::string ssid, std::string wifiPassword);

        private:
            Logging* logging;
};

#endif /* WIFICONNECTION_H */