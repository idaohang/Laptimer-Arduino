#include "Arduino.h"
#include "Stopwatch.h"

/*
This class provides a stopwatch object for the user
*/

Stopwatch::Stopwatch() :lap_number(0), lap_time(0)
{
	//nothing todo
}
void Stopwatch::begin()
{
	lap_time = millis() / 100;
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
	return millis() / 100 - lap_time;
}

const int Stopwatch::time(int &lap){
	return lap_list[lap];
}

void Stopwatch::reset()
{
	lap_number = 0;
	lap_time = 0;
}