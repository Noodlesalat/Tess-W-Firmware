#include "TessWConfiguration.h"

TessWConfiguration::TessWConfiguration(Logging* log) {
    this->logging = log;
    this->offsetMagnitudes = 20.0;
}

TessWConfiguration::~TessWConfiguration() {}

float TessWConfiguration::getoffsetMagnitudes() {
    return this->offsetMagnitudes;
}

int TessWConfiguration::getHeaterPin() {
    return this->heaterPin;
}