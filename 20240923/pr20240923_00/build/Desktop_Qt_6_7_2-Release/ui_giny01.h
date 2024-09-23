/********************************************************************************
** Form generated from reading UI file 'giny01.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GINY01_H
#define UI_GINY01_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Giny01
{
public:
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QSlider *hs00;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_2;
    QLabel *label00;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *Giny01)
    {
        if (Giny01->objectName().isEmpty())
            Giny01->setObjectName("Giny01");
        Giny01->resize(398, 340);
        verticalLayout = new QVBoxLayout(Giny01);
        verticalLayout->setObjectName("verticalLayout");
        verticalSpacer_3 = new QSpacerItem(20, 62, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        hs00 = new QSlider(Giny01);
        hs00->setObjectName("hs00");
        hs00->setOrientation(Qt::Orientation::Horizontal);

        horizontalLayout->addWidget(hs00);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 62, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        label00 = new QLabel(Giny01);
        label00->setObjectName("label00");
        QFont font;
        font.setFamilies({QString::fromUtf8("Z003")});
        font.setPointSize(48);
        font.setBold(true);
        font.setItalic(true);
        label00->setFont(font);
        label00->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label00);

        verticalSpacer = new QSpacerItem(20, 62, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(Giny01);

        QMetaObject::connectSlotsByName(Giny01);
    } // setupUi

    void retranslateUi(QWidget *Giny01)
    {
        Giny01->setWindowTitle(QCoreApplication::translate("Giny01", "Giny01 20240923", nullptr));
        label00->setText(QCoreApplication::translate("Giny01", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Giny01: public Ui_Giny01 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GINY01_H
