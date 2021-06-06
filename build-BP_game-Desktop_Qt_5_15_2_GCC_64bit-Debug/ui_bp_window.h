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
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BP_Window
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QGraphicsView *graphicsView;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QSpacerItem *verticalSpacer;
    QLabel *L_Jugador1;
    QSpinBox *Fuerza1;
    QPushButton *Menu;
    QPushButton *BTN_Shot1;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_2;
    QGridLayout *gridLayout_4;
    QLCDNumber *LCD_J2;
    QLCDNumber *LCD_J1;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_5;
    QLabel *label_4;
    QSpinBox *Fuerza2;
    QPushButton *BTN_Shot2;
    QLabel *L_Jugador2;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *verticalSpacer_5;

    void setupUi(QMainWindow *BP_Window)
    {
        if (BP_Window->objectName().isEmpty())
            BP_Window->setObjectName(QString::fromUtf8("BP_Window"));
        BP_Window->resize(1000, 781);
        BP_Window->setMinimumSize(QSize(600, 600));
        BP_Window->setMaximumSize(QSize(1000, 1000));
        centralwidget = new QWidget(BP_Window);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(graphicsView->sizePolicy().hasHeightForWidth());
        graphicsView->setSizePolicy(sizePolicy);
        graphicsView->setMinimumSize(QSize(625, 625));
        graphicsView->setMaximumSize(QSize(625, 625));

        gridLayout->addWidget(graphicsView, 3, 2, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);


        gridLayout_2->addLayout(horizontalLayout, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 4, 0, 1, 1);

        L_Jugador1 = new QLabel(centralwidget);
        L_Jugador1->setObjectName(QString::fromUtf8("L_Jugador1"));
        QFont font;
        font.setFamily(QString::fromUtf8("Ubuntu Condensed"));
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        L_Jugador1->setFont(font);
        L_Jugador1->setLayoutDirection(Qt::LeftToRight);

        gridLayout_2->addWidget(L_Jugador1, 0, 0, 1, 2);

        Fuerza1 = new QSpinBox(centralwidget);
        Fuerza1->setObjectName(QString::fromUtf8("Fuerza1"));
        Fuerza1->setMinimum(1);
        Fuerza1->setMaximum(11);

        gridLayout_2->addWidget(Fuerza1, 1, 1, 1, 1);

        Menu = new QPushButton(centralwidget);
        Menu->setObjectName(QString::fromUtf8("Menu"));

        gridLayout_2->addWidget(Menu, 5, 0, 1, 2);

        BTN_Shot1 = new QPushButton(centralwidget);
        BTN_Shot1->setObjectName(QString::fromUtf8("BTN_Shot1"));

        gridLayout_2->addWidget(BTN_Shot1, 2, 0, 1, 2);


        gridLayout->addLayout(gridLayout_2, 3, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 4, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 0, 1, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        LCD_J2 = new QLCDNumber(centralwidget);
        LCD_J2->setObjectName(QString::fromUtf8("LCD_J2"));
        LCD_J2->setLayoutDirection(Qt::LeftToRight);

        gridLayout_4->addWidget(LCD_J2, 0, 1, 1, 1);

        LCD_J1 = new QLCDNumber(centralwidget);
        LCD_J1->setObjectName(QString::fromUtf8("LCD_J1"));

        gridLayout_4->addWidget(LCD_J1, 0, 0, 1, 1);


        gridLayout->addLayout(gridLayout_4, 0, 2, 3, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_5->addWidget(label_4, 0, 0, 1, 1);

        Fuerza2 = new QSpinBox(centralwidget);
        Fuerza2->setObjectName(QString::fromUtf8("Fuerza2"));
        Fuerza2->setMinimum(1);
        Fuerza2->setMaximum(10);
        Fuerza2->setSingleStep(0);
        Fuerza2->setStepType(QAbstractSpinBox::DefaultStepType);

        gridLayout_5->addWidget(Fuerza2, 0, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout_5, 1, 0, 1, 1);

        BTN_Shot2 = new QPushButton(centralwidget);
        BTN_Shot2->setObjectName(QString::fromUtf8("BTN_Shot2"));

        gridLayout_3->addWidget(BTN_Shot2, 2, 0, 1, 1);

        L_Jugador2 = new QLabel(centralwidget);
        L_Jugador2->setObjectName(QString::fromUtf8("L_Jugador2"));
        L_Jugador2->setFont(font);

        gridLayout_3->addWidget(L_Jugador2, 0, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_4, 3, 0, 1, 1);


        gridLayout->addLayout(gridLayout_3, 3, 3, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_5, 0, 3, 1, 1);

        BP_Window->setCentralWidget(centralwidget);

        retranslateUi(BP_Window);

        QMetaObject::connectSlotsByName(BP_Window);
    } // setupUi

    void retranslateUi(QMainWindow *BP_Window)
    {
        BP_Window->setWindowTitle(QCoreApplication::translate("BP_Window", "BP_Window", nullptr));
        label_2->setText(QCoreApplication::translate("BP_Window", "Fuerza", nullptr));
        L_Jugador1->setText(QCoreApplication::translate("BP_Window", "Jugador 1", nullptr));
        Menu->setText(QCoreApplication::translate("BP_Window", "Menu", nullptr));
        BTN_Shot1->setText(QCoreApplication::translate("BP_Window", "SHOT!", nullptr));
        label_4->setText(QCoreApplication::translate("BP_Window", "Fuerza", nullptr));
        BTN_Shot2->setText(QCoreApplication::translate("BP_Window", "SHOT!", nullptr));
        L_Jugador2->setText(QCoreApplication::translate("BP_Window", "JUGADOR 2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BP_Window: public Ui_BP_Window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BP_WINDOW_H
