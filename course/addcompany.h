#ifndef ADDCOMPANY_H
#define ADDCOMPANY_H

#include <QDialog>
#include<QSql>
namespace Ui {
class addcompany;
}

class addcompany : public QDialog
{
    Q_OBJECT

public:
    explicit addcompany(QWidget *parent = nullptr);
    ~addcompany();
 signals:
 void firstWindow();

private slots:
 void on_pushButton_2_clicked();

 void on_pushButton_clicked();

private:
    Ui::addcompany *ui;
   void setValues(std::string NameVal="",std::string FormVal="",std::string PhoneVal="", std::string MailVal="",std::string SaitVal="" );
};

#endif // ADDCOMPANY_H
