#include "bp_window.h"
#include "ui_bp_window.h"
#include "scene.h"
#include "thread.h"
#include "mainwindow.h"

#define Mseg 10
BP_Window::BP_Window(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::BP_Window)
{
    ui->setupUi(this);
    scene = new Scene(this);
    thread = new Thread(this);
    ui->graphicsView->setScene(scene);
    connect(thread, &Thread::already, [&](){
        emit update();
    });
    connect(this, &BP_Window::update, scene,
            &Scene::Update);
}
void BP_Window::START()
{
    ui->LCD_MaxGoals->display(max_goles);
    if(mode != "1vs1"){
        ui->L_Jugador2->setText("CPU");
    }
    ui->BTN_Shot2->setDisabled(true);
    ui->Fuerza2->setDisabled(true);
    draw_matrix();
    thread->start(Mseg, QThread::HighestPriority);
}

void BP_Window::draw_matrix()
{
    int max_jugadores = jugadores/2;
    for (int i = 0; i<max_jugadores;i++){
        int f = rand()%(4-0+1)+0;
        int c = rand()%(3-0+1)+0;
        int f1=rand()%(4-0+1)+0;
        int c1=rand()%(7-4+1)+4;
        if(matrix[f][c] != 3 and matrix[f][c]!=1){
            if(matrix[f1][c1]!=4 and matrix[f1][c1]!=1){
                matrix[f][c] = 1;
                matrix[f1][c1] = 1;
            }else{
                i--;
            }
        }else{
            i--;
        }
   }
    double Px = 0.5;
    double Py = 0.5;
    double w = 85.0;
    double h = 85.0;
    for (int fila = 0; fila<5 ;fila++) {
        for (int columna = 0;columna<8;columna++ ) {
            if(matrix[fila][columna] == 3){
                scene->drawRect(Px,Py,w,h, QPen(Qt::red));
                Px += (w+2);
            }else if(matrix[fila][columna] == 4){
                scene->drawRect(Px,Py,w,h, QPen(Qt::blue));
                Px += (w+0.5);
            }else if(matrix[fila][columna] == 0){
                //scene->drawRect(Px,Py,w,h, QPen(Qt::white));
                Px += (w+0.5);
            }else{
                scene->drawRect(Px+5,Py+5,w-10,h-10, QPen(Qt::black));
                scene->drawRect(Px+10,Py+10,w-20,h-20, QPen(Qt::black));
                scene->drawRect(Px+20,Py+20,w-40,h-40, QPen(Qt::black));
                Px += (w+0.5);
            }
        }
        Px = 0;
        Py+=(w+0.5);
    }
}
void BP_Window::change_turn()
{
    if (ui->BTN_Shot2->isEnabled()){
        ui->BTN_Shot2->setDisabled(true);
        ui->Fuerza2->setDisabled(true);
        ui->BTN_Shot1->setDisabled(false);
        ui->Fuerza1->setDisabled(false);
    }else{
        ui->BTN_Shot2->setDisabled(false);
        ui->Fuerza2->setDisabled(false);
        ui->BTN_Shot1->setDisabled(true);
        ui->Fuerza1->setDisabled(true);
    }
}
void BP_Window::on_Menu_clicked()
{
    thread->stop();
    this->destroy();
}
void BP_Window::on_BTN_Shot1_clicked()
{
    change_turn();
}
void BP_Window::on_BTN_Shot2_clicked()
{
    change_turn();
}
