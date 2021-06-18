#include "thread.h"
#include <QtCore>
#include <QDebug>
#include <iostream>
#include<stdlib.h>
#include <boost/algorithm/string.hpp>



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
        string messeje;
        string splmes;

        messeje = Servidor->Recibir();

        vector<string> Vector;



        split( Vector, messeje, boost::is_any_of(",") );

        for (size_t i = 0; i < Vector.size(); i++){
            cout << Vector[i] << endl;
        }

        *SWA = Vector[0];
        *SWB = Vector[1];






      //  emit valswap(*swapstr);





     //   *logstr = *logstr + (string)"\n" + "mensaje recibido";
      //  emit vallog(QString::fromStdString(*logstr));
        msleep(100);
        //Servidor->CerrarSocket();


}
