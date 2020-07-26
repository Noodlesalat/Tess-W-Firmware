#ifndef HEATER_H
#define HEATER_H

#include "Logging.h"

class Heater {
    public:
        Heater(int heaterPin, Logging* logging);
        ~Heater();

        void turnOn();
        void turnOff();

        private:
            int heaterPin;
            Logging* logging;

};

#endif /* HEATER_H */