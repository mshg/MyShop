#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>

#include <QMainWindow>

#include <QtSql>

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
    explicit Login(QWidget *parent = 0);
    ~Login();
    QSqlDatabase mydb;
    void connclose();
    bool connopen();
    bool get_valid();

private slots:
    void on_Enter_clicked();

    //bool on_Enter_clicked();

private:
    Ui::Login *ui;
    bool validIntro;
};

#endif // LOGIN_H
