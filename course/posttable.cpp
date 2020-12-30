#include "posttable.h"
#include "ui_posttable.h"

posttable::posttable(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::posttable)
{
    ui->setupUi(this);
    this->setWindowTitle("Postavschik");
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("Db.sqlite");
    if (!db.open()) {
          qDebug() << db.lastError().text();
    }
    model = new QSqlTableModel(this,db);
     model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    model->setTable("Postavschik");
    model->select();
    model->sort(0,Qt::DescendingOrder);
    ui->tableView->setModel(model);
    ui->tableView->setColumnHidden(0,true);
    ui->tableView->setColumnWidth(1,200);
    ui->tableView->setColumnWidth(2,50);
      ui->tableView->setColumnWidth(3,150);
     ui->tableView->setColumnWidth(4,200);
      ui->tableView->setColumnWidth(5,200);
    ui->tableView->resizeRowsToContents();
    addwindow = new addcompany(this);
     connect(addwindow,&addcompany::firstWindow,this,&posttable::show);
}

posttable::~posttable()
{
    delete ui;
}

void posttable::on_goback_clicked()
{
    hide();
emit firstWindow();

}

void posttable::on_pushButton_2_clicked()
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
    if(!query.exec("SELECT * FROM Postavschik")){
        qDebug()<<query.lastError().databaseText();
        qDebug()<<query.lastError().driverText();
        return;
    }
    while(query.next()){
        qDebug()<<query.record();
    }
}

void posttable::on_pushButton_clicked()
{

   addwindow->show();
}

void posttable::on_pushButton_3_clicked()
{
    model->submitAll();
    QSqlQuery query=QSqlQuery(db);
    if(!query.exec("SELECT * FROM Postavschik")){
        qDebug()<<query.lastError().databaseText();
        qDebug()<<query.lastError().driverText();
        return;
    }
    while(query.next()){
        qDebug()<<query.record();
    }
}


