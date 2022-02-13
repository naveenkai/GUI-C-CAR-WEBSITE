#ifndef ELECTRICCAR3_H
#define ELECTRICCAR3_H
#include"electriccar4.h"
#include"nextele.h"


#include <QDialog>

namespace Ui {
class electriccar3;
}

class electriccar3 : public QDialog
{
    Q_OBJECT

public:
    explicit electriccar3(QWidget *parent = nullptr);
    ~electriccar3();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::electriccar3 *ui;
};

#endif // ELECTRICCAR3_H
