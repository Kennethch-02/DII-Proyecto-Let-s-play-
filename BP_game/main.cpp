#include "bp_window.h"
#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //BP_Window w;
    MainWindow w;
    w.show();
    return a.exec();
}
