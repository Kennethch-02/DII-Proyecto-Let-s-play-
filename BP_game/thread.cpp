#include "thread.h"

Thread::Thread(QObject *parent)
    : QThread(parent)
{
    running = true;
    Mseg = 0;
}

void Thread::start(int mseg, QThread::Priority p)
{
    Mseg = mseg;
    QThread::start(p);
}

bool Thread::isRunning()
{
    return running;
}

void Thread::stop()
{
    running = false;
}

int Thread::Msegs()
{
    return Mseg;
}
void Thread::run(){
    while (running){
        emit already();
        msleep(Mseg);
    }
}
