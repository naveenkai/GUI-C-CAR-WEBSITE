#include "electriccar3.h"
#include "ui_electriccar3.h"
#include<QDesktopServices>
#include<QUrl>

electriccar3::electriccar3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::electriccar3)
{
    ui->setupUi(this);
}

electriccar3::~electriccar3()
{
    delete ui;
}

void electriccar3::on_pushButton_clicked()
{
    this-> hide();
 electriccar4 re3;
 re3.setModal(true);
 re3.exec();
}


void electriccar3::on_pushButton_2_clicked()
{
    this-> hide();
 nextele re3;
  re3.setModal(true);
  re3.exec();
}


void electriccar3::on_pushButton_4_clicked()
{
    QString link="https://www.ford.com/suvs/mach-e/";
      QDesktopServices::openUrl(QUrl(link));
}


void electriccar3::on_pushButton_5_clicked()
{
    QString link="https://www.skoda-auto.com/models/range/enyaq-iv";
      QDesktopServices::openUrl(QUrl(link));
}

