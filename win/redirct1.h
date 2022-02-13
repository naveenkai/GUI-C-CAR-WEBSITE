#ifndef REDIRCT1_H
#define REDIRCT1_H
#include"redirct2.h"

#include <QDialog>

namespace Ui {
class REDIRCT1;
}

class REDIRCT1 : public QDialog
{
    Q_OBJECT

public:
    explicit REDIRCT1(QWidget *parent = nullptr);
    ~REDIRCT1();

private slots:
    void on_pushButton_clicked();

private:
    Ui::REDIRCT1 *ui;
};

#endif // REDIRCT1_H
