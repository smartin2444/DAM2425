/********************************************************************************
** Form generated from reading UI file 'matriosca.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MATRIOSCA_H
#define UI_MATRIOSCA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Matriosca
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayoutLeft;
    QVBoxLayout *verticalLayoutRight;

    void setupUi(QWidget *Matriosca)
    {
        if (Matriosca->objectName().isEmpty())
            Matriosca->setObjectName("Matriosca");
        Matriosca->resize(829, 306);
        verticalLayout = new QVBoxLayout(Matriosca);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayoutLeft = new QVBoxLayout();
        verticalLayoutLeft->setObjectName("verticalLayoutLeft");

        horizontalLayout->addLayout(verticalLayoutLeft);

        verticalLayoutRight = new QVBoxLayout();
        verticalLayoutRight->setObjectName("verticalLayoutRight");

        horizontalLayout->addLayout(verticalLayoutRight);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(Matriosca);

        QMetaObject::connectSlotsByName(Matriosca);
    } // setupUi

    void retranslateUi(QWidget *Matriosca)
    {
        Matriosca->setWindowTitle(QCoreApplication::translate("Matriosca", "Matriosca", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Matriosca: public Ui_Matriosca {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MATRIOSCA_H
