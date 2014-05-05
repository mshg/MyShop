#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtSql>
#include<QDebug>
#include<QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->BuyDate->setDate(QDate::currentDate());
    ui->EndDate->setDate(QDate::currentDate());
    QSqlQueryModel *modal = new QSqlQueryModel();
    connopen();
    QSqlQuery* qry1 = new QSqlQuery(mydb);
    qry1->prepare("select * from kharid ");
    qry1->exec();
    modal->setQuery(*qry1);
    ui->tableView->setModel(modal);
    QSqlQueryModel *modal1 = new QSqlQueryModel();
    QSqlQuery* qry2 = new QSqlQuery(mydb);
    qry2->prepare("select com_name from kharid ");
    qry2->exec();
    modal1->setQuery(*qry2);
    ui->combocompany->setModel(modal1);
    QSqlQueryModel *modal2 = new QSqlQueryModel();
    QSqlQuery* qry3 = new QSqlQuery(mydb);
    qry3->prepare("select prd_name from kharid ");
    qry3->exec();
    modal2->setQuery(*qry3);
    ui->comboName->setModel(modal2);
    QSqlQueryModel *modal3 = new QSqlQueryModel();
    QSqlQuery* qry4 = new QSqlQuery(mydb);
    qry4->prepare("select * from selling ");
    qry4->exec();
    modal3->setQuery(*qry4);
    ui->tableView_2->setModel(modal3);
    connclose();

}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::connclose(){
   mydb.close();
   mydb.removeDatabase(QSqlDatabase::defaultConnection);
}

bool MainWindow::connopen(){
    mydb  = QSqlDatabase::addDatabase("QSQLITE");
    mydb.setDatabaseName("C:/Users/mahdi/Desktop/sherkat/company/login.db.sqlite");
    if(!mydb.open()){
        qDebug()<<"failed to open the database";
    return false;}
    else{
        qDebug()<<("connected..");
        return true;
    }
}


void MainWindow::on_kharid_sabt_clicked()
{
   MainWindow conn;
   QString com_name,prd_name,num_in_cart,num_of_cart,purchase_price,date_of_buy,date_of_expire;
   com_name = ui->company->text();
   prd_name=ui->name->text();
   num_in_cart=ui->NumInBox->text();
   num_of_cart=ui->NumOfBox->text();
   date_of_buy =ui->BuyDate->text();
   date_of_expire=ui->EndDate->text();
   purchase_price=ui->buyprice->text();
   ui->company->clear();
   ui->name->clear();
   ui->NumInBox->clear();
   ui->NumOfBox->clear();
   ui->buyprice->clear();

   if(!conn.connopen()){
       qDebug()<<"failed to open the database";
       return;
   }

   QSqlQuery qry;

   qry.prepare("insert into kharid(com_name,prd_name,num_in_cart,num_of_cart,date_of_buy,date_of_expire,purchase_price) values ('"+com_name+"','"+prd_name+"','"+num_in_cart+"','"+num_of_cart+"','"+date_of_buy+"','"+date_of_expire+"','"+purchase_price+"') ");

   if(qry.exec()){
       QMessageBox::information(this,"Save","ثبت شد");
       conn.connclose();

   }
   else{
      // QMessageBox::critical(this,"error::",qry.lastError().text());
       qDebug()<<"wrong";
   }
     MainWindow conn1;
     QSqlQueryModel *modal = new QSqlQueryModel();
     conn1.connopen();
     QSqlQuery* qry1 = new QSqlQuery(conn.mydb);
     qry1->prepare("select * from kharid ");
     qry1->exec();
     modal->setQuery(*qry1);
     ui->tableView->setModel(modal);
     conn1.connclose();
}

void MainWindow::on_pushButton_2_clicked()
{
    MainWindow conn1;
    QString comp,product;
    int numofcart,num,all;
    comp = ui->combocompany->currentText();
    product = ui->comboName->currentText();
    conn1.connopen();
    QSqlQueryModel *modal = new QSqlQueryModel();
    QSqlQuery qry1 = QSqlQuery(mydb);
    qry1.prepare("select * from kharid WHERE com_name='"+comp+"' and prd_name = '"+product+"'");
    if(qry1.exec()){
        while(qry1.next()){
            numofcart = qry1.value(3).toInt();
            num = qry1.value(2).toInt();
                  }
    modal->setQuery(qry1);
    all=numofcart*num;    
    ui->lcd->setText(QString::number(all));
    conn1.connclose();
}
}

void MainWindow::on_pushButton_3_clicked()
{
    QString com_name,prd_name,num,purchase_price,visitor,customer;
    com_name = ui->combocompany->currentText();
    prd_name=ui->comboName->currentText();
    num=ui->number->text();
    purchase_price=ui->lineEdit->text();
    visitor = ui->visitor->text();
    customer = ui->customerName->text();
    ui->number->clear();
    ui->lineEdit->clear();
    ui->visitor->clear();
    ui->customerName->clear();

    if(!connopen()){
        qDebug()<<"failed to open the database";
        return;
    }

    QSqlQuery qry;

    qry.prepare("insert into selling(nam_kala,nam_sherkat,tedad,gheimat,visitor,nam_kharidar) values ('"+prd_name+"','"+com_name+"','"+num+"','"+purchase_price+"','"+visitor+"','"+customer+"') ");

    if(qry.exec()){
        QMessageBox::information(this,"Save","ثبت شد");

    }
    else{
       // QMessageBox::critical(this,"error::",qry.lastError().text());
        qDebug()<<"wrong";
    }
    MainWindow conn1;
    QSqlQueryModel *modal = new QSqlQueryModel();
    conn1.connopen();
    QSqlQuery* qry1 = new QSqlQuery(conn1.mydb);
    qry1->prepare("select * from selling ");
    qry1->exec();
    modal->setQuery(*qry1);
    ui->tableView_2->setModel(modal);
    conn1.connclose();
}

void MainWindow::on_pushButton_clicked()
{
    QString newusername,newpassword,lastpassword,confirmpassword,lastpassword2;
    newusername = ui->NewUsername->text();
    newpassword=ui->NewPassword->text();
    lastpassword = ui->lastpassword->text();
    confirmpassword=  ui->Confirm->text();

    ui->NewUsername->clear();
    ui->NewPassword->clear();
    ui->lastpassword->clear();
    ui->lastpassword->clear();

    if(!connopen()){
        qDebug()<<"failed to open the database";
       return;
     }
 //       connopen();
        QSqlQuery qry1 = QSqlQuery(mydb);
        qry1.prepare("select * from login_table");
        if(qry1.exec()){
            while(qry1.next()){
                lastpassword2 = qry1.value(1).toString();
                      }

        if (lastpassword==lastpassword2){
        if (newpassword== confirmpassword){
            QSqlQuery qry2 = QSqlQuery(mydb);
            qry2.prepare("update login_table set username='"+newusername+"', password ='"+newpassword+"'");
            if(qry2.exec()){
                QMessageBox::information(this,"Update","با موفقیت تغییر یافت");

            }
            else
                qDebug()<<"wrong";
        }
        else{
            QMessageBox::critical(this,"error::","رمز جدید و تایید رمز یکسان نیستند");
            qDebug()<<"wrong";
           }
        }
        else{
            QMessageBox::critical(this,"error::","رمز قبلی اشتباه وارد شده است");
            qDebug()<<"wrong";
        }

}
}
