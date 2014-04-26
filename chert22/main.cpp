#include "mainwindow.h"
#include "Login.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Login l;
    MainWindow w;

    l.show();

//    if(){
//        //ui->label->setText("username and password is correct");
//        //QMessageBox::information(this,tr("Passed"),tr("you passed it"));
//        connclose();
//        this->hide();
//        MainWindow mainwindow1;
//       //mainwindow1.setModal(true);
//       //mainwindow1.exec();
//       mainwindow1.show();
//}
//   // if(count>1)
//     //   ui->label->setText("duplicate username and password");
//    if(count<1)
//          QMessageBox::information(this,tr("Error"),tr("Wrong password or username"));
//}

    //w.show();

    return a.exec();
}
