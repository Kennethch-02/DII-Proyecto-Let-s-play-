/********************************************************************************
** Form generated from reading UI file 'gameover.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEOVER_H
#define UI_GAMEOVER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_GameOver
{
public:
    QPushButton *pushButton;
    QLabel *label;
    QLabel *message;

    void setupUi(QDialog *GameOver)
    {
        if (GameOver->objectName().isEmpty())
            GameOver->setObjectName(QString::fromUtf8("GameOver"));
        GameOver->resize(320, 240);
        pushButton = new QPushButton(GameOver);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(210, 190, 89, 25));
        label = new QLabel(GameOver);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 20, 91, 16));
        message = new QLabel(GameOver);
        message->setObjectName(QString::fromUtf8("message"));
        message->setGeometry(QRect(50, 50, 171, 101));

        retranslateUi(GameOver);

        QMetaObject::connectSlotsByName(GameOver);
    } // setupUi

    void retranslateUi(QDialog *GameOver)
    {
        GameOver->setWindowTitle(QCoreApplication::translate("GameOver", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("GameOver", "OK", nullptr));
        label->setText(QCoreApplication::translate("GameOver", "Game Over", nullptr));
        message->setText(QCoreApplication::translate("GameOver", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GameOver: public Ui_GameOver {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEOVER_H
