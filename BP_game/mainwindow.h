#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "bp_window.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_BTN_GENETIC_clicked();

    void on_BTN_BPGAME_clicked();

private:
    BP_Window BP;
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
