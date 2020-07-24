#include <Arduino.h>
#include "TessWConfiguration.h"
#include "Logging.h"

TessWConfiguration *tessWConfiguration = nullptr;
Logging *logging = nullptr;

void setup() {
  tessWConfiguration = new TessWConfiguration();
  logging = new Logging();

  logging->write("Test", "Test");
}

void loop() {
  
}

// converts the Hertz value from the TSL into a magnitude value
float HzToMag(float HzTSL) {
  float mv;
  
  if (HzTSL > 0) {
    mv = tessWConfiguration->getoffsetMagnitudes() - 2.5 * log10(HzTSL);
  } else {
    mv = 0;
  }

  return mv;
}