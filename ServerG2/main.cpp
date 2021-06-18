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
void next();
void prev();
void play();
void define(string);





void next(){
    msj = "0,1";
}



int main() {
    std::cout << "Hello, World!" << std::endl;



  //  Memory *memoria = new Memory();

   // Codex *codex  = new Codex();

    //codex->CJson("helo");








    while(true) {
        cout << "Esperando mensaje" << endl;
        Rmsj = Servidor->Recibir();



        cout << Rmsj << endl;

        cout << "Enviar  mensaje" << endl;

        //
    //    Servidor->CerrarSocket();
    //    if(Rmsj != ""){
         //   msj = memoria->insert(Rmsj);
        if(Rmsj=="next"){
            next();
        }


            cout << msj << endl;
        cout << "Res  mensaje" << endl;
            Servidor->Enviar(msj);
    //    }
           // Sleep(2000);



    }

        return 0;
}
