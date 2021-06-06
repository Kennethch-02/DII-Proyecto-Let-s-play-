#ifndef THREAD_H
#define THREAD_H
#include <QThread>


class Thread : public QThread
{
    Q_OBJECT
public:
    Thread(QObject *parent = nullptr);
    void start(int mseg, Priority p);
    bool isRunning();
    void stop();
    int Msegs();
signals:
    void already();
protected:
    void run();
private:
    bool running;
    int Mseg;
};

#endif // THREAD_H
