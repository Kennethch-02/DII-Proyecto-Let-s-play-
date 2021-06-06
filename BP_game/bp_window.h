#ifndef BP_WINDOW_H
#define BP_WINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QGraphicsRectItem>

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
signals:
    void update();
private slots:
    void on_Menu_clicked();

    void on_BTN_Shot1_clicked();

    void on_BTN_Shot2_clicked();

private:
    Ui::BP_Window *ui;
    Scene *scene;
    Thread *thread;

};
#endif // BP_WINDOW_H
