#ifndef NEXTFUEL_H
#define NEXTFUEL_H
#include"tqfeed.h"
#include"fuelcar.h"
#include"fuelcar3.h"

#include <QDialog>

namespace Ui {
class nextfuel;
}

class nextfuel : public QDialog
{
    Q_OBJECT

public:
    explicit nextfuel(QWidget *parent = nullptr);
    ~nextfuel();

private slots:
  //  void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::nextfuel *ui;
};

#endif // NEXTFUEL_H
