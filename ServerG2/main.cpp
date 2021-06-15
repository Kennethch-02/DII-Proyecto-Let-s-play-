#include <iostream>

#include "Server.h"
#include "Codex.h"
#include "Memory"
#include "Memory.h"
#include <string>
#include <windows.h>
using namespace std;
int main() {
    std::cout << "Hello, World!" << std::endl;

    Server *Servidor = new Server();

    Memory *memoria = new Memory();

   // Codex *codex  = new Codex();

    //codex->CJson("helo");






    string msj = "akn";
    string Rmsj;

    while(true) {
        cout << "Esperando mensaje" << endl;
        Rmsj = Servidor->Recibir();



        cout << Rmsj << endl;

        cout << "Enviar  mensaje" << endl;

        //
    //    Servidor->CerrarSocket();
    //    if(Rmsj != ""){
            msj = memoria->insert(Rmsj);

            cout << msj << endl;
        cout << "Res  mensaje" << endl;
            Servidor->Enviar(msj);
    //    }
           // Sleep(2000);



    }

        return 0;
}
