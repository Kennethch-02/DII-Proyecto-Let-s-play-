#ifndef BP_WINDOW_H
#define BP_WINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class BP_Window; }
QT_END_NAMESPACE

class BP_Window : public QMainWindow
{
    Q_OBJECT

public:
    BP_Window(QWidget *parent = nullptr);
    ~BP_Window();

private:
    Ui::BP_Window *ui;
};
#endif // BP_WINDOW_H
