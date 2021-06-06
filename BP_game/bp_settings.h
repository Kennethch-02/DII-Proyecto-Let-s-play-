#ifndef BP_SETTINGS_H
#define BP_SETTINGS_H

#include <QDialog>

namespace Ui {
class BP_Settings;
}

class BP_Settings : public QDialog
{
    Q_OBJECT

public:
    explicit BP_Settings(QWidget *parent = nullptr);
    QString mode;

private slots:
    void on_BTN_1vs1_clicked();

    void on_BTN_1vsCPU_clicked();

    void on_Atras_clicked();

private:
    Ui::BP_Settings *ui;
};

#endif // BP_SETTINGS_H
