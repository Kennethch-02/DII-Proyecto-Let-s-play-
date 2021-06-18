//
// Created by User on 10/5/2021.
//

#include "Memory.h"
#include "Codex.h"

Memory::Memory(){

    codex = new Codex(this);

}

/**
* \brief Server Rompeca: Guardado de documento XML
* @param
*/

string Memory::insert(string data) {
    string flag = "Non";
    ostringstream get_the_address;
    string address;
    string dat = "//";
    int k;

    if (codex->type(data) == "int") {
        int val = iN;
        for (int i = 0; i < iN; i++) {
            cout << "si entre" << endl;
            if (Iname[i] == codex->name(data)) {
                val = i;
            }
            if (Iname[i] == codex->inf(data)) {
                dat = to_string(Vint[i]);
                k = i;
            }
        }
    }
    return ""; 
}