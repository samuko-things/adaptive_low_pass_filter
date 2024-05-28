#ifndef ADAPTIVE_LOW_PASS_FILTER_H
#define ADAPTIVE_LOW_PASS_FILTER_H
#include <Arduino.h>


class AdaptiveLowPassFilter
{
  private:
    int order; // 1 or 2
    float a[2];
    float b[3];
    float omega0;
    float dt;
    float tn1 = 0;
    float x[3]; // Raw values
    float y[3]; // Filtered values

  public:  
    AdaptiveLowPassFilter(int, float);

    void setCutOffFreq(float);
    void setOrder(int);
    void setCoef();
    float filter(float);
};


#endif

