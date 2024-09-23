#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->num = 0;
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_clicked()
{

    this->num++;
    ui->ascensor->setText(QString::number(this->num));

}


void Widget::on_pushButton_2_clicked()
{
    this->num--;
    ui->ascensor->setText(QString::number(this->num));

}

