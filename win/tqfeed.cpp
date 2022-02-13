#include "tqfeed.h"
#include "ui_tqfeed.h"

tqfeed::tqfeed(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tqfeed)
{
    ui->setupUi(this);
}

tqfeed::~tqfeed()
{
    delete ui;
}

void tqfeed::on_pushButton_clicked()
{
    ui->label->setText("<B>THANK YOU</B>");
  // hide();
}

