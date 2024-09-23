#include "ginylcd.h"
#include "ui_ginylcd.h"

GinyLCD::GinyLCD(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::GinyLCD)
{
    ui->setupUi(this);
    ui->lcd00->display(69);
}

GinyLCD::~GinyLCD()
{
    delete ui;
}
