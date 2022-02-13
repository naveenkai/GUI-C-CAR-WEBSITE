#include "fuelcar3.h"
#include "ui_fuelcar3.h"
#include<QDesktopServices>
#include<QUrl>

fuelcar3::fuelcar3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::fuelcar3)
{
    ui->setupUi(this);
}

fuelcar3::~fuelcar3()
{
    delete ui;
}

void fuelcar3::on_pushButton_clicked()
{
    this-> hide();
fuelcar4 re37;
 re37.setModal(true);
 re37.exec();
}


void fuelcar3::on_pushButton_2_clicked()
{
    this-> hide();
nextfuel re40;
 re40.setModal(true);
 re40.exec();
}


void fuelcar3::on_pushButton_4_clicked()
{
    QString link="https://www.kia.com/in/discover-kia/innovation/mobility-ace/eco.html";
      QDesktopServices::openUrl(QUrl(link));
}


void fuelcar3::on_pushButton_5_clicked()
{
    QString link="https://www.cardekho.com/carmodels/Hyundai/Hyundai_Sonata";
      QDesktopServices::openUrl(QUrl(link));
}

