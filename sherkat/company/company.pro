QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = MyShop
TEMPLATE = app

FORMS += \
    login.ui \
    mainwindow.ui \
    enterpassword.ui

OTHER_FILES += \
    company.pro.user \
    login.db.sqlite \
    company.pro.user.333fb9e

HEADERS += \
    login.h \
    mainwindow.h

SOURCES += \
    login.cpp \
    main.cpp \
    mainwindow.cpp
