#include "pathfinding.h"
/**
* \brief Aplicacion de busqueda para el camino màs corto,
* returna una matriz marcada con el camino mas corto
* @param Matriz[5][9]
*/
pathfinding::pathfinding()
{
}
int* pathfinding::get_short(int matriz[5][9], int d_f, int d_c)
{
    int fila;
    int columna;
    int G = 10;
    int G_D = 14;
    int L_Abierta[8];
    int L_Cerrada[45];
    for(int f = 0;f<=5;f++){
        for(int c = 0;c<=9;c++){
            if(matriz[f][c] == 2){
                fila = f;
                columna = c;
            }
        }
    }
    bool search = true;
    int H;
    int dx = 1;
    int dy = 1;
    while(search){
        for(int a = 0;a<=8;a++){
            if(matriz[fila+dy][columna+dx] != 1){
                H = d_c - columna+dx;
                if(H<0){
                    H = -H;
                }
                L_Abierta[a] = dx;
                matriz[fila+dy][columna+dx] = H + G_D;
            }
        }
        L_Cerrada[fila] = columna;
        fila++;
        columna++;
    }

    return *matriz;
}


