#ifndef POSTTABLE_H
#define POSTTABLE_H

#include <QDialog>
#include <QTextEdit>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlTableModel>
#include <QDebug>
#include <QSqlError>
#include<QSqlRecord>
#include "addcompany.h"
namespace Ui {
class posttable;
}

class posttable : public QDialog
{
    Q_OBJECT

public:
    explicit posttable(QWidget *parent = nullptr);
    ~posttable();

signals:
 void firstWindow();

private slots:
    void on_goback_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    QSqlTableModel* model;
    QSqlDatabase db;
    Ui::posttable *ui;
     addcompany *addwindow;
};

#endif // POSTTABLE_H
