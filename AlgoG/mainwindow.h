#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QLabel>
#include <iostream>
#include <string>
#include <sstream>
#include <QPainter>
#include <vector>
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <thread.h>
#include <Server.h>
#include <QMainWindow>
#include <iostream>
using namespace std;



QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void swap(int,int);
    void on_play_clicked();
    void miximag();
    void on_set_clicked();
    void genRlist();
    void prevOrder();
    void nextOrder();


    void on_reset_clicked();

    void on_next_clicked();

    void on_mixinit_clicked();

    void on_prev_clicked();

private:
    Ui::MainWindow *ui;
    int row;
    int col;
    int range;
    QList<QLabel*> labelList;
    QList<QPixmap*> pixmapList;
    int *Rlist;
    int *slist;
    Server *Servidor;
    Thread *sThread;
    string swapstr;
    string SWA;
    string SWB;
    string status;

    int progress;




};
#endif // MAINWINDOW_H
