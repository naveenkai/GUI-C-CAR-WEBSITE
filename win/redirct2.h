#ifndef REDIRCT2_H
#define REDIRCT2_H
#include"elecrticcar.h"
#include"fuelcar.h"
#include <QDialog>

namespace Ui {
class REDIRCT2;
}

class REDIRCT2 : public QDialog
{
    Q_OBJECT

public:
    explicit REDIRCT2(QWidget *parent = nullptr);
    ~REDIRCT2();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::REDIRCT2 *ui;
};

#endif // REDIRCT2_H
