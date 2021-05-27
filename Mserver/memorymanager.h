#ifndef MEMORYMANAGER_H
#define MEMORYMANAGER_H

#include <QMap>
class MemoryManager
{
public:
    MemoryManager();
    int size;
    void* malloc(int size);
    void free_space();
    int* get_int(QString var);
    QString* get_string(QString var);
    qlonglong* get_long(QString var);
    QChar* get_char(QString var);
    float* get_float(QString var);
    double* get_double(QString var);
    void new_int(QString var, int a);
    void new_string(QString var,QString a);
    void new_long(QString var, qlonglong a);
    void new_char(QString var, QChar a);
    void new_float(QString var, float a);
    void new_double(QString var, double a);
    int *M_Int;
    QString *M_String;
    qlonglong *M_Long;
    QChar *M_Char;
    float *M_Float;
    double *M_Double;
    QMap<QString, QString> Dic_Variables;
    QMap<QString, int*> Dic_Int;
    QMap<QString, QString*> Dic_String;
    QMap<QString, qlonglong*> Dic_Long;
    QMap<QString, QChar*> Dic_Char;
    QMap<QString, float*> Dic_Float;
    QMap<QString, double*> Dic_Double;
    QMap<QString, int> Dic_References;

};

#endif // MEMORYMANAGER_H
