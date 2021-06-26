//
// Created by User on 10/5/2021.
//

#ifndef SERVER_CODEX_H
#define SERVER_CODEX_H

#include <boost/algorithm/string.hpp>
#include <winsock2.h>
#include <vector>

#include <iostream>
#include <string>

using namespace std;



class Codex {

public:
    Codex();
    vector<string>CJson(string json);

    vector<string> swapvector;

    string *swaplist;
    int top;




    int *swp(int *Lista, int pos1, int pos2);

    bool orden(int *lista);

    int concor(int *lista);

    int Max(int a, int b);

    int pivote(int *lista);

    int cong(int lista);

    vector<string> initiall(string json);

    void initial(string ini);

    void copy(int *listaA, int *listaB);

    void print(int *Lista);
};


#endif //SERVER_CODEX_H
