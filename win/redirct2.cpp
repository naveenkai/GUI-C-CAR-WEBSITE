#include "redirct2.h"
#include "ui_redirct2.h"

REDIRCT2::REDIRCT2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::REDIRCT2)
{
    ui->setupUi(this);
}

REDIRCT2::~REDIRCT2()
{
    delete ui;
}

void REDIRCT2::on_pushButton_2_clicked()
{
    this-> hide();
 ELECRTICCAR re2;
 re2.setModal(true);
 re2.exec();
}


void REDIRCT2::on_pushButton_clicked()
{
    this-> hide();
fuelcar re5;
 re5.setModal(true);
 re5.exec();
}

