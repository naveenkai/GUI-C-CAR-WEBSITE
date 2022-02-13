#include "mmm.h"
#include "ui_mmm.h"

mmm::mmm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::mmm)
{
    ui->setupUi(this);
}

mmm::~mmm()
{
    delete ui;
}

/*void mmm::on_pushButton_2_clicked()
{
    this-> hide();
MainWindow re14;

}*/


/*
void mmm::on_pushButton_clicked()
{

}
*/



