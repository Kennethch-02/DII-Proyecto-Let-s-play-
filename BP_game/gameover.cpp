#include "gameover.h"
#include "ui_gameover.h"
/**
* \brief Dialogo que muestra el GameOver del juego,y el jugador que resulta ganador
* @param QDialog
*/
GameOver::GameOver(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GameOver)
{
    ui->setupUi(this);
}

GameOver::~GameOver()
{
    delete ui;
}
/**
* \brief Metodo para establecer el mensaje que se muestra en pantalla
* @param QDialog
*/
void GameOver::set_message(QString m)
{
    ui->message->setText(m);
}
/**
* \brief Metodo que ejecuta las instrucciones del boton creado en el dialogo.
* @param QDialog
*/
void GameOver::on_pushButton_clicked()
{
    reject();
}
