#include "mserver.h"
#include "dialog.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    mserver w;
    w.show();
    return a.exec();
}
