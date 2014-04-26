#include "mainwindow.h"
#include "login.h"
#include "ui_login.h"
#include <QtSql/QSqlQuery>


Login::Login(QWidget *parent) :
   QDialog(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
}

Login::~Login()
{
    delete ui;
}

//int Login:: GetCount()
//{
//    return count;
//}

void Login::on_Enter_clicked()
{
   QString username,password;
   username = ui->lineEdit_username->text();
   password=ui->lineEdit_password->text();
   if(!connopen()){
       qDebug()<<"failed to open the database";
       return;
    }
       connopen();

       QSqlQuery qry;

       qry.prepare("select * from login_table where username = '"+username+"' and password ='"+password+"' ");

       if(qry.exec()){

           int count = 0;
           while(qry.next()){
              count++;
           }
       }
           void Login::GetCount()
           {
               return count;
           }

           if(count==1){
               //ui->label->setText("username and password is correct");
               //QMessageBox::information(this,tr("Passed"),tr("you passed it"));
               connclose();
               this->hide();
               MainWindow mainwindow1;
              //mainwindow1.setModal(true);
              //mainwindow1.exec();
              mainwindow1.show();
}
          // if(count>1)
            //   ui->label->setText("duplicate username and password");
           if(count<1)
                 QMessageBox::information(this,tr("Error"),tr("Wrong password or username"));
       }

