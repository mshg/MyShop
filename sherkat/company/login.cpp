#include "mainwindow.h"
#include "login.h"
#include "ui_login.h"
#include <QtSql>


Login::Login(QWidget *parent) :
   QDialog(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
    validIntro = false;
}

Login::~Login()
{
    delete ui;
}
void Login::connclose(){

    mydb.close();
    mydb.removeDatabase(QSqlDatabase::defaultConnection);
}

bool Login::connopen(){
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

void Login::on_Enter_clicked()
{
   QString username,password;
   username = ui->lineEdit_username->text();
   password=ui->lineEdit_password->text();
   if(!connopen()){
       qDebug()<<"failed to open the database";
//       return;
    }
//       connopen();

       QSqlQuery qry;
       if (qry.exec("select * from login_table"))
       {
           while (qry.next())
           {
               if (username == qry.value(0).toString() && password == qry.value(1).toString())
               {
                   QMessageBox::information(this,"welcom","خوش آمدید");
                   validIntro = true;
                   connclose();
                   this->accept();
               }
           }
       }
       if (!validIntro)
       {
       validIntro = false;
       QMessageBox::warning(this,"Error","نام کاربری یا گذر واژه نادرست است");
       }
}


bool Login::get_valid()
{
    return validIntro;
}
