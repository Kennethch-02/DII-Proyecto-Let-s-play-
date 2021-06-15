//
// Created by User on 10/5/2021.
//

#ifndef SERVER_CODEX_H
#define SERVER_CODEX_H
#include <string>
#include <boost/algorithm/string.hpp>
#include <winsock2.h>
#include <vector>
#include <iostream>
using namespace std;

class Memory;

class Codex {

public:
    Codex(Memory *memo);
    vector<string>CJson(string json);
    string type(string);
    string name(string);
    string inf(string);
    string dir(string);

    Memory *memory;





};


#endif //SERVER_CODEX_H
