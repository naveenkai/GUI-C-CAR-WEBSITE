#ifndef TQFEED_H
#define TQFEED_H

#include <QDialog>

namespace Ui {
class tqfeed;
}

class tqfeed : public QDialog
{
    Q_OBJECT

public:
    explicit tqfeed(QWidget *parent = nullptr);
    ~tqfeed();

private slots:
    void on_pushButton_clicked();

private:
    Ui::tqfeed *ui;
};

#endif // TQFEED_H
