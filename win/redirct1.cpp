#include "redirct1.h"
#include "ui_redirct1.h"

REDIRCT1::REDIRCT1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::REDIRCT1)
{
    ui->setupUi(this);
}

REDIRCT1::~REDIRCT1()
{
    delete ui;
}

void REDIRCT1::on_pushButton_clicked()
{
    this-> hide();
 REDIRCT2 re1;
 re1.setModal(true);
 re1.exec();
}

