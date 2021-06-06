#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "bp_settings.h"
#include "bp_window.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_BTN_GENETIC_clicked()
{

}

void MainWindow::on_BTN_BPGAME_clicked()
{
    BP_Settings bp(this);
    if(bp.exec() == QDialog::Rejected){
        return;
    }else{
       BP.mode = bp.mode;
       BP.START();
       BP.show();
    }


}
