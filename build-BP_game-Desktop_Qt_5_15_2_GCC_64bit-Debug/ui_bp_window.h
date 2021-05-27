/********************************************************************************
** Form generated from reading UI file 'bp_window.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BP_WINDOW_H
#define UI_BP_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BP_Window
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *BP_Window)
    {
        if (BP_Window->objectName().isEmpty())
            BP_Window->setObjectName(QString::fromUtf8("BP_Window"));
        BP_Window->resize(800, 600);
        centralwidget = new QWidget(BP_Window);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        BP_Window->setCentralWidget(centralwidget);
        menubar = new QMenuBar(BP_Window);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        BP_Window->setMenuBar(menubar);
        statusbar = new QStatusBar(BP_Window);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        BP_Window->setStatusBar(statusbar);

        retranslateUi(BP_Window);

        QMetaObject::connectSlotsByName(BP_Window);
    } // setupUi

    void retranslateUi(QMainWindow *BP_Window)
    {
        BP_Window->setWindowTitle(QCoreApplication::translate("BP_Window", "BP_Window", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BP_Window: public Ui_BP_Window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BP_WINDOW_H
