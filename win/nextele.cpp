#include "nextele.h"
#include "ui_nextele.h"
#include<QDesktopServices>
#include<QUrl>

nextele::nextele(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::nextele)
{
    ui->setupUi(this);
}

nextele::~nextele()
{
    delete ui;
}
/*
void nextele::on_pushButton_clicked()
{
    this-> hide();
 tqfeed re6;
 re6.setModal(true);
 re6.exec();
}
*/

void nextele::on_pushButton_2_clicked()
{
    this-> hide();
ELECRTICCAR re7;
 re7.setModal(true);
 re7.exec();
}


void nextele::on_pushButton_3_clicked()
{
    QString link="https://nexonev.tatamotors.com/";
       QDesktopServices::openUrl(QUrl(link));
}


void nextele::on_pushButton_4_clicked()
{
    QString link="https://www.mgmotor.co.in/tools/prices?ef_id=CjwKCAiAl-6PBhBCEiwAc2GOVAjjWyBgAwNnG3RDeHmDdcHm-C57TxIDauSr7xBxciQaDz0uVtiVERoClt0QAvD_BwE:G:s&s_kwcid=AL!8805!3!!!!x!!&gclid=CjwKCAiAl-6PBhBCEiwAc2GOVAjjWyBgAwNnG3RDeHmDdcHm-C57TxIDauSr7xBxciQaDz0uVtiVERoClt0QAvD_BwE";
       QDesktopServices::openUrl(QUrl(link));
}


void nextele::on_pushButton_5_clicked()
{
    this-> hide();
 electriccar3 re3;
 re3.setModal(true);
 re3.exec();
}

