#ifndef ELECRTICCAR_H
#define ELECRTICCAR_H
#include"nextele.h"
#include"redirct2.h"

#include <QDialog>

namespace Ui {
class ELECRTICCAR;
}

class ELECRTICCAR : public QDialog
{
    Q_OBJECT

public:
    explicit ELECRTICCAR(QWidget *parent = nullptr);
    ~ELECRTICCAR();

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::ELECRTICCAR *ui;
};

#endif // ELECRTICCAR_H
