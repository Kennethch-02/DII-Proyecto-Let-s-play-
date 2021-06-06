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
    thread->start(Mseg, QThread::HighestPriority);
}

void BP_Window::on_Menu_clicked()
{
    thread->stop();
    this->destroy();
}

void BP_Window::on_BTN_Shot1_clicked()
{

}

void BP_Window::on_BTN_Shot2_clicked()
{

}
