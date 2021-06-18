#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "bp_settings.h"
#include "bp_window.h"
/**
* \brief Aplicacion grafica inicial, con las seccciones requeridas para la coneccion con el
* servidor y eleccion de los valores del juego.
* @param QMainWindow
*/
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    mSocket = new QTcpSocket(this);
    connect(mSocket, &QTcpSocket::readyRead, [&](){
        QTextStream T(mSocket);
        auto text = T.readAll();
    });
    ui->setupUi(this);
    ui->BTN_BPGAME->setDisabled(true);
    ui->BTN_GENETIC->setDisabled(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_BTN_GENETIC_clicked()
{

}

/**
* \brief Ejectuta el juego BpGame
* @param QMainWindow
*/
void MainWindow::on_BTN_BPGAME_clicked()
{
    BP_Settings bp(this);
    if(bp.exec() == QDialog::Rejected){
        return;
    }else{
       BP.mode = bp.mode;
       BP.max_goles = bp.max_goles;
       BP.jugadores = bp.jugadores;
       BP.START();
       BP.show();
    }
}
/**
* \brief Instrucciones realizadas al precionar el boton de conectar
* @param QMainWindow
*/
void MainWindow::on_Connect_clicked()
{
    port = ui->port->value();
    Connect();
}
/**
* \brief Connect contiene los pasos para realizar la correcta coneccion con el servidor.
* @param QMainWindow
*/
void MainWindow::Connect()
{
    mSocket->connectToHost("localhost", port);
    ui->Connect->setDisabled(true);
    ui->BTN_BPGAME->setDisabled(false);
    ui->BTN_GENETIC->setDisabled(false);
}
