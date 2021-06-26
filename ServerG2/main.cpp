#include <iostream>

#include "Server.h"
#include "Codex.h"
#include "Memory"
#include "Memory.h"

#include <string>
#include <windows.h>
using namespace std;

Server *Servidor = new Server();
string msj;
string Rmsj;
int pos;
void next();
void prev();
void play();
void define(string);

vector<string> swapvector;


Codex *codex  = new Codex();


void next(){
    string msj;
    msj= swapvector[pos];
    msj= msj +(string)","+swapvector[pos+1];
    Servidor->Enviar(msj);
    pos = pos+2;
}

void prev(){
    pos = pos-2;
    string msj;
    msj= swapvector[pos];
    msj= msj +(string)","+swapvector[pos+1];
    Servidor->Enviar(msj);

}


int main() {
    std::cout << "Hello, World!" << std::endl;

    int t;

    pos=0;

    cout << "Esperando mensaje" << endl;
    Rmsj = Servidor->Recibir();
    cout << "Esperando mensaje" << endl;
    swapvector =  codex->initiall(Rmsj);


  //  Memory *memoria = new Memory();

   // Codex *codex  = new Codex();

    //codex->CJson("helo");

 //   Rmsj = "1,3,2,4,2";

   // swapvector =  codex->initiall(Rmsj);




    while(true) {
        cout << "Esperando mensaje" << endl;
        Rmsj = Servidor->Recibir();



        cout << Rmsj << endl;



        //
    //    Servidor->CerrarSocket();
    //    if(Rmsj != ""){
         //   msj = memoria->insert(Rmsj);
        if(Rmsj=="next"){
            next();
        }else if(Rmsj=="prev"){
            prev();
        }else {
          //  swapvector =  codex->initiall(Rmsj);

          msj = "1,0";
        }
       // else{ msj = "0,1";}
        cout << "Enviar  mensaje" << endl;

        cout << msj << endl;
        cout << "Res  mensaje" << endl;
        Servidor->Enviar(msj);
    //    }
           // Sleep(2000);



    }

        return 0;
}
