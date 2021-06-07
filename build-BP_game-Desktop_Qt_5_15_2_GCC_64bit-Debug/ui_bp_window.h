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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BP_Window
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_4;
    QLCDNumber *LCD_J1;
    QLCDNumber *LCD_J2;
    QPushButton *Menu;
    QGridLayout *gridLayout;
    QPushButton *BTN_Shot1;
    QCheckBox *Up1;
    QCheckBox *Left1;
    QCheckBox *Right1;
    QCheckBox *Down1;
    QSpacerItem *verticalSpacer;
    QLabel *L_Jugador1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLCDNumber *LCD_MaxGoals;
    QGraphicsView *graphicsView;
    QVBoxLayout *verticalLayout;
    QLabel *L_Jugador2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QSpinBox *Fuerza2;
    QGridLayout *gridLayout_2;
    QPushButton *BTN_Shot2;
    QCheckBox *Up2;
    QCheckBox *Left2;
    QCheckBox *Right2;
    QCheckBox *Down2;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QSpinBox *Fuerza1;
    QSpacerItem *verticalSpacer_5;

    void setupUi(QMainWindow *BP_Window)
    {
        if (BP_Window->objectName().isEmpty())
            BP_Window->setObjectName(QString::fromUtf8("BP_Window"));
        BP_Window->resize(1238, 600);
        BP_Window->setMinimumSize(QSize(600, 600));
        BP_Window->setMaximumSize(QSize(2000, 1500));
        centralwidget = new QWidget(BP_Window);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_3 = new QGridLayout(centralwidget);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        LCD_J1 = new QLCDNumber(centralwidget);
        LCD_J1->setObjectName(QString::fromUtf8("LCD_J1"));

        gridLayout_4->addWidget(LCD_J1, 0, 0, 1, 1);

        LCD_J2 = new QLCDNumber(centralwidget);
        LCD_J2->setObjectName(QString::fromUtf8("LCD_J2"));
        LCD_J2->setLayoutDirection(Qt::LeftToRight);

        gridLayout_4->addWidget(LCD_J2, 0, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout_4, 0, 1, 1, 1);

        Menu = new QPushButton(centralwidget);
        Menu->setObjectName(QString::fromUtf8("Menu"));

        gridLayout_3->addWidget(Menu, 5, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        BTN_Shot1 = new QPushButton(centralwidget);
        BTN_Shot1->setObjectName(QString::fromUtf8("BTN_Shot1"));

        gridLayout->addWidget(BTN_Shot1, 1, 1, 1, 1);

        Up1 = new QCheckBox(centralwidget);
        Up1->setObjectName(QString::fromUtf8("Up1"));

        gridLayout->addWidget(Up1, 0, 1, 1, 1);

        Left1 = new QCheckBox(centralwidget);
        Left1->setObjectName(QString::fromUtf8("Left1"));

        gridLayout->addWidget(Left1, 1, 0, 1, 1);

        Right1 = new QCheckBox(centralwidget);
        Right1->setObjectName(QString::fromUtf8("Right1"));

        gridLayout->addWidget(Right1, 1, 2, 1, 1);

        Down1 = new QCheckBox(centralwidget);
        Down1->setObjectName(QString::fromUtf8("Down1"));

        gridLayout->addWidget(Down1, 2, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout, 3, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 238, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 4, 0, 1, 1);

        L_Jugador1 = new QLabel(centralwidget);
        L_Jugador1->setObjectName(QString::fromUtf8("L_Jugador1"));
        QFont font;
        font.setFamily(QString::fromUtf8("Ubuntu Condensed"));
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        L_Jugador1->setFont(font);
        L_Jugador1->setLayoutDirection(Qt::LeftToRight);

        gridLayout_3->addWidget(L_Jugador1, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        LCD_MaxGoals = new QLCDNumber(centralwidget);
        LCD_MaxGoals->setObjectName(QString::fromUtf8("LCD_MaxGoals"));
        LCD_MaxGoals->setLineWidth(0);
        LCD_MaxGoals->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_2->addWidget(LCD_MaxGoals);


        gridLayout_3->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(graphicsView->sizePolicy().hasHeightForWidth());
        graphicsView->setSizePolicy(sizePolicy);
        graphicsView->setMinimumSize(QSize(786, 435));
        graphicsView->setMaximumSize(QSize(625, 625));

        gridLayout_3->addWidget(graphicsView, 1, 1, 5, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        L_Jugador2 = new QLabel(centralwidget);
        L_Jugador2->setObjectName(QString::fromUtf8("L_Jugador2"));
        L_Jugador2->setFont(font);

        verticalLayout->addWidget(L_Jugador2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        Fuerza2 = new QSpinBox(centralwidget);
        Fuerza2->setObjectName(QString::fromUtf8("Fuerza2"));
        Fuerza2->setMinimum(0);
        Fuerza2->setMaximum(11);
        Fuerza2->setSingleStep(1);
        Fuerza2->setStepType(QAbstractSpinBox::DefaultStepType);
        Fuerza2->setValue(0);
        Fuerza2->setDisplayIntegerBase(10);

        horizontalLayout_4->addWidget(Fuerza2);


        verticalLayout->addLayout(horizontalLayout_4);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        BTN_Shot2 = new QPushButton(centralwidget);
        BTN_Shot2->setObjectName(QString::fromUtf8("BTN_Shot2"));

        gridLayout_2->addWidget(BTN_Shot2, 1, 1, 1, 1);

        Up2 = new QCheckBox(centralwidget);
        Up2->setObjectName(QString::fromUtf8("Up2"));

        gridLayout_2->addWidget(Up2, 0, 1, 1, 1);

        Left2 = new QCheckBox(centralwidget);
        Left2->setObjectName(QString::fromUtf8("Left2"));

        gridLayout_2->addWidget(Left2, 1, 0, 1, 1);

        Right2 = new QCheckBox(centralwidget);
        Right2->setObjectName(QString::fromUtf8("Right2"));

        gridLayout_2->addWidget(Right2, 1, 2, 1, 1);

        Down2 = new QCheckBox(centralwidget);
        Down2->setObjectName(QString::fromUtf8("Down2"));

        gridLayout_2->addWidget(Down2, 3, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 4, 2, 1, 1);


        verticalLayout->addLayout(gridLayout_2);


        gridLayout_3->addLayout(verticalLayout, 1, 2, 5, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        Fuerza1 = new QSpinBox(centralwidget);
        Fuerza1->setObjectName(QString::fromUtf8("Fuerza1"));
        Fuerza1->setMinimum(0);
        Fuerza1->setMaximum(12);
        Fuerza1->setValue(0);
        Fuerza1->setDisplayIntegerBase(10);

        horizontalLayout->addWidget(Fuerza1);


        gridLayout_3->addLayout(horizontalLayout, 2, 0, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_5, 0, 2, 1, 1);

        BP_Window->setCentralWidget(centralwidget);

        retranslateUi(BP_Window);

        QMetaObject::connectSlotsByName(BP_Window);
    } // setupUi

    void retranslateUi(QMainWindow *BP_Window)
    {
        BP_Window->setWindowTitle(QCoreApplication::translate("BP_Window", "BP_Window", nullptr));
        Menu->setText(QCoreApplication::translate("BP_Window", "Menu", nullptr));
        BTN_Shot1->setText(QCoreApplication::translate("BP_Window", "SHOT!", nullptr));
        Up1->setText(QCoreApplication::translate("BP_Window", "Up", nullptr));
        Left1->setText(QCoreApplication::translate("BP_Window", "Left", nullptr));
        Right1->setText(QCoreApplication::translate("BP_Window", "Right", nullptr));
        Down1->setText(QCoreApplication::translate("BP_Window", "Down", nullptr));
        L_Jugador1->setText(QCoreApplication::translate("BP_Window", "JUGADOR 1", nullptr));
        label->setText(QCoreApplication::translate("BP_Window", "MAX GOALS", nullptr));
        L_Jugador2->setText(QCoreApplication::translate("BP_Window", "JUGADOR 2", nullptr));
        label_4->setText(QCoreApplication::translate("BP_Window", "Fuerza", nullptr));
        BTN_Shot2->setText(QCoreApplication::translate("BP_Window", "SHOT!", nullptr));
        Up2->setText(QCoreApplication::translate("BP_Window", "Up", nullptr));
        Left2->setText(QCoreApplication::translate("BP_Window", "Left", nullptr));
        Right2->setText(QCoreApplication::translate("BP_Window", "Right", nullptr));
        Down2->setText(QCoreApplication::translate("BP_Window", "Down", nullptr));
        label_2->setText(QCoreApplication::translate("BP_Window", "Fuerza", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BP_Window: public Ui_BP_Window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BP_WINDOW_H
