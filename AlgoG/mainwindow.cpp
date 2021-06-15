#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <boost/algorithm/string.hpp>
#include <cstring>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


/**
* \brief Cliente: Conecta con el servidor para completar el
* algoritmo Cliente-Servidor
* @param QTcpSocket
*/

void MainWindow::on_play_clicked()
{
    range = col*row;
    int wei = 1200/col;
    int lon = 1200/row;
    Rlist = new int[range];




    for(int i = 0; i<row ;i++){
        for(int j = 0; j<col ;j++){
            QLabel *label = new QLabel(this);
            label->setScaledContents(true);
            QPixmap *pixmap = new QPixmap("://Image/Image2.jpg");
            *pixmap = pixmap->copy(j*wei,i*lon,wei,lon);

            label->setPixmap(*pixmap);
            ui->Grid->addWidget(label,i,j);

            labelList.append(label);
            pixmapList.append(pixmap);


        }
    }
/*
    QLabel *label = new QLabel(this);
    label->setScaledContents(true);
    label->setPixmap(QPixmap("://Image/Image2.jpg").copy(0,0,wei,lon));
    ui->Grid->addWidget(label,0,0);

    label = new QLabel(this);
    label->setScaledContents(true);
    label->setPixmap(QPixmap("://Image/Image2.jpg").copy(wei,0,wei,lon));
    ui->Grid->addWidget(label,0,1);

    label = new QLabel(this);
    label->setScaledContents(true);
    label->setPixmap(QPixmap("://Image/Image2.jpg").copy(2*wei,0,wei,lon));
    ui->Grid->addWidget(label,0,2);

*//*
    QPainter painter;
    painter.begin(&*pixmapList[0]);
    painter.setOpacity(0.1);
    painter.drawPixmap(0, 0, *pixmapList[0]);
    painter.end();
    */
    cout<<pixmapList.size()<<endl;
    cout<<labelList.size()<<endl;
   // this->swap(0,2);
    cout<<"prueba 0"<<endl;
    genRlist();
    cout<<"prueba 1"<<endl;
    miximag();
    cout<<"prueba 2"<<endl;






}

void MainWindow::swap(int a,int b){
    QPixmap *var = &*pixmapList[a];


    pixmapList[a] = &*pixmapList[b];

    pixmapList[b] = &*var;


    labelList[a]->setPixmap(*pixmapList[a]);
    labelList[b]->setPixmap(*pixmapList[b]);

//-----------------List swap
    int ivar = Rlist[a];
    Rlist[a] = Rlist[b];
    Rlist[b] = ivar;






}
void MainWindow::miximag(){

    srand (time(NULL));
    for(int i = 0 ; i<range ; i++){
        swap(rand() % ( range ),rand() % ( range ));
    }

}

void MainWindow::genRlist(){
    for (int i = 0; i<range ; i++){
        Rlist[i] = i;
        cout<<Rlist[i]<<endl;
    }
}

void MainWindow::on_set_clicked()
{
    this->row=ui->spinBoxX->value();
    this->col= ui->spinBoxY->value();
}

