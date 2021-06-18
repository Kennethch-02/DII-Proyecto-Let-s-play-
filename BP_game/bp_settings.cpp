#include "bp_settings.h"
#include "ui_bp_settings.h"
/**
* \brief Aplicaciòn que contiene los ajustes del juego
* @param QMainWindow
*/
BP_Settings::BP_Settings(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::BP_Settings)
{
    ui->setupUi(this);
}
/**
* \brief Establece las opciones elegidas por el ususario en el modo de juego 1vs1
* @param QMainWindow
*/
void BP_Settings::on_BTN_1vs1_clicked()
{
    mode = "1vs1";
    jugadores = ui->jugadores->value();
    max_goles = ui->goles->value();
    accept();
}
/**
* \brief Establece las opciones elegidas por el ususario en el modo de juego 1vscCPU
* @param QMainWindow
*/
void BP_Settings::on_BTN_1vsCPU_clicked()
{
    mode = "1vsCPU";
    jugadores = ui->jugadores->value();
    max_goles = ui->goles->value();
    accept();
}

void BP_Settings::on_Atras_clicked()
{
    reject();
}
