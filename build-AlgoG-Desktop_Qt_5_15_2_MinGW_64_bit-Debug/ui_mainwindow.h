/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *Grid;
    QPushButton *play;
    QPushButton *prev;
    QPushButton *next;
    QSpinBox *spinBoxX;
    QSpinBox *spinBoxY;
    QPushButton *set;
    QPushButton *reset;
    QProgressBar *progressBar;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(130, 10, 521, 431));
        Grid = new QGridLayout(gridLayoutWidget);
        Grid->setObjectName(QString::fromUtf8("Grid"));
        Grid->setContentsMargins(0, 0, 0, 0);
        play = new QPushButton(centralwidget);
        play->setObjectName(QString::fromUtf8("play"));
        play->setGeometry(QRect(320, 460, 80, 21));
        prev = new QPushButton(centralwidget);
        prev->setObjectName(QString::fromUtf8("prev"));
        prev->setGeometry(QRect(220, 460, 80, 21));
        next = new QPushButton(centralwidget);
        next->setObjectName(QString::fromUtf8("next"));
        next->setGeometry(QRect(420, 460, 80, 21));
        spinBoxX = new QSpinBox(centralwidget);
        spinBoxX->setObjectName(QString::fromUtf8("spinBoxX"));
        spinBoxX->setGeometry(QRect(20, 40, 42, 22));
        spinBoxY = new QSpinBox(centralwidget);
        spinBoxY->setObjectName(QString::fromUtf8("spinBoxY"));
        spinBoxY->setGeometry(QRect(70, 40, 42, 22));
        set = new QPushButton(centralwidget);
        set->setObjectName(QString::fromUtf8("set"));
        set->setGeometry(QRect(20, 80, 80, 21));
        reset = new QPushButton(centralwidget);
        reset->setObjectName(QString::fromUtf8("reset"));
        reset->setGeometry(QRect(670, 40, 80, 21));
        progressBar = new QProgressBar(centralwidget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(220, 500, 281, 23));
        progressBar->setValue(24);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 20));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        play->setText(QCoreApplication::translate("MainWindow", "PLay", nullptr));
        prev->setText(QCoreApplication::translate("MainWindow", "Prev", nullptr));
        next->setText(QCoreApplication::translate("MainWindow", "Next", nullptr));
        set->setText(QCoreApplication::translate("MainWindow", "set", nullptr));
        reset->setText(QCoreApplication::translate("MainWindow", "reset", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
