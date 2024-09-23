/********************************************************************************
** Form generated from reading UI file 'ginylcd.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GINYLCD_H
#define UI_GINYLCD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GinyLCD
{
public:
    QVBoxLayout *verticalLayout;
    QLCDNumber *lcd00;

    void setupUi(QWidget *GinyLCD)
    {
        if (GinyLCD->objectName().isEmpty())
            GinyLCD->setObjectName("GinyLCD");
        GinyLCD->resize(619, 365);
        verticalLayout = new QVBoxLayout(GinyLCD);
        verticalLayout->setObjectName("verticalLayout");
        lcd00 = new QLCDNumber(GinyLCD);
        lcd00->setObjectName("lcd00");
        lcd00->setDigitCount(2);
        lcd00->setProperty("intValue", QVariant(10));

        verticalLayout->addWidget(lcd00);


        retranslateUi(GinyLCD);

        QMetaObject::connectSlotsByName(GinyLCD);
    } // setupUi

    void retranslateUi(QWidget *GinyLCD)
    {
        GinyLCD->setWindowTitle(QCoreApplication::translate("GinyLCD", "GinyLCD", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GinyLCD: public Ui_GinyLCD {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GINYLCD_H
