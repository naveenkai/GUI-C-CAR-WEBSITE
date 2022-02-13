#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
 QString username=ui->lineEdit->text();

 QString password=ui->lineEdit_2->text();
 if(username=="naveenkorange@gmail.com" && password=="nawink" || username=="faadsfaads420@gmail.com" && password=="nk"  )
 {


    this-> hide();
REDIRCT1 re;
re.setModal(true);
re.exec();
 }
 else{
     QMessageBox::warning(this,"invalid login","email id or password is incorrect" );
 }
}


void MainWindow::on_pushButton_2_clicked()
{
    QMessageBox::question(this,"exit","DO YOU WANT TO EXIT SO EARLY..?");

}





void MainWindow::on_pushButton_3_clicked()
{
    this-> hide();
 mmm re13;
 re13.setModal(true);
 re13.exec();
}

