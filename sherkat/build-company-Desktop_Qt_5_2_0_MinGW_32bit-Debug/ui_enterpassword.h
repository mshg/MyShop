/********************************************************************************
** Form generated from reading UI file 'enterpassword.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENTERPASSWORD_H
#define UI_ENTERPASSWORD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EnterPassword
{
public:
    QLabel *label_3;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEdit_2;
    QLabel *label_2;
    QPushButton *pushButton;

    void setupUi(QDialog *EnterPassword)
    {
        if (EnterPassword->objectName().isEmpty())
            EnterPassword->setObjectName(QStringLiteral("EnterPassword"));
        EnterPassword->resize(409, 302);
        label_3 = new QLabel(EnterPassword);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(70, 200, 46, 41));
        label_3->setTextFormat(Qt::PlainText);
        label_3->setScaledContents(true);
        label_3->setWordWrap(false);
        label_3->setOpenExternalLinks(false);
        layoutWidget = new QWidget(EnterPassword);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(100, 100, 189, 81));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        horizontalLayout_2->addWidget(lineEdit_2);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);


        verticalLayout->addLayout(horizontalLayout_2);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);


        retranslateUi(EnterPassword);

        QMetaObject::connectSlotsByName(EnterPassword);
    } // setupUi

    void retranslateUi(QDialog *EnterPassword)
    {
        EnterPassword->setWindowTitle(QApplication::translate("EnterPassword", "Dialog", 0));
        label_3->setText(QApplication::translate("EnterPassword", "TextLabel", 0));
        label->setText(QApplication::translate("EnterPassword", "<html><head/><body><p><span style=\" font-size:9pt; font-style:italic; color:#9a449d;\">\331\206\330\247\331\205 \332\251\330\247\330\261\330\250\330\261\333\214</span></p></body></html>", 0));
        label_2->setText(QApplication::translate("EnterPassword", "<html><head/><body><p><span style=\" font-size:9pt; font-style:italic; color:#9a449d;\">\332\257\330\260\330\261 \331\210\330\247\332\230\331\207</span></p></body></html>", 0));
        pushButton->setText(QApplication::translate("EnterPassword", "\331\210\330\261\331\210\330\257", 0));
    } // retranslateUi

};

namespace Ui {
    class EnterPassword: public Ui_EnterPassword {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENTERPASSWORD_H
