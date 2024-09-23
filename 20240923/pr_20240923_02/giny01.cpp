#include "giny01.h"
#include "ui_giny01.h"
#include <QDebug>

#define VALOR_INICIAL 50

Giny01::Giny01(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Giny01)
{
    ui->setupUi(this);

    ui->hs00->setValue(VALOR_INICIAL);
    ui->label00->setNum(VALOR_INICIAL);

    connect(ui->hs00, SIGNAL(valueChanged(int)),
        this, SLOT(vOnSliderChange(int)));
}

Giny01::~Giny01()
{
    delete ui;
}

void Giny01::vOnSliderChange(int n){
    qDebug() << "Value: "+ QString::number(n);
    ui->label00->setNum(n);
}
