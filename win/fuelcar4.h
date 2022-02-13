#ifndef FUELCAR4_H
#define FUELCAR4_H
#include"tqfeed.h"
#include"fuelcar3.h"
#include <QDialog>

namespace Ui {
class fuelcar4;
}

class fuelcar4 : public QDialog
{
    Q_OBJECT

public:
    explicit fuelcar4(QWidget *parent = nullptr);
    ~fuelcar4();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::fuelcar4 *ui;
};

#endif // FUELCAR4_H
