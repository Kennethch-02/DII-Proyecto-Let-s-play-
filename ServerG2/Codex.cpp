/**
* \brief Server Rompeca: Algoritmo genetico genetico
* @param
*/

#include "Codex.h"


Codex::Codex(Memory *memo):memory(memo){


}

vector<string> Codex::CJson(string json) {
    vector <string>fields;
//    split( fields, s, boost::is_any_of(",") );
 //   split( fields[0], s, boost::is_any_of("{") );
 //   split( fields[1], s, boost::is_any_of("}") );

    return fields;

}

string Codex::name(string data){
        vector <string>fields;
    split( fields, data, boost::is_any_of(",") );
    return fields[1];
}

string Codex::inf(string data){
        vector <string>fields;
    split( fields, data, boost::is_any_of(",") );
    return fields[2];
}

string Codex::type(string data){
        vector <string>fields;
    split( fields, data, boost::is_any_of(",") );
    return fields[0];
}

string Codex::dir(string data){
      vector <string>fields;
    split( fields, data, boost::is_any_of(",") );
    return fields[3];
}