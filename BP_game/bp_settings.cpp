#include "bp_settings.h"
#include "ui_bp_settings.h"

BP_Settings::BP_Settings(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::BP_Settings)
{
    ui->setupUi(this);
}
void BP_Settings::on_BTN_1vs1_clicked()
{
    mode = "1vs1";
    jugadores = ui->jugadores->value();
    max_goles = ui->goles->value();
    accept();
}

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
