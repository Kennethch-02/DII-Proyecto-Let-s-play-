/********************************************************************************
** Form generated from reading UI file 'bp_settings.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BP_SETTINGS_H
#define UI_BP_SETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_BP_Settings
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QPushButton *Atras;
    QHBoxLayout *horizontalLayout;
    QPushButton *BTN_1vs1;
    QPushButton *BTN_1vsCPU;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QLabel *label_3;
    QSpinBox *jugadores;
    QSpinBox *goles;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *BP_Settings)
    {
        if (BP_Settings->objectName().isEmpty())
            BP_Settings->setObjectName(QString::fromUtf8("BP_Settings"));
        BP_Settings->resize(572, 406);
        gridLayout = new QGridLayout(BP_Settings);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(BP_Settings);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("Ubuntu Condensed"));
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        Atras = new QPushButton(BP_Settings);
        Atras->setObjectName(QString::fromUtf8("Atras"));

        gridLayout->addWidget(Atras, 3, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        BTN_1vs1 = new QPushButton(BP_Settings);
        BTN_1vs1->setObjectName(QString::fromUtf8("BTN_1vs1"));

        horizontalLayout->addWidget(BTN_1vs1);

        BTN_1vsCPU = new QPushButton(BP_Settings);
        BTN_1vsCPU->setObjectName(QString::fromUtf8("BTN_1vsCPU"));

        horizontalLayout->addWidget(BTN_1vsCPU);


        gridLayout->addLayout(horizontalLayout, 2, 1, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_2 = new QLabel(BP_Settings);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        label_3 = new QLabel(BP_Settings);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 1, 0, 1, 1);

        jugadores = new QSpinBox(BP_Settings);
        jugadores->setObjectName(QString::fromUtf8("jugadores"));
        jugadores->setMinimum(2);
        jugadores->setMaximum(20);
        jugadores->setSingleStep(2);

        gridLayout_2->addWidget(jugadores, 0, 1, 1, 1);

        goles = new QSpinBox(BP_Settings);
        goles->setObjectName(QString::fromUtf8("goles"));
        goles->setMinimum(2);
        goles->setMaximum(98);
        goles->setSingleStep(1);

        gridLayout_2->addWidget(goles, 1, 1, 1, 1);


        gridLayout->addLayout(gridLayout_2, 1, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 2, 0, 1, 1);


        retranslateUi(BP_Settings);

        QMetaObject::connectSlotsByName(BP_Settings);
    } // setupUi

    void retranslateUi(QDialog *BP_Settings)
    {
        BP_Settings->setWindowTitle(QCoreApplication::translate("BP_Settings", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("BP_Settings", "SETTINGS", nullptr));
        Atras->setText(QCoreApplication::translate("BP_Settings", "Atras", nullptr));
        BTN_1vs1->setText(QCoreApplication::translate("BP_Settings", "1vs1", nullptr));
        BTN_1vsCPU->setText(QCoreApplication::translate("BP_Settings", "1vsCPU", nullptr));
        label_2->setText(QCoreApplication::translate("BP_Settings", "Jugadores", nullptr));
        label_3->setText(QCoreApplication::translate("BP_Settings", "Max Goles", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BP_Settings: public Ui_BP_Settings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BP_SETTINGS_H
