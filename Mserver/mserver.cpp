#include "mserver.h"
#include "ui_mserver.h"
#include "dialog.h"
#include "QThread"
#include <thread>
/**
* \brief Aplicacion grafica del servidor, genera el apartado visiual e
* interactivo necesario para cumplir con sus funciones
* @param QMainWindow
*/
mserver::mserver(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::mserver)
{
    ui->setupUi(this);
}

mserver::~mserver()
{
    delete ui;
}
void mserver::on_Connect_clicked()
{
    Dialog m(this);
    if(m.exec() == QDialog::Rejected){
        return;
    }else{
        if(Server.startServer(m.port)){
            Server.memory = m.memory;
            Server.Memory.size = m.memory;
            Server.Memory.M_Int = (int*) malloc(Server.memory);
            Server.Memory.M_String = (QString*) malloc(Server.memory);
            Server.Memory.M_Long = (qlonglong*) malloc(Server.memory);
            Server.Memory.M_Char = (QChar*) malloc(Server.memory);
            Server.Memory.M_Float = (float*) malloc(Server.memory);
            Server.Memory.M_Double = (double*) malloc(Server.memory);
            Server.CMD.append("Started Server: Port: "+ QString::number(m.port));
            ui->Status->setText("Connected");
            ui->Connect->setDisabled(true);
            Thread();
        }else{
            Server.CMD.append("Erorr: "+Server.errorString());
        }
    }
}
void mserver::Thread(){

    ui->CMD->setText(Server.CMD);
}
