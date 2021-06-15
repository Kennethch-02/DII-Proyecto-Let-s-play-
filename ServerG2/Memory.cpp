//
// Created by User on 10/5/2021.
//

#include "Memory.h"
#include "Codex.h"

Memory::Memory(){

    codex = new Codex(this);

}

string Memory::insert(string data) {
    string flag = "Non";
    ostringstream get_the_address;
    string address;
    string dat = "//";
    int k;

    if (codex->type(data)=="int"){
        int val = iN;
        for(int i = 0; i<iN ; i++){
            cout<<"si entre"<<endl;
            if(Iname[i]==codex->name(data)){
                val= i;
            }
            if(Iname[i]==codex->inf(data)) {
                dat = to_string(Vint[i]);
                k= i;
            }
        }

        if(dat=="//"){
            dat = codex->inf(data);
        }
        if(codex->dir(data)=="val") {
            cout<<"variable normal"<<endl;
            get_the_address << &Vint[val];
            cout<<val<<endl;
            cout<<&Vint[val]<<endl;
            address = get_the_address.str();
            cout<<address<<endl;
            Iname[val] = codex->name(data);
            Vint[val] = stoi(dat);
            iN++;
            return (string)codex->name(data)+"  " + (string)dat +"  "+address;
        }else{
            get_the_address << &Vint[k];
            address = get_the_address.str();
            return setPointer(data,dat,address,k);
        }

    }

    else if (codex->type(data)=="float"){
        int val = FN;
        for(int i = 0; i<FN ; i++){
            cout<<"si entre"<<endl;
            if(Fname[i]==codex->name(data)){
                val= i;
            }
            if(Fname[i]==codex->inf(data)) {
                dat = to_string(Vfloat[i]);
                k= i;
            }
        }

        if(dat=="//"){
            dat = codex->inf(data);
        }
        if(codex->dir(data)=="val") {
            cout<<"variable normal"<<endl;
            get_the_address << &Vfloat[val];
            cout<<val<<endl;
            cout<<&Vfloat[val]<<endl;
            address = get_the_address.str();
            cout<<address<<endl;
            Fname[val] = codex->name(data);
            Vfloat[val] = stof(dat);
            FN++;
            return (string)codex->name(data)+"  " + (string)dat +"  "+address;
        }else{
            get_the_address << &Vfloat[k];
            address = get_the_address.str();
            return setPointer(data,dat,address,k);
        }

    }

    else if (codex->type(data)=="double"){
        int val = DN;
        for(int i = 0; i<DN ; i++){
            if(Dname[i]==codex->name(data)){
                val= i;
            }
            if(Dname[i]==codex->inf(data)) {
                dat = to_string(Vdoble[i]);
                k= i;
            }
        }

        if(dat=="//"){
            dat = codex->inf(data);
        }
        if(codex->dir(data)=="val") {
            cout<<"variable normal"<<endl;
            get_the_address << &Vdoble[val];
            cout<<val<<endl;
            cout<<&Vdoble[val]<<endl;
            address = get_the_address.str();
            cout<<address<<endl;
            Dname[val] = codex->name(data);
            Vdoble[val] = stod(dat);
            DN++;
            return (string)codex->name(data)+"  " + (string)dat +"  "+address;
        }else{
            get_the_address << &Vdoble[k];
            address = get_the_address.str();
            return setPointer(data,dat,address,k);
        }

    }

    else if (codex->type(data)=="char"){
        int val = CN;
        for(int i = 0; i<CN ; i++){
            if(Cname[i]==codex->name(data)){
                val= i;
            }
            if(Cname[i]==codex->inf(data)) {
                dat = to_string(Vchar[i]);
                k= i;
            }
        }

        if(dat=="//"){
            dat = codex->inf(data);
        }
        if(codex->dir(data)=="val") {
            cout<<"variable normal"<<endl;
            get_the_address << &Vchar[val];
            cout<<val<<endl;
            cout<<&Vchar[val]<<endl;
            address = get_the_address.str();
            cout<<address<<endl;
            Cname[val] = codex->name(data);
            Vchar[val] = dat[0];
            CN++;
            return (string)codex->name(data)+"  " + (string)dat +"  "+address;
        }else{
            get_the_address << &Vchar[k];
            address = get_the_address.str();
            return setPointer(data,dat,address,k);
        }
    }


    else if(codex->type(data)=="print"){
        if (codex->dir(data)=="val"){
            return Prin(codex->name(data),codex->inf(data));
        }
    }







    else{
        cout<<"no encontrado Type"<<endl;
    }



}
string Memory::json(string data){
    cout<<data<<endl;
    if (codex->type(data)=="int") {
        cout<<"entre"<<endl;
        Vint[iN] = stoi(codex->inf(data));
        return codex->inf(data);
    }
}

string Memory::setPointer(string data,string value, string address,int i){

    for(int j = 0; j<PN;i++){
        if(Pointer[j]==codex->name(data)){
            pointerpos[j] = i;
            return Pointer[j]+"  "+value+"  "+address;
        }
    }

    Pointer[PN] = codex->name(data);
    PointerType[PN] = codex->type(data) ;
    pointerpos[PN]=i;
    PN++;
    return Pointer[PN-1]+"  "+value+"  "+address;

}


string Memory::Prin(string type,string name){
    if(type=="int"){
        for(int i=0; i<iN;i++){
            if(Iname[i]==name){
                return ">" + to_string(Vint[i]);
            }
        }
    }
    else if(type=="float"){
        for(int i=0; i<FN;i++){
            if(Fname[i]==name){
                return ">" + to_string(Vfloat[i]);
            }

        }
    }

    else if(type=="double"){
        for(int i=0; i<DN;i++){
            if(Dname[i]==name){
                return ">" + to_string(Vdoble[i]);
            }

        }
    }
    else if(type=="char"){
        for(int i=0; i<CN;i++){
            if(Cname[i]==name){
                return ">" + to_string(Vchar[i]);
            }

        }
    }
}

