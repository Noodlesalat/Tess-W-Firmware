#include "TessWConfiguration.h"

TessWConfiguration::TessWConfiguration() {
    this->offsetMagnitudes = 20.0;
}

TessWConfiguration::~TessWConfiguration() {}

float TessWConfiguration::getoffsetMagnitudes() {
    return this->offsetMagnitudes;
}