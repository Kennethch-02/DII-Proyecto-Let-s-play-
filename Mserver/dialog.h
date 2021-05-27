#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    int port;
    int memory;
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();

private slots:
    void on_Connect_clicked();

    void on_Cancel_clicked();

private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H
