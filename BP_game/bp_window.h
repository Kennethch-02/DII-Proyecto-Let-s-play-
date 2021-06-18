#ifndef BP_WINDOW_H
#define BP_WINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include "gameover.h"
QT_BEGIN_NAMESPACE
namespace Ui { class BP_Window; }
QT_END_NAMESPACE

class Scene;
class Thread;


class BP_Window : public QMainWindow
{
    Q_OBJECT

public:
    //QGraphicsScene *scene = new QGraphicsScene;
    //QGraphicsRectItem *rect = new QGraphicsRectItem;
    BP_Window(QWidget *parent = nullptr);
    QString mode;
    void START();
    void draw_matrix();
    void change_turn();
    static int random_num(int min, int max);
    int check_selec;
    int jugadores;
    int max_goles;
    int port;
    GameOver gameover;
signals:
    void update();
private slots:
    void on_Menu_clicked();

    void on_BTN_Shot1_clicked();

    void on_BTN_Shot2_clicked();

    void on_Right1_stateChanged(int arg1);

    void on_Up1_stateChanged(int arg1);

    void on_Left1_stateChanged(int arg1);

    void on_Down1_stateChanged(int arg1);

    void on_Up2_stateChanged(int arg1);

    void on_Right2_stateChanged(int arg1);

    void on_Left2_stateChanged(int arg1);

    void on_Down2_stateChanged(int arg1);

    void Verify();
private:
    Ui::BP_Window *ui;
    Scene *scene;
    Thread *thread;

};
#endif // BP_WINDOW_H
