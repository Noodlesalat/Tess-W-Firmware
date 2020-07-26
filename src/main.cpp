#include <Arduino.h>
#include "TessWConfiguration.h"
#include "Logging.h"
#include "Heater.h"

TessWConfiguration* tessWConfiguration = nullptr;
Logging* logging = nullptr;
Heater* heater = nullptr;

void setup() {
    logging = new Logging();
    tessWConfiguration = new TessWConfiguration(logging);
    heater = new Heater(tessWConfiguration->getHeaterPin(), logging);

    // test logging
    logging->write("Test", "Test");
}

void loop() {
  
}

// converts the Hertz value from the TSL237 sensor into a magnitude value
float HzToMag(float HzTSL) {
    if (HzTSL > 0) {
        return tessWConfiguration->getoffsetMagnitudes() - 2.5 * log10(HzTSL);
    } else {
        return 0;
    }
}