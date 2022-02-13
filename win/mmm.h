#ifndef MMM_H
#define MMM_H
//#include "MainWindow.h"

#include <QDialog>

namespace Ui {
class mmm;
}

class mmm : public QDialog
{
    Q_OBJECT

public:
    explicit mmm(QWidget *parent = nullptr);
    ~mmm();

private slots:
  //  void on_pushButton_2_clicked();

  //  void on_pushButton_clicked();

   // void on_pushButton_clicked();

private:
    Ui::mmm *ui;
};

#endif // MMM_H
