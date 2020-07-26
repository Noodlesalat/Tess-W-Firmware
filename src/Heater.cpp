#include "Heater.h"
#include "Arduino.h"

Heater::Heater(int heaterPin, Logging* logging) {
    this->heaterPin = heaterPin;
    pinMode(this->heaterPin, OUTPUT);
    digitalWrite(this->heaterPin, LOW);

    this->logging = logging;
    logging->write("Heater", "initialized heater");
}

void Heater::turnOn() {
    digitalWrite(this->heaterPin, HIGH);
    logging->write("Heater", "turned heater on");
}

void Heater::turnOff() {
    digitalWrite(this->heaterPin, LOW);
    logging->write("Heater", "turned heater off");
}