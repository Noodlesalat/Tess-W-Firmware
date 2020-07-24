#include "Logging.h"
#include <Arduino.h>

Logging::Logging() {
    Serial.begin(9600);
}

Logging::~Logging() {}

void Logging::write(std::string service, std::string message) {
    std::string logMessage = "[Tess-W: ";
    logMessage.append(service);
    logMessage.append("] ");
    logMessage.append(message);

    Serial.write(logMessage.c_str());
}