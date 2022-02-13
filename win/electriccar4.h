#ifndef ELECTRICCAR4_H
#define ELECTRICCAR4_H
#include"electriccar3.h"
#include"tqfeed.h"

#include <QDialog>

namespace Ui {
class electriccar4;
}

class electriccar4 : public QDialog
{
    Q_OBJECT

public:
    explicit electriccar4(QWidget *parent = nullptr);
    ~electriccar4();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::electriccar4 *ui;
};

#endif // ELECTRICCAR4_H
