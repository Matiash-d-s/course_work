#ifndef NEWPRODUCT_H
#define NEWPRODUCT_H

#include <QDialog>
#include<QSql>
namespace Ui {
class newproduct;
}

class newproduct : public QDialog
{
    Q_OBJECT

public:
    explicit newproduct(QWidget *parent = nullptr);
    ~newproduct();
 signals:
void firstWindow();
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::newproduct *ui;
};

#endif // NEWPRODUCT_H
