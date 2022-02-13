#ifndef FUELCAR_H
#define FUELCAR_H
#include"nextfuel.h"
#include"redirct2.h"

#include <QDialog>

namespace Ui {
class fuelcar;
}

class fuelcar : public QDialog
{
    Q_OBJECT

public:
    explicit fuelcar(QWidget *parent = nullptr);
    ~fuelcar();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::fuelcar *ui;
};

#endif // FUELCAR_H
