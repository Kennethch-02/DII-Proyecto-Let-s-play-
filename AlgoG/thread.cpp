#include "thread.h"
#include <QtCore>
#include <QDebug>
#include <iostream>
#include<stdlib.h>




using namespace std;
Thread::Thread(QObject *parent, string* wstr, string* SA ,string* SB): QThread(parent),
    swapstr(wstr),SWA(SA),SWB(SB)


{
        Servidor = new Server();
}

void Thread::sendmsj(string codeText){
    Servidor->Enviar(codeText);
}

void Thread::run(){



        //emit numero(i);
        string messejeA;
        string messejeB;
        string messejeC;
        messejeA = Servidor->Recibir();
        messejeB = Servidor->Recibir();
        messejeC = Servidor->Recibir();



        *swapstr= messejeC;

        emit valswap(*swapstr);





     //   *logstr = *logstr + (string)"\n" + "mensaje recibido";
      //  emit vallog(QString::fromStdString(*logstr));
        msleep(100);
        //Servidor->CerrarSocket();


}
