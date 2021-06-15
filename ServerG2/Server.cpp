//
// Created by User on 10/5/2021.
//

#include "Server.h"


Server::Server() {
    WSAStartup(MAKEWORD(2,0), &WSAData);
    server = socket(AF_INET, SOCK_STREAM, 0);

    serverAddr.sin_addr.s_addr = INADDR_ANY;
    serverAddr.sin_family = AF_INET;
    serverAddr.sin_port = htons(5555);

    bind(server, (SOCKADDR *)&serverAddr, sizeof(serverAddr));
    listen(server, 0);

    cout << "Escuchando para conexiones entrantes." << endl;
    int clientAddrSize = sizeof(clientAddr);
    if((client = accept(server, (SOCKADDR *)&clientAddr, &clientAddrSize)) != INVALID_SOCKET)
    {
        cout << "Cliente conectado!" << endl;
    }
}

string Server::Recibir() {
    recv(client, buffer, sizeof(buffer), 0);
 //   cout << "El cliente dice: " << buffer << endl;0
    string buf=buffer;
    memset(buffer, 0, sizeof(buffer));
    return buf;
}


void Server::Enviar(string mensaje) {
    for(int i = 0; i<(int)mensaje.length();i++){
        this->buffer[i]=mensaje[i];
    }
    send(client, buffer, sizeof(buffer), 0);
    memset(buffer, 0, sizeof(buffer));
    cout << "Mensaje enviado!" << endl;
}


void Server::CerrarSocket() {
    closesocket(client);
    cout << "Socket cerrado, cliente desconectado." << endl;
}