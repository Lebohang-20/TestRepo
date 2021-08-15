#ifndef STOPWATCH_H
#define STOPWATCH_H



class Stopwatch
{




public:
    Stopwatch();
    void start();
    void stop();
    void reset();
    double getProcessTime(); // returns the amount of time in seconds that has passed since the process (i.e. your program) started executing

private:
    double time;
    double startTime;
    double endTime;

};



#endif

