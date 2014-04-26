#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>

#include <QMainWindow>

#include<QtSql/QSqlDatabase>

#include<QDebug>

#include<QFileInfo>

#include <QMessageBox>

#include"mainwindow.h"


namespace Ui {
class Login;
}

class Login : public QDialog
{
    Q_OBJECT


public:
    QSqlDatabase mydb;
    void connclose(){
        mydb.close();
        mydb.removeDatabase(QSqlDatabase::defaultConnection);
    }
    bool connopen(){
        mydb  = QSqlDatabase::addDatabase("QSQLITE");
        mydb.setDatabaseName("C:/Users/mahdi/Desktop/chert22/login.db.sqlite");
        if(!mydb.open()){
            qDebug()<<"failed to open the database";
        return false;}
        else{
            qDebug()<<("connected..");
            return true;
        }
    }


public:
    explicit Login(QWidget *parent = 0);
    ~Login();

private slots:
    void on_Exit_clicked();

    void on_Enter_clicked();

private:
    Ui::Login *ui;
    int GetCount();
};

#endif // LOGIN_H
