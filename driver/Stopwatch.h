#include "Arduino.h"

#ifndef Stopwatch_h
#define Stopwatch_h

class Stopwatch{
    
public:
    Stopwatch(); //ctor
    void begin(); //
    void stop();
    int lap();
    const int current_time();
    const int time(int &lap);
     int * fastestLap();
    
    void reset();
private:
    int lap_time;
    int lap_number;
    int lap_list [100];
};

#endif
