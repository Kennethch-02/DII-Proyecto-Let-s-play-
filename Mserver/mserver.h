#ifndef MSERVER_H
#define MSERVER_H

#include <QMainWindow>
#include<QTcpServer>
#include<server.h>
QT_BEGIN_NAMESPACE
namespace Ui { class mserver; }
QT_END_NAMESPACE
class mserver : public QMainWindow
{
    Q_OBJECT

public:
    void Thread();
    server Server;
    mserver(QWidget *parent = nullptr);
    ~mserver();

private slots:
    void on_Connect_clicked();

private:

    Ui::mserver *ui;
};
#endif // MSERVER_H
