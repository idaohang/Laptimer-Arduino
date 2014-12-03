#include "Arduino.h"
#include "Stopwatch.h"

/*
This class provides a stopwatch object for the user
 */ 

Stopwatch::Stopwatch():lap_number(0),lap_time(0)
{
  //set all laps to -1
  for(int i = 0; i < 100; ++i) lap_list[i] = -1;
}
void Stopwatch::begin()
{
    lap_time = millis()/100;
}

void Stopwatch::stop()
{
    lap_list[lap_number] = current_time();
}
int Stopwatch::lap()
{
    stop();
    lap_number++;
    begin();
    return lap_number;
}

const int Stopwatch::current_time()
{
    return millis()/100 - lap_time;
}

const int Stopwatch::time(int & lap){
    return lap_list[lap];
}
int * Stopwatch::fastestLap(){
  int minLap = 32767;
  static int data[2];
  for(int i  = 0; i < 100; ++i){
    if(time(i) != -1 && time(i) < minLap){ 
      minLap = time(i);
      data[0] = time(i);
      data[1] = i;      
    }
  }
  return data;
}
void Stopwatch::reset()
{
    lap_number = 0;
    lap_time = 0;
}
