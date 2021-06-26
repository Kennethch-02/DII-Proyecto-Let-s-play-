/*
* \brief Server Rompeca: Algoritmo genetico genetico
* @param
*/
#include <iostream>
#include <string>
#include "Codex.h"


Codex::Codex(){


}

vector<string> Codex::initiall(string json) {
    cout<<json<<endl;
    vector<string> vector;



    split( vector,json, boost::is_any_of(",") );

    top = (int)vector.size()-1;

    int *lista = new int[top];
    int *lista_a = new int[top];
    int *flista = new int[top];



    int f=stoi(vector[top]);
    int c = (int)top/f;

    cout<<f<<endl;
    cout<<c<<endl;
    swapvector;
    for (size_t i = 0; i < top; i++){
        lista[i] = stoi(vector[i]);
    }


    int pivot = pivote(lista);
    int block = -1;
    int M =0;
    int memo =-1;
    int t=0;
    int swa = 0;
    int swb = 0;
    copy(lista_a,lista);
    copy(flista,lista);


    for(int i = 0; i<100; i++) {
     //   cout<<pivot <<endl;
        if (block != 0) {
            if ((int)(pivot / f) == (int)((pivot + 1) / f)) {
                swp(flista, pivot, pivot + 1);
                cout<<"hijo>  ";
                print(flista);
                if (M < concor(flista)) {
                    swp(lista_a, pivot, pivot + 1);
                    M = concor(flista);
                    memo = 2;
                    swa = pivot;
                    swb = pivot + 1;
                }
                swp(flista, pivot, pivot + 1);

            }
        }


        if (block != 1) {
            if ((int)(pivot + c) < top) {
                swp(flista, pivot, pivot + c);
                cout<<"hijo>  ";
                print(flista);
                if (M < concor(flista)) {
                    swp(lista_a, pivot, pivot +c);
                    M = concor(flista);
                    memo = 3;
                    swa = pivot;
                    swb = pivot + c;
                }
                swp(flista, pivot, pivot + c);

            }
        }


        if (block != 2) {
            if  (  (int)(pivot / f) == (int)((pivot - 1) / f) && (pivot-1)>0) {
                swp(flista, pivot, pivot - 1);
                cout<<"hijo>  ";
                print(flista);



                if (M < concor(flista)) {
                    swp(lista_a, pivot, pivot -1);
                    M = concor(flista);
                    memo = 0;
                    swa = pivot;
                    swb = pivot -1 ;

                }
                swp(flista, pivot, pivot - 1);

            }
        }

        if (block != 3) {
            if ((int)(pivot - c) >= top) {

                swp(flista, pivot, pivot - c);
                cout<<"hijo>  ";
                print(flista);
                if (M < concor(flista)) {
                    swp(lista_a, pivot, pivot - c);
                    M = concor(flista);
                    memo = 1;
                    swa = pivot;
                    swb = pivot - c;
                }
                swp(flista, pivot, pivot - c);

            }
        }



        pivot = swb;
        block  =  memo;
        memo = -1;
        M=0;
        swapvector.push_back(to_string(swa));
        swapvector.push_back(to_string(swb));
        cout<<endl;
        cout<<swa<<endl;
        cout<<swb<<endl;
        swp(lista,swa,swb);
        swp(flista, swa, swb);
   //     print(lista);
       // Sleep(50);
        cout<<endl;
        cout<<"evolucion>  ";
        print(lista);
        cout<<"--------------"<<endl;
        t++;







    }

    return swapvector;
//    split( fields, s, boost::is_any_of(",") );
 //   split( fields[0], s, boost::is_any_of("{") );
 //   split( fields[1], s, boost::is_any_of("}") );


}
void Codex::copy(int *listaA,int *listaB){
    for(int i = 0; i<top; i++){
        listaA[i] = listaB[i];
    }
}
int Codex::pivote(int *lista) {
    for (int i = 0; i < top; i++) {
        if (lista[i] == top - 1) {
            return i;
        }
    }
}

void Codex::initial(string ini){}



int Codex::Max (int a, int b) {
    if (a > b) { return a; }

    else { return b; }

}

int Codex::concor(int *lista) {
    int con = 0;
    for(int i = 0; i < top; i++) {
        if (i == lista[i]){
        con += 1;}
    }
    return con;
}

bool Codex::orden(int *lista) {
    if (concor(lista) == top){
    return true;}
    else{
    return false;}

}

int *Codex::swp(int *Lista, int pos1, int pos2) {
    int var = Lista[pos1];
    Lista[pos1] = Lista[pos2];
    Lista[pos2] = var;
    return Lista;



}

void Codex::print(int *Lista){
    for(int i = 0; i<top;i++){

        cout<<Lista[i];
        cout<<",";
    }
    cout<<endl;
}