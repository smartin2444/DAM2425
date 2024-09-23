#include "giny.h"
#include "ui_giny.h"

#include <QDebug>

Giny::Giny(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Giny)
{
    ui->setupUi(this);
}

Giny::~Giny()
{
    delete ui;
}

void Giny::on_pushButton_clicked()
{
    qDebug() << "pressed";
    ui->lbNom->setText("Martin");
}


void Giny::on_pushButton_2_clicked()
{
    qDebug() << "Nom";

    ui->lbNom->setText("Sergio");
}

