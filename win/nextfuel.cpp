#include "nextfuel.h"
#include "ui_nextfuel.h"
#include<QDesktopServices>
#include<QUrl>

nextfuel::nextfuel(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::nextfuel)
{
    ui->setupUi(this);
}

nextfuel::~nextfuel()
{
    delete ui;
}
/*
void nextfuel::on_pushButton_clicked()
{
    this-> hide();
 tqfeed re6;
 re6.setModal(true);
 re6.exec();
}
*/

void nextfuel::on_pushButton_2_clicked()
{
    this-> hide();
fuelcar re11;
 re11.setModal(true);
 re11.exec();
}


void nextfuel::on_pushButton_5_clicked()
{
    QString link="https://www.cardekho.com/mahindra/thar/";
        QDesktopServices::openUrl(QUrl(link));
}


void nextfuel::on_pushButton_4_clicked()
{
    QString link="https://www.toyotabharat.com/pricelist/?model-id=9";
        QDesktopServices::openUrl(QUrl(link));
}


void nextfuel::on_pushButton_3_clicked()
{
    this-> hide();
fuelcar3 re36;
 re36.setModal(true);
 re36.exec();
}

