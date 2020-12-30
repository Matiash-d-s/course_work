#include "newproduct.h"
#include "ui_newproduct.h"
#include <QtSql>
#include <iostream>
newproduct::newproduct(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::newproduct)
{
    ui->setupUi(this);
    QSqlQuery sqlQ;
    sqlQ.exec("select nazvanie from Postavschik;");
    if (!sqlQ.exec()) {
          qDebug() << "query failed";
    }
    while(sqlQ.next()){
        ui->comboBox->addItem(sqlQ.value(0).toString());
    }
   ui->comboBox->setEditable(true);
   ui->comboBox->setCurrentText("");
}

newproduct::~newproduct()
{
    delete ui;
}

void newproduct::on_pushButton_clicked()
{
    hide();
    emit firstWindow();
}

void newproduct::on_pushButton_2_clicked()
{
    QString company = ui->comboBox->currentText();

           QSqlQuery q;
           q.exec("SELECT ID_Postavschik FROM Postavschik where nazvanie = '"+ company +"';");
           q.next();
      company=(q.value(0).toString());
      QString NameVal = ui->lineEdit->text();
          QString MassaVal = ui->mBox->text();
           QString PriceVal = ui->pBox->text();
            QSqlQuery query1;
            query1.prepare("INSERT INTO Pricelist (name,massa,tsena,Postavschik_name) VALUES(:1,:2,:3,:4)");
            query1.bindValue(":1",NameVal);
            query1.bindValue(":2",MassaVal);
            query1.bindValue(":3",PriceVal);
            query1.bindValue(":4",company);
            query1.exec();
            close();
  \
}
