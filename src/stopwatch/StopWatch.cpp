#include "StopWatch.h"
#include <ctime>
using namespace std;

Stopwatch::Stopwatch(){
    time = 0;
}

// returns the amount of time in seconds that has passed since the process (i.e. your program) started executing
double Stopwatch::getProcessTime()
{
	time = endTime - startTime;
	return static_cast<double>(time)/CLOCKS_PER_SEC;
}

void Stopwatch::start()
{
    clock_t startTime = clock();

}

void Stopwatch::stop(){
    clock_t endTime = clock();
}

void Stopwatch::reset(){
   time = 0;
}


