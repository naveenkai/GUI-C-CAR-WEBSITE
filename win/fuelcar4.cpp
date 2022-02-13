#include "fuelcar4.h"
#include "ui_fuelcar4.h"
#include<QDesktopServices>
#include<QUrl>

fuelcar4::fuelcar4(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::fuelcar4)
{
    ui->setupUi(this);
}

fuelcar4::~fuelcar4()
{
    delete ui;
}

void fuelcar4::on_pushButton_clicked()
{
    this-> hide();
tqfeed re38;
 re38.setModal(true);
 re38.exec();
}


void fuelcar4::on_pushButton_2_clicked()
{
    this-> hide();
fuelcar3 re39;
 re39.setModal(true);
 re39.exec();
}


void fuelcar4::on_pushButton_4_clicked()
{
    QString link="https://www.cardekho.com/carmodels/Toyota/Toyota_Prius";
      QDesktopServices::openUrl(QUrl(link));
}


void fuelcar4::on_pushButton_5_clicked()
{
    QString link="https://automobiles.honda.com/insight";
      QDesktopServices::openUrl(QUrl(link));
}

