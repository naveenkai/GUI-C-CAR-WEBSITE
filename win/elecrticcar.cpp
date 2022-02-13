#include "elecrticcar.h"
#include "ui_elecrticcar.h"
#include<QDesktopServices>
#include<QUrl>

ELECRTICCAR::ELECRTICCAR(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ELECRTICCAR)
{
    ui->setupUi(this);
}

ELECRTICCAR::~ELECRTICCAR()
{
    delete ui;
}

void ELECRTICCAR::on_pushButton_3_clicked()
{
    this-> hide();
 nextele re3;
 re3.setModal(true);
 re3.exec();
}


void ELECRTICCAR::on_pushButton_2_clicked()
{
    QString link="https://www.tesla.com/model3";
    QDesktopServices::openUrl(QUrl(link));
}


void ELECRTICCAR::on_pushButton_clicked()
{
    QString link="https://www.tesla.com/models";
       QDesktopServices::openUrl(QUrl(link));
}


void ELECRTICCAR::on_pushButton_4_clicked()
{
    this-> hide();
REDIRCT2 re27;
 re27.setModal(true);
 re27.exec();
}


