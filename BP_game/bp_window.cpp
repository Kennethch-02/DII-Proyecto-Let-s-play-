#include "bp_window.h"
#include "ui_bp_window.h"
#include "scene.h"
#include "thread.h"
#include "mainwindow.h"

#define Mseg 200
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
    check_selec = 0;
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
        int c1=rand()%(8-5+1)+5;
        if(scene->matrix[f][c] != 3 and scene->matrix[f][c]!=1){
            if(scene->matrix[f1][c1]!=4 and scene->matrix[f1][c1]!=1){
                scene->matrix[f][c] = 1;
                scene->matrix[f1][c1] = 1;
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
        for (int columna = 0;columna<9;columna++){
            if(scene->matrix[fila][columna] == 3){
                scene->drawRect(Px+5,Py,w,h, QPen(Qt::red));
                Px += (w+2);
            }else if(scene->matrix[fila][columna] == 4){
                scene->drawRect(Px+5,Py,w,h, QPen(Qt::blue));
                Px += (w);
            }else if(scene->matrix[fila][columna] == 0){
                //scene->drawRect(Px,Py,w,h, QPen(Qt::white));
                Px += (w);
            }else if(scene->matrix[fila][columna] == 2){
                scene->drawBall(Px, Py, w, h, 0);
                scene->Ball_pos.setX(fila);
                scene->Ball_pos.setY(columna);
                Px += (w);
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
    scene->img_ball->fuerza = ui->Fuerza1->value();
    if(ui->Up1->isChecked()){
        scene->direccion = "U";
        if(ui->Left1->isChecked()){
            scene->direccion = "U/L";
        }else if(ui->Right1->isChecked()){
            scene->direccion = "U/R";
        }
    }else if(ui->Down1->isChecked()){
        scene->direccion = "D";
        if(ui->Left1->isChecked()){
            scene->direccion = "D/L";
        }else if(ui->Right1->isChecked()){
            scene->direccion = "D/R";
        }
    }else if(ui->Right1->isChecked()){
        scene->direccion = "R";
        if(ui->Up1->isChecked()){
            scene->direccion = "U/R";
        }else if(ui->Down1->isChecked()){
            scene->direccion = "D/R";
        }
    }else if(ui->Left1->isChecked()){
        scene->direccion = "L";
        if(ui->Up1->isChecked()){
            scene->direccion = "U/L";
        }else if(ui->Down1->isChecked()){
            scene->direccion = "D/L";
        }
    }
    scene->init_direction();
    scene->shoot = true;
}
void BP_Window::on_BTN_Shot2_clicked()
{
    change_turn();
    scene->img_ball->fuerza = ui->Fuerza2->value();
    if(ui->Up2->isChecked()){
        scene->direccion = "U";
        if(ui->Left2->isChecked()){
            scene->direccion = "U/L";
        }else if(ui->Right2->isChecked()){
            scene->direccion = "U/R";
        }
    }else if(ui->Down2->isChecked()){
        scene->direccion = "D";
        if(ui->Left2->isChecked()){
            scene->direccion = "D/L";
        }else if(ui->Right2->isChecked()){
            scene->direccion = "D/R";
        }
    }else if(ui->Right2->isChecked()){
        scene->direccion = "R";
        if(ui->Up2->isChecked()){
            scene->direccion = "U/R";
        }else if(ui->Down2->isChecked()){
            scene->direccion = "D/R";
        }
    }else if(ui->Left2->isChecked()){
        scene->direccion = "L";
        if(ui->Up2->isChecked()){
            scene->direccion = "U/L";
        }else if(ui->Down2->isChecked()){
            scene->direccion = "D/L";
        }
    }
    scene->init_direction();
    scene->shoot = true;
}
void BP_Window::on_Right1_stateChanged(int arg1)
{
    if(arg1 != 0){
        ui->Left1->setDisabled(true);
        check_selec++;
    }else{
        ui->Left1->setDisabled(false);
        check_selec--;
    }
}
void BP_Window::on_Up1_stateChanged(int arg1)
{
    if(arg1 != 0){
        ui->Down1->setDisabled(true);
        check_selec++;
    }else{
        ui->Down1->setDisabled(false);
        check_selec--;
    }
}
void BP_Window::on_Left1_stateChanged(int arg1)
{
    if(arg1 != 0){
        ui->Right1->setDisabled(true);
        check_selec++;
    }else{
        ui->Right1->setDisabled(false);
        check_selec--;
    }
}
void BP_Window::on_Down1_stateChanged(int arg1)
{
    if(arg1 != 0){
        ui->Up1->setDisabled(true);
        check_selec++;
    }else{
        ui->Up1->setDisabled(false);
        check_selec--;
    }
}
void BP_Window::on_Right2_stateChanged(int arg1)
{
    if(arg1 != 0){
        ui->Left2->setDisabled(true);
        check_selec++;
    }else{
        ui->Left2->setDisabled(false);
        check_selec--;
    }
}
void BP_Window::on_Up2_stateChanged(int arg1)
{
    if(arg1 != 0){
        ui->Down2->setDisabled(true);
        check_selec++;
    }else{
        ui->Down2->setDisabled(false);
        check_selec--;
    }
}
void BP_Window::on_Left2_stateChanged(int arg1)
{
    if(arg1 != 0){
        ui->Right2->setDisabled(true);
        check_selec++;
    }else{
        ui->Right2->setDisabled(false);
        check_selec--;
    }
}
void BP_Window::on_Down2_stateChanged(int arg1)
{
    if(arg1 != 0){
        ui->Up2->setDisabled(true);
        check_selec++;
    }else{
        ui->Up2->setDisabled(false);
        check_selec--;
    }
}
