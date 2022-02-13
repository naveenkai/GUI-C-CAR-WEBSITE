#ifndef NEXTELE_H
#define NEXTELE_H
#include"tqfeed.h"
#include"elecrticcar.h"
#include"electriccar3.h"

#include <QDialog>

namespace Ui {
class nextele;
}

class nextele : public QDialog
{
    Q_OBJECT

public:
    explicit nextele(QWidget *parent = nullptr);
    ~nextele();

private slots:
    //void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::nextele *ui;
};

#endif // NEXTELE_H
