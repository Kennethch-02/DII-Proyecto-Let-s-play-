#include "memorymanager.h"
#include "iostream"
/**
* \brief Clase que se encarga de realizar un control de la memoria
* de manera dinamica, junto con la asignaciòn de diccionarios.
* @param Class MemoryManager()
*/
MemoryManager::MemoryManager()
{

}
void MemoryManager::free_space(){
    Dic_Variables.clear();
    Dic_Int.clear();
    Dic_String.clear();
    Dic_Long.clear();
    Dic_Char.clear();
    Dic_Float.clear();
    Dic_Double.clear();
    Dic_References.clear();
}
void* MemoryManager::malloc(int size){
    M_Int = (int*) malloc(size);
    M_String = (QString*) malloc(size);
    M_Long = (qlonglong*) malloc(size);
    M_Char = (QChar*) malloc(size);
    M_Float = (float*) malloc(size);
    M_Double = (double*) malloc(size);
}
//get elementes
int* MemoryManager::get_int(QString var){
    return Dic_Int.value(var);
}
QString* MemoryManager::get_string(QString var){
    return Dic_String.value(var);
}
qlonglong* MemoryManager::get_long(QString var){
    return Dic_Long.value(var);
}
QChar* MemoryManager::get_char(QString var){
    return Dic_Char.value(var);
}
float* MemoryManager::get_float(QString var){
    return Dic_Float.value(var);
}
double* MemoryManager::get_double(QString var){
    return Dic_Double.value(var);
}
//Create new elements
void MemoryManager::new_int(QString var, int a){
    int size = Dic_Int.size();
    M_Int[size] = a;
    Dic_Int.insert(var, &M_Int[size]);
    Dic_Variables.insert(var, "int");
}
void MemoryManager::new_string(QString var,QString a){
    int size = Dic_String.size();
    M_String[size] = a;
    Dic_String.insert(var, &M_String[size]);
    Dic_Variables.insert(var, "string");
}
void MemoryManager::new_long(QString var, qlonglong a){
    int size = Dic_Long.size();
    M_Long[size] = a;
    Dic_Long.insert(var, &M_Long[size]);
    Dic_Variables.insert(var, "long");
}
void MemoryManager::new_char(QString var, QChar a){
    int size = Dic_Char.size();
    M_Char[size] = a;
    Dic_Char.insert(var, &M_Char[size]);
    Dic_Variables.insert(var, "char");
}
void MemoryManager::new_float(QString var, float a){
    int size = Dic_Float.size();
    M_Float[size] = a;
    Dic_Float.insert(var, &M_Float[size]);
    Dic_Variables.insert(var, "float");
}
void MemoryManager::new_double(QString var, double a){
    int size = Dic_Double.size();
    M_Double[size] = a;
    Dic_Double.insert(var, &M_Double[size]);
    Dic_Variables.insert(var, "double");
}
