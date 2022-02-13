#ifndef FUELCAR3_H
#define FUELCAR3_H
#include"fuelcar4.h"
#include"nextfuel.h"
#include <QDialog>

namespace Ui {
class fuelcar3;
}

class fuelcar3 : public QDialog
{
    Q_OBJECT

public:
    explicit fuelcar3(QWidget *parent = nullptr);
    ~fuelcar3();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::fuelcar3 *ui;
};

#endif // FUELCAR3_H
