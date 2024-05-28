#include "adaptive_low_pass_filter.h"

// adaptive lowpass Filter
int order = 1;
float cutOffFreq = 5.0; // in Hz

// Filter instance
AdaptiveLowPassFilter lpf(order, cutOffFreq);

void lpfInit(){
  lpf.setOrder(order);
  lpf.setCutOffFreq(cutOffFreq);
}

// Don't forget to initialize the sensor you want to filter it's reading



void setup() {
  Serial.begin(115200);

  lpfInit(); // you may not need to put this as it has already been intialized

  // Don't forget to initialize the sensor you want to filter it's reading
}


void loop() {

  ////////////// FILTER OPERATION /////////////////////////////////
  // calling the .filter() funtion performs the filtering
  filtered_sensor_reading = lpf.filter(unfiltered_sensor_reading);
  //////////////////////////////////////////////////////////////////////////

}
