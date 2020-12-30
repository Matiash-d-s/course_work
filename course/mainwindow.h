#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTextEdit>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlTableModel>
#include <QSqlRelationalTableModel>
#include <QDebug>
#include<QSql>
#include<QSqlRelationalDelegate>
#include <QSqlError>
#include<QSqlRecord>
#include<QStandardItemModel>
#include "ui_mainwindow.h"
#include "posttable.h"
#include "addproduct.h"
#include "newproduct.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:

    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:


private slots:
    void on_pushButton_clicked();

    void on_add_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_2_clicked();

private:
    QSqlDatabase db;
     QSqlRelationalTableModel* model;
QString filter="";
void addData(std:: string request, QTableView *table);
    posttable *window;
    newproduct *addwindow;
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
