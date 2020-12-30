#include "mainwindow.h"
#include <ctime>
#include <iostream>
#include <map>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Pricelist");

    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("Db.sqlite");
    if (!db.open()) {
          qDebug() << db.lastError().text();
    }
    model = new QSqlRelationalTableModel(this,db);
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    model->setTable("Pricelist");
    model->setRelation(model->fieldIndex("Postavschik_name"),QSqlRelation("Postavschik","ID_Postavschik","nazvanie"));
ui->tableView->setItemDelegate(new QSqlRelationalDelegate(ui->tableView));
    model->select();
    model->sort(0,Qt::DescendingOrder);

    ui->tableView->setModel(model);
    ui->tableView->setColumnHidden(0,true);
    ui->tableView->setColumnWidth(1,200);
    ui->tableView->setColumnWidth(2,200);
    ui->tableView->resizeRowsToContents();
     window =new posttable(this);
   connect(window,&posttable::firstWindow,this,&MainWindow::show);
   addwindow = new newproduct(this);
    connect(addwindow,&newproduct::firstWindow,this,&MainWindow::show);
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

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
  hide();
    window->show();



}


void MainWindow::on_add_clicked()
{

    addwindow->show();
}


void MainWindow::on_pushButton_3_clicked()
{
    int selectedRow = ui->tableView->currentIndex().row();
    if(selectedRow>=0){
        qDebug() <<"deleting row:"<< model->removeRow(selectedRow);
    }
        else
        {
            qDebug()<<"no row selected";
        }
    QSqlQuery query=QSqlQuery(db);
    if(!query.exec("SELECT * FROM Pricelist")){
        qDebug()<<query.lastError().databaseText();
        qDebug()<<query.lastError().driverText();
        return;
    }
    while(query.next()){
        qDebug()<<query.record();

    }
}

void MainWindow::on_pushButton_4_clicked()
{
    model->submitAll();
    ui->tableView->setModel(model);
    QSqlQuery query=QSqlQuery(db);
    if(!query.exec("SELECT * FROM Pricelist")){
        qDebug()<<query.lastError().databaseText();
        qDebug()<<query.lastError().driverText();
        return;
    }
    while(query.next()){
        qDebug()<<query.record();

    }
}


void MainWindow::on_pushButton_2_clicked()
{
QString company = ui->comboBox->currentText();
    QString search = ui->lineEdit->text();
    if( ui->lineEdit->text()!=nullptr && ui->comboBox->currentText()!=nullptr){
 model->setFilter(" name= '"+ search +"' and nazvanie= '"+ company +"' ");
model->select();
  ui->tableView->setModel(model);
}
    else if( search==nullptr && ui->comboBox->currentText()!=nullptr){
      model->setFilter(" nazvanie= '"+ company +"'") ;
      model->select();
        ui->tableView->setModel(model);
    }
    else if( search!=nullptr && ui->comboBox->currentText()==nullptr){
      model->setFilter(" name= '"+ search +"'") ;
      model->select();
        ui->tableView->setModel(model);
    }
    else {
        model->setFilter("") ;
        model->select();
          ui->tableView->setModel(model);
    }
}
