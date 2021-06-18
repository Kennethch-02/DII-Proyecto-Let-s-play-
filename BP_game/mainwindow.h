#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "bp_window.h"
#include <QTcpSocket>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    QTcpSocket *mSocket;
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    int port;

private slots:
    void on_BTN_GENETIC_clicked();

    void on_BTN_BPGAME_clicked();

    void on_Connect_clicked();

private:
    BP_Window BP;
    Ui::MainWindow *ui;
    void Connect();
};

#endif // MAINWINDOW_H
