#include "fuelcar.h"
#include "ui_fuelcar.h"
#include<QDesktopServices>
#include<QUrl>

fuelcar::fuelcar(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::fuelcar)
{
    ui->setupUi(this);
}

fuelcar::~fuelcar()
{
    delete ui;
}

void fuelcar::on_pushButton_clicked()
{
    this-> hide();
 nextfuel re;
 re.setModal(true);
 re.exec();
}


void fuelcar::on_pushButton_6_clicked()
{
    this-> hide();
REDIRCT2 re17;
 re17.setModal(true);
 re17.exec();
}



void fuelcar::on_pushButton_4_clicked()
{
    QString link="https://www.landrover.in/vehicles/range-rover-sport/index.html";
        QDesktopServices::openUrl(QUrl(link));
}


void fuelcar::on_pushButton_5_clicked()
{
    QString link="https://www.carwale.com/land-rover-cars/discovery/";
        QDesktopServices::openUrl(QUrl(link));
}

