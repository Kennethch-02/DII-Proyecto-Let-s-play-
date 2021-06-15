//
// Created by User on 10/5/2021.
//

#ifndef SERVER_SERVER_H
#define SERVER_SERVER_H
#include <iostream>
#include <string>
#include <winsock2.h>
#include <sstream>

using namespace std;

class Server {

public:

    Server();



    WSADATA WSAData;
    SOCKET server, client;
    SOCKADDR_IN serverAddr, clientAddr;
    char buffer[512];

    string Recibir();
    void Enviar(string mensaje);
    void CerrarSocket();

};


#endif //SERVER_SERVER_H
