#include "matriosca.h"
#include "ui_matriosca.h"



Matriosca::Matriosca(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Matriosca)
{
    ui->setupUi(this);

    Giny01 *g01 = new Giny01();
    GinyLCD *glcd = new GinyLCD();
    ui->verticalLayoutLeft->addWidget(g01);
    ui->verticalLayoutRight->addWidget(glcd);

    glcd->setLcdValueSignal(66);
}

Matriosca::~Matriosca()
{
    delete ui;
}
