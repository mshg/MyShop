#include "mainwindow.h"
#include "Login.h"
#include <QApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Login l;
    MainWindow w;
    l.exec();
    if (l.get_valid())
    {
        qDebug() << "OK";
        w.show();
    }

    return a.exec();
}
