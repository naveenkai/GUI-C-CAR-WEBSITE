#include "electriccar4.h"
#include "ui_electriccar4.h"
#include<QDesktopServices>
#include<QUrl>

electriccar4::electriccar4(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::electriccar4)
{
    ui->setupUi(this);
}

electriccar4::~electriccar4()
{
    delete ui;
}

void electriccar4::on_pushButton_clicked()
{
    this-> hide();
  electriccar3 re33;
  re33.setModal(true);
  re33.exec();
}


void electriccar4::on_pushButton_2_clicked()
{
    this-> hide();
  tqfeed re35;
  re35.setModal(true);
  re35.exec();
}


void electriccar4::on_pushButton_4_clicked()
{
    QString link="https://www.hyundai.com/in/en/find-a-car/kona-electric/highlights";
      QDesktopServices::openUrl(QUrl(link));
}

