#include "addcompany.h"
#include "ui_addcompany.h"
#include <QtSql>
#include <iostream>
addcompany::addcompany(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addcompany)
{
    ui->setupUi(this);
}

addcompany::~addcompany()
{
    delete ui;
}

void addcompany::on_pushButton_2_clicked()
{
     QString NameVal = ui->name->text();
     QString FormaVal = ui->forma->text();
     QString PhoneVal = ui->phone->text();
     QString MailVal = ui->mail->text();
     QString SaitVal = ui->sait->text();
     QSqlQuery query1;
     query1.prepare("INSERT INTO Postavschik(forma,nazvanie,nomer_telefona, email, sait) VALUES(:1,:2,:3,:4,:5)");
     query1.bindValue(":1",FormaVal);
     query1.bindValue(":2",NameVal);
     query1.bindValue(":3",PhoneVal);
     query1.bindValue(":4",MailVal);
     query1.bindValue(":5",SaitVal);
     query1.exec();
     close();
}

void addcompany::on_pushButton_clicked()
{
    hide();
    emit firstWindow();
}
