//
// Created by User on 10/5/2021.
//

#ifndef SERVER_MEMORY_H
#define SERVER_MEMORY_H
#include <iostream>
#include <vector>
#include <boost/algorithm/string.hpp>
#include "Codex.h"
#include <sstream>
#include<iostream>
#include<stdlib.h>

using namespace  std;
class Memory {
public:
    Memory();

    int DN=0;
    int iN=0;
    int CN=0;
    int FN=0;
    int PN=0;

    string info;



    double* Vdoble = (double*) malloc(30*sizeof(double));
    int* Vint = (int*) malloc(30*sizeof(int));
    char* Vchar = (char*) malloc(30*sizeof(char));
    float* Vfloat = (float*) malloc(30*sizeof(float));


    string Dname[300];
    string Iname[300];
    string Cname[300];
    string Fname[300];
    string Pointer[300];
    string PointerType[300];
    int pointerpos[300];


    void clean();

    string insert(string data) ;
    string setPointer(string,string, string,int);
    string Prin(string,string);


    string json(string data);

private:
    Codex *codex;


};


#endif //SERVER_MEMORY_H
