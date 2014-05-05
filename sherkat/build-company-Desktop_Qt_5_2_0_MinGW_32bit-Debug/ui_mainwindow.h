/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QTabWidget *tabWidget;
    QWidget *tab_2;
    QGridLayout *gridLayout;
    QFrame *line_2;
    QFrame *line;
    QFrame *line_3;
    QFrame *line_4;
    QFrame *line_5;
    QFrame *line_6;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *NumOfBox;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *name;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *NumInBox;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *company;
    QSpacerItem *verticalSpacer_7;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *kharid_sabt;
    QSpacerItem *horizontalSpacer_8;
    QLabel *label_7;
    QPlainTextEdit *plainTextEdit;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_8;
    QLineEdit *buyprice;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QDateEdit *EndDate;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QDateEdit *BuyDate;
    QFrame *line_7;
    QFrame *line_8;
    QFrame *line_9;
    QFrame *line_10;
    QWidget *tab_4;
    QGridLayout *gridLayout_3;
    QTableView *tableView;
    QWidget *tab_5;
    QGridLayout *gridLayout_5;
    QWidget *widget_2;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_17;
    QLineEdit *visitor;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_16;
    QLineEdit *customerName;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_12;
    QComboBox *comboName;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_9;
    QComboBox *combocompany;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_13;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_11;
    QLineEdit *number;
    QFrame *line_13;
    QFrame *line_14;
    QFrame *line_15;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *lcd;
    QWidget *tab_6;
    QGridLayout *gridLayout_8;
    QTableView *tableView_2;
    QWidget *tab_3;
    QGridLayout *gridLayout_9;
    QGroupBox *groupBox_2;
    QPushButton *pushButton_4;
    QFrame *line_16;
    QLabel *label_18;
    QTextEdit *textEdit;
    QWidget *widget;
    QGridLayout *gridLayout_7;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_6;
    QFrame *line_12;
    QLineEdit *Confirm;
    QLineEdit *NewUsername;
    QLineEdit *NewPassword;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_10;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButton;
    QFrame *line_11;
    QLabel *label_19;
    QLineEdit *lastpassword;
    QFrame *line_17;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setWindowModality(Qt::ApplicationModal);
        MainWindow->setEnabled(true);
        MainWindow->resize(764, 431);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(221, 221, 221, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(238, 238, 238, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(110, 110, 110, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(147, 147, 147, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        QBrush brush6(QColor(255, 255, 220, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        MainWindow->setPalette(palette);
        MainWindow->setMouseTracking(true);
        MainWindow->setLayoutDirection(Qt::RightToLeft);
        MainWindow->setStyleSheet(QLatin1String("QHeaderView::section {\n"
"    background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1,\n"
"                                      stop:0 #616161, stop: 0.5 #505050,\n"
"                                      stop: 0.6 #434343, stop:1 #656565);\n"
"    color: white;\n"
"    padding-left: 4px;\n"
"    border: 1px solid #6c6c6c;\n"
"}\n"
"\n"
"QHeaderView::section:checked\n"
"{\n"
"    background-color: red;\n"
"}\n"
"\n"
"/* style the sort indicator */\n"
"QHeaderView::down-arrow {\n"
"    image: url(down_arrow.png);\n"
"}\n"
"\n"
"QHeaderView::up-arrow {\n"
"    image: url(up_arrow.png);\n"
"}"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setEnabled(true);
        QPalette palette1;
        QBrush brush7(QColor(208, 217, 255, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush7);
        QBrush brush8(QColor(227, 214, 238, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush8);
        QBrush brush9(QColor(255, 196, 215, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush9);
        QBrush brush10(QColor(225, 230, 255, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush10);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush9);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        tabWidget->setPalette(palette1);
        tabWidget->setMouseTracking(false);
        tabWidget->setLayoutDirection(Qt::RightToLeft);
        tabWidget->setStyleSheet(QLatin1String("QTabWidget::pane { /* The tab widget frame */\n"
"    border-top: 2px solid #C2C7CB;\n"
"}\n"
"\n"
"QTabWidget::tab-bar {\n"
"    left: 5px; /* move to the right by 5px */\n"
"}\n"
"\n"
"/* Style the tab using the tab sub-control. Note that\n"
"    it reads QTabBar _not_ QTabWidget */\n"
"QTabBar::tab {\n"
"    background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #E1E1E1, stop: 0.4 #DDDDDD,\n"
"                                stop: 0.5 #D8D8D8, stop: 1.0 #D3D3D3);\n"
"    border: 2px solid #C4C4C3;\n"
"    border-bottom-color: #C2C7CB; /* same as the pane color */\n"
"    border-top-left-radius: 4px;\n"
"    border-top-right-radius: 4px;\n"
"    min-width: 8ex;\n"
"    padding: 2px;\n"
"}\n"
"\n"
"QTabBar::tab:selected, QTabBar::tab:hover {\n"
"    background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #fafafa, stop: 0.4 #f4f4f4,\n"
"                                stop: 0.5 #e7e7e7, stop: 1.0 #fafafa);\n"
"}\n"
"\n"
"Q"
                        "TabBar::tab:selected {\n"
"    border-color: #9B9B9B;\n"
"    border-bottom-color: #C2C7CB; /* same as pane color */\n"
"}\n"
"\n"
"QTabBar::tab:!selected {\n"
"    margin-top: 2px; /* make non-selected tabs look smaller */\n"
"}\n"
"\n"
"/* make use of negative margins for overlapping tabs */\n"
"QTabBar::tab:selected {\n"
"    /* expand/overlap to the left and right by 4px */\n"
"    margin-left: -4px;\n"
"    margin-right: -4px;\n"
"}\n"
"\n"
"QTabBar::tab:first:selected {\n"
"    margin-left: 0; /* the first selected tab has nothing to overlap with on the left */\n"
"}\n"
"\n"
"QTabBar::tab:last:selected {\n"
"    margin-right: 0; /* the last selected tab has nothing to overlap with on the right */\n"
"}\n"
"\n"
"QTabBar::tab:only-one {\n"
"    margin: 0; /* if there is only one tab, we don't want overlapping margins */\n"
"}\n"
"\n"
"QHeaderView::section {\n"
"    background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1,\n"
"                                      stop:0 #616161, stop: 0.5 #505050,\n"
"    "
                        "                                  stop: 0.6 #434343, stop:1 #656565);\n"
"    color: white;\n"
"    padding-left: 4px;\n"
"    border: 1px solid #6c6c6c;\n"
"}\n"
"\n"
"QHeaderView::section:checked\n"
"{\n"
"    background-color: red;\n"
"}\n"
"\n"
"/* style the sort indicator */\n"
"QHeaderView::down-arrow {\n"
"    image: url(down_arrow.png);\n"
"}\n"
"\n"
"QHeaderView::up-arrow {\n"
"    image: url(up_arrow.png);\n"
"}"));
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        gridLayout = new QGridLayout(tab_2);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        line_2 = new QFrame(tab_2);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_2, 5, 4, 1, 1);

        line = new QFrame(tab_2);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 2, 4, 1, 1);

        line_3 = new QFrame(tab_2);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_3, 8, 4, 1, 1);

        line_4 = new QFrame(tab_2);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_4, 10, 3, 1, 1);

        line_5 = new QFrame(tab_2);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_5, 2, 1, 1, 1);

        line_6 = new QFrame(tab_2);
        line_6->setObjectName(QStringLiteral("line_6"));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_6, 4, 1, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(tab_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setStyleSheet(QLatin1String("QFrame, QLabel, QToolTip {\n"
"    border: 2px solid green;\n"
"    border-radius: 4px;\n"
"    padding: 2px;\n"
"    background-image: url(images/welcome.png);\n"
"}"));

        horizontalLayout_3->addWidget(label_3);

        NumOfBox = new QLineEdit(tab_2);
        NumOfBox->setObjectName(QStringLiteral("NumOfBox"));
        NumOfBox->setStyleSheet(QLatin1String("QLineEdit {\n"
"    border: 2px solid gray;\n"
"    border-radius: 10px;\n"
"    padding: 0 8px;\n"
"    background: rgb(134, 255, 241);\n"
"    selection-background-color: darkgray;\n"
"}"));

        horizontalLayout_3->addWidget(NumOfBox);


        gridLayout->addLayout(horizontalLayout_3, 3, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(tab_2);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QLatin1String("QFrame, QLabel, QToolTip {\n"
"    border: 2px solid green;\n"
"    border-radius: 4px;\n"
"    padding: 2px;\n"
"    background-image: url(images/welcome.png);\n"
"}"));

        horizontalLayout->addWidget(label);

        name = new QLineEdit(tab_2);
        name->setObjectName(QStringLiteral("name"));
        name->setStyleSheet(QLatin1String("QLineEdit {\n"
"    border: 2px solid gray;\n"
"    border-radius: 10px;\n"
"    padding: 0 8px;\n"
"    background: rgb(134, 255, 241);\n"
"    selection-background-color: darkgray;\n"
"}"));

        horizontalLayout->addWidget(name);


        gridLayout->addLayout(horizontalLayout, 0, 1, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_4 = new QLabel(tab_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setStyleSheet(QLatin1String("QFrame, QLabel, QToolTip {\n"
"    border: 2px solid green;\n"
"    border-radius: 4px;\n"
"    padding: 2px;\n"
"    background-image: url(images/welcome.png);\n"
"}"));

        horizontalLayout_4->addWidget(label_4);

        NumInBox = new QLineEdit(tab_2);
        NumInBox->setObjectName(QStringLiteral("NumInBox"));
        NumInBox->setStyleSheet(QLatin1String("QLineEdit {\n"
"    border: 2px solid gray;\n"
"    border-radius: 10px;\n"
"    padding: 0 8px;\n"
"    background: rgb(134, 255, 241);\n"
"    selection-background-color: darkgray;\n"
"}\n"
"QLineEdit { color: red }\n"
"QLineEdit { color: gray }\n"
"QDialog QLineEdit { color: brown }"));

        horizontalLayout_4->addWidget(NumInBox);


        gridLayout->addLayout(horizontalLayout_4, 3, 4, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_5, 4, 4, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_6, 7, 4, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 1, 4, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(tab_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QLatin1String("QFrame, QLabel, QToolTip {\n"
"    border: 2px solid green;\n"
"    border-radius: 4px;\n"
"    padding: 2px;\n"
"    background-image: url(images/welcome.png);\n"
"}"));

        horizontalLayout_2->addWidget(label_2);

        company = new QLineEdit(tab_2);
        company->setObjectName(QStringLiteral("company"));
        company->setStyleSheet(QLatin1String("QLineEdit {\n"
"    border: 2px solid gray;\n"
"    border-radius: 10px;\n"
"    padding: 0 8px;\n"
"    background: rgb(149, 255, 238);\n"
"    selection-background-color:rgb(255, 17, 40);\n"
"}"));

        horizontalLayout_2->addWidget(company);


        gridLayout->addLayout(horizontalLayout_2, 0, 4, 1, 1);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_7, 10, 4, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_7, 3, 5, 1, 1);

        kharid_sabt = new QPushButton(tab_2);
        kharid_sabt->setObjectName(QStringLiteral("kharid_sabt"));
        kharid_sabt->setStyleSheet(QLatin1String("QPushButton {\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"    min-width: 80px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
"QPushButton:flat {\n"
"    border: none; /* no border for a flat push button */\n"
"}\n"
"\n"
"QPushButton:default {\n"
"    border-color: navy; /* make the default button prominent */\n"
"}\n"
"QPushButton:open { /* when the button has its menu open */\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
"QPushButton::menu-indicator {\n"
"    image: url(menu_indicator.png);\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: bottom right;\n"
"}\n"
"\n"
""
                        "QPushButton::menu-indicator:pressed, QPushButton::menu-indicator:open {\n"
"    position: relative;\n"
"    top: 2px; left: 2px; /* shift the arrow by 2 px */\n"
"}\n"
"QPushButton:open { /* when the button has its menu open */\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
"QPushButton::menu-indicator {\n"
"    image: url(menu_indicator.png);\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: bottom right;\n"
"}\n"
"\n"
"QPushButton::menu-indicator:pressed, QPushButton::menu-indicator:open {\n"
"    position: relative;\n"
"    top: 2px; left: 2px; /* shift the arrow by 2 px */\n"
"}\n"
" QPushButton {\n"
"            color: grey;\n"
"            border-image: url(/home/kamlie/code/button.png) 3 10 3 10;\n"
"            border-top: 3px transparent;\n"
"            border-bottom: 3px transparent;\n"
"            border-right: 10px transparent;\n"
"            border-left: 10px transpar"
                        "ent;\n"
"        }\n"
"\n"
"QPushButton#evilButton {\n"
"    background-color: red;\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-color: beige;\n"
"}"));

        gridLayout->addWidget(kharid_sabt, 13, 5, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_8, 3, 2, 1, 1);

        label_7 = new QLabel(tab_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setStyleSheet(QStringLiteral(""));

        gridLayout->addWidget(label_7, 12, 1, 1, 1);

        plainTextEdit = new QPlainTextEdit(tab_2);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setStyleSheet(QLatin1String("QTextEdit, QListView {\n"
"    background-color: white;\n"
"    background-image: url(draft.png);\n"
"    background-attachment: fixed;\n"
"}"));

        gridLayout->addWidget(plainTextEdit, 12, 2, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_8 = new QLabel(tab_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setStyleSheet(QLatin1String("QFrame, QLabel, QToolTip {\n"
"    border: 2px solid green;\n"
"    border-radius: 4px;\n"
"    padding: 2px;\n"
"    background-image: url(images/welcome.png);\n"
"}"));

        horizontalLayout_7->addWidget(label_8);

        buyprice = new QLineEdit(tab_2);
        buyprice->setObjectName(QStringLiteral("buyprice"));
        buyprice->setStyleSheet(QLatin1String("QLineEdit {\n"
"    border: 2px solid gray;\n"
"    border-radius: 10px;\n"
"    padding: 0 8px;\n"
"    background: rgb(134, 255, 241);\n"
"    selection-background-color: darkgray;\n"
"}"));

        horizontalLayout_7->addWidget(buyprice);


        gridLayout->addLayout(horizontalLayout_7, 6, 4, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_6 = new QLabel(tab_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setStyleSheet(QLatin1String("QFrame, QLabel, QToolTip {\n"
"    border: 2px solid green;\n"
"    border-radius: 4px;\n"
"    padding: 2px;\n"
"    background-image: url(images/welcome.png);\n"
"}"));

        horizontalLayout_6->addWidget(label_6);

        EndDate = new QDateEdit(tab_2);
        EndDate->setObjectName(QStringLiteral("EndDate"));
        EndDate->setStyleSheet(QLatin1String("QSpinBox {\n"
"    padding-right: 15px; /* make room for the arrows */\n"
"    border-image: url(:/images/frame.png) 4;\n"
"    border-width: 3;\n"
"}\n"
"\n"
"QSpinBox::up-button {\n"
"    subcontrol-origin: border;\n"
"    subcontrol-position: top right; /* position at the top right corner */\n"
"\n"
"    width: 16px; /* 16 + 2*1px border-width = 15px padding + 3px parent border */\n"
"    border-image: url(:/images/spinup.png) 1;\n"
"    border-width: 1px;\n"
"}\n"
"\n"
"QSpinBox::up-button:hover {\n"
"    border-image: url(:/images/spinup_hover.png) 1;\n"
"}\n"
"\n"
"QSpinBox::up-button:pressed {\n"
"    border-image: url(:/images/spinup_pressed.png) 1;\n"
"}\n"
"\n"
"QSpinBox::up-arrow {\n"
"    image: url(:/images/up_arrow.png);\n"
"    width: 7px;\n"
"    height: 7px;\n"
"}\n"
"\n"
"QSpinBox::up-arrow:disabled, QSpinBox::up-arrow:off { /* off state when value is max */\n"
"   image: url(:/images/up_arrow_disabled.png);\n"
"}\n"
"\n"
"QSpinBox::down-button {\n"
"    subcontrol-origin: border;\n"
"    sub"
                        "control-position: bottom right; /* position at bottom right corner */\n"
"\n"
"    width: 16px;\n"
"    border-image: url(:/images/spindown.png) 1;\n"
"    border-width: 1px;\n"
"    border-top-width: 0;\n"
"}\n"
"\n"
"QSpinBox::down-button:hover {\n"
"    border-image: url(:/images/spindown_hover.png) 1;\n"
"}\n"
"\n"
"QSpinBox::down-button:pressed {\n"
"    border-image: url(:/images/spindown_pressed.png) 1;\n"
"}\n"
"\n"
"QSpinBox::down-arrow {\n"
"    image: url(:/images/down_arrow.png);\n"
"    width: 7px;\n"
"    height: 7px;\n"
"}\n"
"\n"
"QSpinBox::down-arrow:disabled,\n"
"QSpinBox::down-arrow:off { /* off state when value in min */\n"
"   image: url(:/images/down_arrow_disabled.png);\n"
"}"));

        horizontalLayout_6->addWidget(EndDate);


        gridLayout->addLayout(horizontalLayout_6, 9, 1, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_5 = new QLabel(tab_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setStyleSheet(QLatin1String("QFrame, QLabel, QToolTip {\n"
"    border: 2px solid green;\n"
"    border-radius: 4px;\n"
"    padding: 2px;\n"
"    background-image: url(images/welcome.png);\n"
"}"));

        horizontalLayout_5->addWidget(label_5);

        BuyDate = new QDateEdit(tab_2);
        BuyDate->setObjectName(QStringLiteral("BuyDate"));
        BuyDate->setStyleSheet(QLatin1String("QSpinBox {\n"
"    padding-right: 15px; /* make room for the arrows */\n"
"    border-image: url(:/images/frame.png) 4;\n"
"    border-width: 3;\n"
"}\n"
"\n"
"QSpinBox::up-button {\n"
"    subcontrol-origin: border;\n"
"    subcontrol-position: top right; /* position at the top right corner */\n"
"\n"
"    width: 16px; /* 16 + 2*1px border-width = 15px padding + 3px parent border */\n"
"    border-image: url(:/images/spinup.png) 1;\n"
"    border-width: 1px;\n"
"}\n"
"\n"
"QSpinBox::up-button:hover {\n"
"    border-image: url(:/images/spinup_hover.png) 1;\n"
"}\n"
"\n"
"QSpinBox::up-button:pressed {\n"
"    border-image: url(:/images/spinup_pressed.png) 1;\n"
"}\n"
"\n"
"QSpinBox::up-arrow {\n"
"    image: url(:/images/up_arrow.png);\n"
"    width: 7px;\n"
"    height: 7px;\n"
"}\n"
"\n"
"QSpinBox::up-arrow:disabled, QSpinBox::up-arrow:off { /* off state when value is max */\n"
"   image: url(:/images/up_arrow_disabled.png);\n"
"}\n"
"\n"
"QSpinBox::down-button {\n"
"    subcontrol-origin: border;\n"
"    sub"
                        "control-position: bottom right; /* position at bottom right corner */\n"
"\n"
"    width: 16px;\n"
"    border-image: url(:/images/spindown.png) 1;\n"
"    border-width: 1px;\n"
"    border-top-width: 0;\n"
"}\n"
"\n"
"QSpinBox::down-button:hover {\n"
"    border-image: url(:/images/spindown_hover.png) 1;\n"
"}\n"
"\n"
"QSpinBox::down-button:pressed {\n"
"    border-image: url(:/images/spindown_pressed.png) 1;\n"
"}\n"
"\n"
"QSpinBox::down-arrow {\n"
"    image: url(:/images/down_arrow.png);\n"
"    width: 7px;\n"
"    height: 7px;\n"
"}\n"
"\n"
"QSpinBox::down-arrow:disabled,\n"
"QSpinBox::down-arrow:off { /* off state when value in min */\n"
"   image: url(:/images/down_arrow_disabled.png);\n"
"}"));

        horizontalLayout_5->addWidget(BuyDate);


        gridLayout->addLayout(horizontalLayout_5, 9, 4, 1, 1);

        line_7 = new QFrame(tab_2);
        line_7->setObjectName(QStringLiteral("line_7"));
        line_7->setFrameShape(QFrame::HLine);
        line_7->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_7, 11, 4, 1, 1);

        line_8 = new QFrame(tab_2);
        line_8->setObjectName(QStringLiteral("line_8"));
        line_8->setFrameShape(QFrame::HLine);
        line_8->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_8, 11, 1, 1, 1);

        line_9 = new QFrame(tab_2);
        line_9->setObjectName(QStringLiteral("line_9"));
        line_9->setFrameShape(QFrame::VLine);
        line_9->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_9, 6, 2, 1, 1);

        line_10 = new QFrame(tab_2);
        line_10->setObjectName(QStringLiteral("line_10"));
        line_10->setFrameShape(QFrame::VLine);
        line_10->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_10, 5, 3, 1, 1);

        tabWidget->addTab(tab_2, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        gridLayout_3 = new QGridLayout(tab_4);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        tableView = new QTableView(tab_4);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setStyleSheet(QLatin1String("QTableView {\n"
"    selection-background-color: qlineargradient(x1: 0, y1: 0, x2: 0.5, y2: 0.5,\n"
"                                stop: 0 #FF92BB, stop: 1 white);\n"
"}\n"
"QTableView QTableCornerButton::section {\n"
"    background: red;\n"
"    border: 2px outset red;\n"
"}"));

        gridLayout_3->addWidget(tableView, 0, 0, 1, 1);

        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        gridLayout_5 = new QGridLayout(tab_5);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        widget_2 = new QWidget(tab_5);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setAutoFillBackground(false);
        widget_2->setStyleSheet(QLatin1String("QWidget {\n"
"    border: 1px solid lightgray;\n"
"    titlebar-close-icon: url(close.png);\n"
"    titlebar-normal-icon: url(float.png);\n"
"}\n"
"\n"
"QWidget::title {\n"
"    text-align: left;\n"
"    background: lightgray;\n"
"    padding-left: 35px;\n"
"}\n"
"\n"
"QWidget::close-button, QWidget::float-button {\n"
"    background: darkgray;\n"
"    padding: 0px;\n"
"    icon-size: 14px; /* maximum icon size */\n"
"}\n"
"\n"
"QWidget::close-button:hover, QWidget::float-button:hover {\n"
"    background: gray;\n"
"}\n"
"\n"
"QWidget::close-button:pressed, QWidget::float-button:pressed {\n"
"    padding: 1px -1px -1px 1px;\n"
"}\n"
"\n"
"QWidget::close-button {\n"
"    subcontrol-position: top left;\n"
"    subcontrol-origin: margin;\n"
"    position: absolute;\n"
"    top: 0px; left: 0px; bottom: 0px;\n"
"    width: 14px;\n"
"}\n"
"\n"
"QWidget::float-button {\n"
"    subcontrol-position: top left;\n"
"    subcontrol-origin: margin;\n"
"    position: absolute;\n"
"    top: 0px; left: 16px; bottom: 0px;\n"
" "
                        "   width: 14px;\n"
"}"));
        gridLayout_4 = new QGridLayout(widget_2);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        label_17 = new QLabel(widget_2);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setStyleSheet(QLatin1String("QFrame, QLabel, QToolTip {\n"
"    border: 2px solid green;\n"
"    border-radius: 4px;\n"
"    padding: 2px;\n"
"    background-image: url(images/welcome.png);\n"
"}"));

        horizontalLayout_13->addWidget(label_17);

        visitor = new QLineEdit(widget_2);
        visitor->setObjectName(QStringLiteral("visitor"));
        visitor->setStyleSheet(QLatin1String("QLineEdit {\n"
"    border: 2px solid gray;\n"
"    border-radius: 10px;\n"
"    padding: 0 8px;\n"
"    background: rgb(134, 255, 241);\n"
"    selection-background-color: darkgray;\n"
"}"));

        horizontalLayout_13->addWidget(visitor);


        gridLayout_4->addLayout(horizontalLayout_13, 6, 1, 1, 1);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        label_16 = new QLabel(widget_2);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setStyleSheet(QLatin1String("QFrame, QLabel, QToolTip {\n"
"    border: 2px solid green;\n"
"    border-radius: 4px;\n"
"    padding: 2px;\n"
"    background-image: url(images/welcome.png);\n"
"}"));

        horizontalLayout_12->addWidget(label_16);

        customerName = new QLineEdit(widget_2);
        customerName->setObjectName(QStringLiteral("customerName"));
        customerName->setStyleSheet(QLatin1String("QLineEdit {\n"
"    border: 2px solid gray;\n"
"    border-radius: 10px;\n"
"    padding: 0 8px;\n"
"    background: rgb(134, 255, 241);\n"
"    selection-background-color: darkgray;\n"
"}"));

        horizontalLayout_12->addWidget(customerName);


        gridLayout_4->addLayout(horizontalLayout_12, 6, 4, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer, 0, 5, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_3, 8, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_2, 5, 4, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer, 2, 4, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_2, 0, 0, 1, 1);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_12 = new QLabel(widget_2);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setStyleSheet(QLatin1String("QFrame, QLabel, QToolTip {\n"
"    border: 2px solid green;\n"
"    border-radius: 4px;\n"
"    padding: 2px;\n"
"    background-image: url(images/welcome.png);\n"
"}"));

        horizontalLayout_9->addWidget(label_12);

        comboName = new QComboBox(widget_2);
        comboName->setObjectName(QStringLiteral("comboName"));
        comboName->setStyleSheet(QLatin1String("QComboBox {\n"
"    border: 1px solid gray;\n"
"    border-radius: 3px;\n"
"    padding: 1px 18px 1px 3px;\n"
"    min-width: 6em;\n"
"}\n"
"\n"
"QComboBox:editable {\n"
"    background: white;\n"
"}\n"
"\n"
"QComboBox:!editable, QComboBox::drop-down:editable {\n"
"     background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                 stop: 0 #E1E1E1, stop: 0.4 #DDDDDD,\n"
"                                 stop: 0.5 #D8D8D8, stop: 1.0 #D3D3D3);\n"
"}\n"
"\n"
"/* QComboBox gets the \"on\" state when the popup is open */\n"
"QComboBox:!editable:on, QComboBox::drop-down:editable:on {\n"
"    background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #D3D3D3, stop: 0.4 #D8D8D8,\n"
"                                stop: 0.5 #DDDDDD, stop: 1.0 #E1E1E1);\n"
"}\n"
"\n"
"QComboBox:on { /* shift the text when the popup opens */\n"
"    padding-top: 3px;\n"
"    padding-left: 4px;\n"
"}\n"
"\n"
"QComboBox::drop-down {\n"
"    subcontrol-origin: padding;\n"
""
                        "    subcontrol-position: top right;\n"
"    width: 15px;\n"
"\n"
"    border-left-width: 1px;\n"
"    border-left-color: darkgray;\n"
"    border-left-style: solid; /* just a single line */\n"
"    border-top-right-radius: 3px; /* same radius as the QComboBox */\n"
"    border-bottom-right-radius: 3px;\n"
"}\n"
"\n"
"QComboBox::down-arrow {\n"
"    image: url(/usr/share/icons/crystalsvg/16x16/actions/1downarrow.png);\n"
"}\n"
"\n"
"QComboBox::down-arrow:on { /* shift the arrow when popup is open */\n"
"    top: 1px;\n"
"    left: 1px;\n"
"}"));

        horizontalLayout_9->addWidget(comboName);


        gridLayout_4->addLayout(horizontalLayout_9, 0, 1, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_9 = new QLabel(widget_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setStyleSheet(QLatin1String("QFrame, QLabel, QToolTip {\n"
"    border: 2px solid green;\n"
"    border-radius: 4px;\n"
"    padding: 2px;\n"
"    background-image: url(images/welcome.png);\n"
"}"));

        horizontalLayout_8->addWidget(label_9);

        combocompany = new QComboBox(widget_2);
        combocompany->setObjectName(QStringLiteral("combocompany"));
        combocompany->setStyleSheet(QLatin1String("QComboBox {\n"
"    border: 1px solid gray;\n"
"    border-radius: 3px;\n"
"    padding: 1px 18px 1px 3px;\n"
"    min-width: 6em;\n"
"}\n"
"\n"
"QComboBox:editable {\n"
"    background: white;\n"
"}\n"
"\n"
"QComboBox:!editable, QComboBox::drop-down:editable {\n"
"     background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                 stop: 0 #E1E1E1, stop: 0.4 #DDDDDD,\n"
"                                 stop: 0.5 #D8D8D8, stop: 1.0 #D3D3D3);\n"
"}\n"
"\n"
"/* QComboBox gets the \"on\" state when the popup is open */\n"
"QComboBox:!editable:on, QComboBox::drop-down:editable:on {\n"
"    background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #D3D3D3, stop: 0.4 #D8D8D8,\n"
"                                stop: 0.5 #DDDDDD, stop: 1.0 #E1E1E1);\n"
"}\n"
"\n"
"QComboBox:on { /* shift the text when the popup opens */\n"
"    padding-top: 3px;\n"
"    padding-left: 4px;\n"
"}\n"
"\n"
"QComboBox::drop-down {\n"
"    subcontrol-origin: padding;\n"
""
                        "    subcontrol-position: top right;\n"
"    width: 15px;\n"
"\n"
"    border-left-width: 1px;\n"
"    border-left-color: darkgray;\n"
"    border-left-style: solid; /* just a single line */\n"
"    border-top-right-radius: 3px; /* same radius as the QComboBox */\n"
"    border-bottom-right-radius: 3px;\n"
"}\n"
"\n"
"QComboBox::down-arrow {\n"
"    image: url(/usr/share/icons/crystalsvg/16x16/actions/1downarrow.png);\n"
"}\n"
"\n"
"QComboBox::down-arrow:on { /* shift the arrow when popup is open */\n"
"    top: 1px;\n"
"    left: 1px;\n"
"}"));

        horizontalLayout_8->addWidget(combocompany);


        gridLayout_4->addLayout(horizontalLayout_8, 0, 4, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_3, 3, 3, 1, 1);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        label_13 = new QLabel(widget_2);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setStyleSheet(QLatin1String("QFrame, QLabel, QToolTip {\n"
"    border: 2px solid green;\n"
"    border-radius: 4px;\n"
"    padding: 2px;\n"
"    background-image: url(images/welcome.png);\n"
"}"));

        horizontalLayout_11->addWidget(label_13);

        lineEdit = new QLineEdit(widget_2);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setStyleSheet(QLatin1String("QLineEdit {\n"
"    border: 2px solid gray;\n"
"    border-radius: 10px;\n"
"    padding: 0 8px;\n"
"    background: rgb(134, 255, 241);\n"
"    selection-background-color: darkgray;\n"
"}"));

        horizontalLayout_11->addWidget(lineEdit);


        gridLayout_4->addLayout(horizontalLayout_11, 3, 4, 1, 1);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        label_11 = new QLabel(widget_2);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setStyleSheet(QLatin1String("QFrame, QLabel, QToolTip {\n"
"    border: 2px solid green;\n"
"    border-radius: 4px;\n"
"    padding: 2px;\n"
"    background-image: url(images/welcome.png);\n"
"}\n"
""));

        horizontalLayout_10->addWidget(label_11);

        number = new QLineEdit(widget_2);
        number->setObjectName(QStringLiteral("number"));
        number->setStyleSheet(QLatin1String("QLineEdit {\n"
"    border: 2px solid gray;\n"
"    border-radius: 10px;\n"
"    padding: 0 8px;\n"
"    background: rgb(134, 255, 241);\n"
"    selection-background-color: darkgray;\n"
"}"));

        horizontalLayout_10->addWidget(number);


        gridLayout_4->addLayout(horizontalLayout_10, 3, 1, 1, 1);

        line_13 = new QFrame(widget_2);
        line_13->setObjectName(QStringLiteral("line_13"));
        line_13->setFrameShape(QFrame::HLine);
        line_13->setFrameShadow(QFrame::Sunken);

        gridLayout_4->addWidget(line_13, 2, 1, 1, 1);

        line_14 = new QFrame(widget_2);
        line_14->setObjectName(QStringLiteral("line_14"));
        line_14->setFrameShape(QFrame::HLine);
        line_14->setFrameShadow(QFrame::Sunken);

        gridLayout_4->addWidget(line_14, 5, 1, 1, 1);

        line_15 = new QFrame(widget_2);
        line_15->setObjectName(QStringLiteral("line_15"));
        line_15->setFrameShape(QFrame::HLine);
        line_15->setFrameShadow(QFrame::Sunken);

        gridLayout_4->addWidget(line_15, 7, 1, 1, 1);

        pushButton_2 = new QPushButton(widget_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setStyleSheet(QLatin1String("QPushButton {\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"    min-width: 80px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
"QPushButton:flat {\n"
"    border: none; /* no border for a flat push button */\n"
"}\n"
"\n"
"QPushButton:default {\n"
"    border-color: navy; /* make the default button prominent */\n"
"}\n"
"QPushButton:open { /* when the button has its menu open */\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
"QPushButton::menu-indicator {\n"
"    image: url(menu_indicator.png);\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: bottom right;\n"
"}\n"
"\n"
""
                        "QPushButton::menu-indicator:pressed, QPushButton::menu-indicator:open {\n"
"    position: relative;\n"
"    top: 2px; left: 2px; /* shift the arrow by 2 px */\n"
"}\n"
"QPushButton:open { /* when the button has its menu open */\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
"QPushButton::menu-indicator {\n"
"    image: url(menu_indicator.png);\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: bottom right;\n"
"}\n"
"\n"
"QPushButton::menu-indicator:pressed, QPushButton::menu-indicator:open {\n"
"    position: relative;\n"
"    top: 2px; left: 2px; /* shift the arrow by 2 px */\n"
"}\n"
" QPushButton {\n"
"            color: grey;\n"
"            border-image: url(/home/kamlie/code/button.png) 3 10 3 10;\n"
"            border-top: 3px transparent;\n"
"            border-bottom: 3px transparent;\n"
"            border-right: 10px transparent;\n"
"            border-left: 10px transpar"
                        "ent;\n"
"        }\n"
"\n"
"QPushButton#evilButton {\n"
"    background-color: red;\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-color: beige;\n"
"}"));

        gridLayout_4->addWidget(pushButton_2, 1, 5, 1, 1);

        pushButton_3 = new QPushButton(widget_2);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setStyleSheet(QLatin1String("QPushButton {\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"    min-width: 80px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
"QPushButton:flat {\n"
"    border: none; /* no border for a flat push button */\n"
"}\n"
"\n"
"QPushButton:default {\n"
"    border-color: navy; /* make the default button prominent */\n"
"}\n"
"QPushButton:open { /* when the button has its menu open */\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
"QPushButton::menu-indicator {\n"
"    image: url(menu_indicator.png);\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: bottom right;\n"
"}\n"
"\n"
""
                        "QPushButton::menu-indicator:pressed, QPushButton::menu-indicator:open {\n"
"    position: relative;\n"
"    top: 2px; left: 2px; /* shift the arrow by 2 px */\n"
"}\n"
"QPushButton:open { /* when the button has its menu open */\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
"QPushButton::menu-indicator {\n"
"    image: url(menu_indicator.png);\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: bottom right;\n"
"}\n"
"\n"
"QPushButton::menu-indicator:pressed, QPushButton::menu-indicator:open {\n"
"    position: relative;\n"
"    top: 2px; left: 2px; /* shift the arrow by 2 px */\n"
"}\n"
" QPushButton {\n"
"            color: grey;\n"
"            border-image: url(/home/kamlie/code/button.png) 3 10 3 10;\n"
"            border-top: 3px transparent;\n"
"            border-bottom: 3px transparent;\n"
"            border-right: 10px transparent;\n"
"            border-left: 10px transpar"
                        "ent;\n"
"        }\n"
"\n"
"QPushButton#evilButton {\n"
"    background-color: red;\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-color: beige;\n"
"}"));

        gridLayout_4->addWidget(pushButton_3, 8, 4, 1, 1);

        lcd = new QLabel(widget_2);
        lcd->setObjectName(QStringLiteral("lcd"));
        lcd->setFrameShape(QFrame::Box);

        gridLayout_4->addWidget(lcd, 3, 2, 1, 1);


        gridLayout_5->addWidget(widget_2, 0, 0, 1, 1);

        tabWidget->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        gridLayout_8 = new QGridLayout(tab_6);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        tableView_2 = new QTableView(tab_6);
        tableView_2->setObjectName(QStringLiteral("tableView_2"));

        gridLayout_8->addWidget(tableView_2, 0, 0, 1, 1);

        tabWidget->addTab(tab_6, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        gridLayout_9 = new QGridLayout(tab_3);
        gridLayout_9->setSpacing(6);
        gridLayout_9->setContentsMargins(11, 11, 11, 11);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        groupBox_2 = new QGroupBox(tab_3);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setStyleSheet(QLatin1String("QGroupBox {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #E0E0E0, stop: 1 #FFFFFF);\n"
"    border: 2px solid gray;\n"
"    border-radius: 5px;\n"
"    margin-top: 1ex; /* leave space at the top for the title */\n"
"}\n"
"\n"
"QGroupBox::title {\n"
"    subcontrol-origin: margin;\n"
"    subcontrol-position: top left; /* position at the top right */\n"
"    padding: 0 3px;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FFOECE, stop: 1 #FFFFFF);\n"
"}"));
        pushButton_4 = new QPushButton(groupBox_2);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(17, 256, 80, 16));
        pushButton_4->setStyleSheet(QLatin1String("QPushButton {\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"    min-width: 80px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
"QPushButton:flat {\n"
"    border: none; /* no border for a flat push button */\n"
"}\n"
"\n"
"QPushButton:default {\n"
"    border-color: navy; /* make the default button prominent */\n"
"}\n"
"QPushButton:open { /* when the button has its menu open */\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
"QPushButton::menu-indicator {\n"
"    image: url(menu_indicator.png);\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: bottom right;\n"
"}\n"
"\n"
""
                        "QPushButton::menu-indicator:pressed, QPushButton::menu-indicator:open {\n"
"    position: relative;\n"
"    top: 2px; left: 2px; /* shift the arrow by 2 px */\n"
"}\n"
"QPushButton:open { /* when the button has its menu open */\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
"QPushButton::menu-indicator {\n"
"    image: url(menu_indicator.png);\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: bottom right;\n"
"}\n"
"\n"
"QPushButton::menu-indicator:pressed, QPushButton::menu-indicator:open {\n"
"    position: relative;\n"
"    top: 2px; left: 2px; /* shift the arrow by 2 px */\n"
"}\n"
" QPushButton {\n"
"            color: grey;\n"
"            border-image: url(/home/kamlie/code/button.png) 3 10 3 10;\n"
"            border-top: 3px transparent;\n"
"            border-bottom: 3px transparent;\n"
"            border-right: 10px transparent;\n"
"            border-left: 10px transpar"
                        "ent;\n"
"        }\n"
"\n"
"QPushButton#evilButton {\n"
"    background-color: red;\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-color: beige;\n"
"}"));
        line_16 = new QFrame(groupBox_2);
        line_16->setObjectName(QStringLiteral("line_16"));
        line_16->setGeometry(QRect(11, 178, 635, 16));
        line_16->setFrameShape(QFrame::HLine);
        line_16->setFrameShadow(QFrame::Sunken);
        label_18 = new QLabel(groupBox_2);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(652, 83, 65, 16));
        label_18->setStyleSheet(QStringLiteral(""));
        label_18->setFrameShape(QFrame::NoFrame);
        textEdit = new QTextEdit(groupBox_2);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(153, 40, 181, 131));
        textEdit->setStyleSheet(QLatin1String("QTextEdit, QListView {\n"
"    background-color: rgb(121, 255, 244);\n"
"    background-image: url(draft.png);\n"
"    background-attachment: fixed;\n"
"}"));

        gridLayout_9->addWidget(groupBox_2, 0, 0, 1, 1);

        tabWidget->addTab(tab_3, QString());
        widget = new QWidget();
        widget->setObjectName(QStringLiteral("widget"));
        gridLayout_7 = new QGridLayout(widget);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        groupBox = new QGroupBox(widget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setStyleSheet(QLatin1String("QGroupBox {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #E0E0E0, stop: 1 #FFFFFF);\n"
"    border: 2px solid gray;\n"
"    border-radius: 5px;\n"
"    margin-top: 1ex; /* leave space at the top for the title */\n"
"}\n"
"\n"
"QGroupBox::title {\n"
"    subcontrol-origin: margin;\n"
"    subcontrol-position: top left; /* position at the top right */\n"
"    padding: 0 3px;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FFOECE, stop: 1 #FFFFFF);\n"
"}"));
        gridLayout_6 = new QGridLayout(groupBox);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        line_12 = new QFrame(groupBox);
        line_12->setObjectName(QStringLiteral("line_12"));
        line_12->setFrameShape(QFrame::HLine);
        line_12->setFrameShadow(QFrame::Sunken);

        gridLayout_6->addWidget(line_12, 1, 1, 1, 1);

        Confirm = new QLineEdit(groupBox);
        Confirm->setObjectName(QStringLiteral("Confirm"));
        Confirm->setStyleSheet(QLatin1String("QLineEdit {\n"
"    border: 2px solid gray;\n"
"    border-radius: 10px;\n"
"    padding: 0 8px;\n"
"    background: rgb(134, 255, 241);\n"
"    selection-background-color: darkgray;\n"
"}"));
        Confirm->setEchoMode(QLineEdit::Password);

        gridLayout_6->addWidget(Confirm, 7, 2, 1, 1);

        NewUsername = new QLineEdit(groupBox);
        NewUsername->setObjectName(QStringLiteral("NewUsername"));
        NewUsername->setStyleSheet(QLatin1String("QLineEdit {\n"
"    border: 2px solid gray;\n"
"    border-radius: 10px;\n"
"    padding: 0 8px;\n"
"    background: rgb(134, 255, 241);\n"
"    selection-background-color: darkgray;\n"
"}"));

        gridLayout_6->addWidget(NewUsername, 0, 2, 1, 1);

        NewPassword = new QLineEdit(groupBox);
        NewPassword->setObjectName(QStringLiteral("NewPassword"));
        NewPassword->setStyleSheet(QLatin1String("QLineEdit {\n"
"    border: 2px solid gray;\n"
"    border-radius: 10px;\n"
"    padding: 0 8px;\n"
"    background: rgb(134, 255, 241);\n"
"    selection-background-color: darkgray;\n"
"}"));
        NewPassword->setEchoMode(QLineEdit::Password);

        gridLayout_6->addWidget(NewPassword, 5, 2, 1, 1);

        label_14 = new QLabel(groupBox);
        label_14->setObjectName(QStringLiteral("label_14"));

        gridLayout_6->addWidget(label_14, 5, 1, 1, 1);

        label_15 = new QLabel(groupBox);
        label_15->setObjectName(QStringLiteral("label_15"));

        gridLayout_6->addWidget(label_15, 7, 1, 1, 1);

        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout_6->addWidget(label_10, 0, 1, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_6, 5, 0, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_5, 9, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_4, 5, 3, 1, 1);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setAutoFillBackground(false);
        pushButton->setStyleSheet(QLatin1String("QPushButton {\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"    min-width: 80px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
"QPushButton:flat {\n"
"    border: none; /* no border for a flat push button */\n"
"}\n"
"\n"
"QPushButton:default {\n"
"    border-color: navy; /* make the default button prominent */\n"
"}\n"
"QPushButton:open { /* when the button has its menu open */\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
"QPushButton::menu-indicator {\n"
"    image: url(menu_indicator.png);\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: bottom right;\n"
"}\n"
"\n"
""
                        "QPushButton::menu-indicator:pressed, QPushButton::menu-indicator:open {\n"
"    position: relative;\n"
"    top: 2px; left: 2px; /* shift the arrow by 2 px */\n"
"}\n"
"QPushButton:open { /* when the button has its menu open */\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
"QPushButton::menu-indicator {\n"
"    image: url(menu_indicator.png);\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: bottom right;\n"
"}\n"
"\n"
"QPushButton::menu-indicator:pressed, QPushButton::menu-indicator:open {\n"
"    position: relative;\n"
"    top: 2px; left: 2px; /* shift the arrow by 2 px */\n"
"}\n"
" QPushButton {\n"
"            color: grey;\n"
"            border-image: url(/home/kamlie/code/button.png) 3 10 3 10;\n"
"            border-top: 3px transparent;\n"
"            border-bottom: 3px transparent;\n"
"            border-right: 10px transparent;\n"
"            border-left: 10px transpar"
                        "ent;\n"
"        }\n"
"\n"
"QPushButton#evilButton {\n"
"    background-color: red;\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-color: beige;\n"
"}"));
        pushButton->setCheckable(false);
        pushButton->setAutoRepeat(false);
        pushButton->setAutoExclusive(false);
        pushButton->setDefault(false);
        pushButton->setFlat(false);

        gridLayout_6->addWidget(pushButton, 9, 2, 1, 1);

        line_11 = new QFrame(groupBox);
        line_11->setObjectName(QStringLiteral("line_11"));
        line_11->setFrameShape(QFrame::HLine);
        line_11->setFrameShadow(QFrame::Sunken);

        gridLayout_6->addWidget(line_11, 8, 1, 1, 1);

        label_19 = new QLabel(groupBox);
        label_19->setObjectName(QStringLiteral("label_19"));

        gridLayout_6->addWidget(label_19, 2, 1, 1, 1);

        lastpassword = new QLineEdit(groupBox);
        lastpassword->setObjectName(QStringLiteral("lastpassword"));
        lastpassword->setStyleSheet(QLatin1String("QLineEdit {\n"
"    border: 2px solid gray;\n"
"    border-radius: 10px;\n"
"    padding: 0 8px;\n"
"    background: rgb(134, 255, 241);\n"
"    selection-background-color: darkgray;\n"
"}"));

        gridLayout_6->addWidget(lastpassword, 2, 2, 1, 1);

        line_17 = new QFrame(groupBox);
        line_17->setObjectName(QStringLiteral("line_17"));
        line_17->setFrameShape(QFrame::HLine);
        line_17->setFrameShadow(QFrame::Sunken);

        gridLayout_6->addWidget(line_17, 3, 1, 1, 1);


        gridLayout_7->addWidget(groupBox, 0, 0, 1, 1);

        tabWidget->addTab(widget, QString());

        gridLayout_2->addWidget(tabWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        QWidget::setTabOrder(NewUsername, lastpassword);
        QWidget::setTabOrder(lastpassword, NewPassword);
        QWidget::setTabOrder(NewPassword, Confirm);
        QWidget::setTabOrder(Confirm, pushButton);
        QWidget::setTabOrder(pushButton, name);
        QWidget::setTabOrder(name, company);
        QWidget::setTabOrder(company, NumOfBox);
        QWidget::setTabOrder(NumOfBox, NumInBox);
        QWidget::setTabOrder(NumInBox, buyprice);
        QWidget::setTabOrder(buyprice, EndDate);
        QWidget::setTabOrder(EndDate, BuyDate);
        QWidget::setTabOrder(BuyDate, plainTextEdit);
        QWidget::setTabOrder(plainTextEdit, kharid_sabt);
        QWidget::setTabOrder(kharid_sabt, comboName);
        QWidget::setTabOrder(comboName, combocompany);
        QWidget::setTabOrder(combocompany, pushButton_2);
        QWidget::setTabOrder(pushButton_2, number);
        QWidget::setTabOrder(number, lineEdit);
        QWidget::setTabOrder(lineEdit, visitor);
        QWidget::setTabOrder(visitor, customerName);
        QWidget::setTabOrder(customerName, pushButton_3);
        QWidget::setTabOrder(pushButton_3, textEdit);
        QWidget::setTabOrder(textEdit, pushButton_4);
        QWidget::setTabOrder(pushButton_4, tabWidget);
        QWidget::setTabOrder(tabWidget, tableView_2);
        QWidget::setTabOrder(tableView_2, tableView);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(5);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        label_3->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt;\">\330\252\330\271\330\257\330\247\330\257 \332\251\330\247\330\261\330\252\331\206</span></p></body></html>", 0));
        label->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt;\">\331\206\330\247\331\205 \332\251\330\247\331\204\330\247</span></p></body></html>", 0));
        label_4->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt;\">\330\252\330\271\330\257\330\247\330\257 \330\257\330\261 \331\207\330\261 \332\251\330\247\330\261\330\252\331\206</span></p></body></html>", 0));
        label_2->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt;\">\330\264\330\261\332\251\330\252 \330\252\331\210\331\204\333\214\330\257\333\214</span></p></body></html>", 0));
        kharid_sabt->setText(QApplication::translate("MainWindow", "\330\253\330\250\330\252", 0));
        label_7->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:11pt; color:#ff0000;\">\330\252\331\210\330\266\333\214\330\255\330\247\330\252</span></p></body></html>", 0));
        plainTextEdit->setPlainText(QString());
        label_8->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt;\">\331\202\333\214\331\205\330\252 \330\256\330\261\333\214\330\257</span></p></body></html>", 0));
        buyprice->setText(QString());
        label_6->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt;\">\330\252\330\247\330\261\333\214\330\256 \330\247\331\206\331\202\330\266\330\247</span></p></body></html>", 0));
        label_5->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt;\">\330\252\330\247\330\261\333\214\330\256 \330\256\330\261\333\214\330\257</span></p></body></html>", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "\330\256\330\261\333\214\330\257", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindow", "\331\205\330\255\330\265\331\210\331\204\330\247\330\252", 0));
        label_17->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt;\">\331\210\333\214\330\262\333\214\330\252\331\210\330\261</span></p></body></html>", 0));
        label_16->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt;\">\331\206\330\247\331\205 \330\256\330\261\333\214\330\257\330\247\330\261</span></p></body></html>", 0));
        label_12->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt;\">\331\206\330\247\331\205 \332\251\330\247\331\204\330\247</span></p></body></html>", 0));
        label_9->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt;\">\330\264\330\261\332\251\330\252 \330\252\331\210\331\204\333\214\330\257\333\214</span></p></body></html>", 0));
        label_13->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt;\">\331\202\333\214\331\205\330\252 \331\201\330\261\331\210\330\264</span></p></body></html>", 0));
        label_11->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt;\">\330\252\330\271\330\257\330\247\330\257</span></p></body></html>", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "\330\250\330\247\330\261\332\257\330\260\330\247\330\261\333\214", 0));
        pushButton_3->setText(QApplication::translate("MainWindow", "\330\253\330\250\330\252", 0));
        lcd->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("MainWindow", "\330\253\330\250\330\252 \330\263\331\201\330\247\330\261\330\264", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QApplication::translate("MainWindow", "\331\201\330\261\331\210\330\256\330\252\331\207 \330\264\330\257\331\207 \331\207\330\247", 0));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "\330\253\330\250\330\252 \330\264\332\251\330\247\333\214\330\252", 0));
        pushButton_4->setText(QApplication::translate("MainWindow", "\330\253\330\250\330\252", 0));
        label_18->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt; color:#b8032d;\">\330\253\330\250\330\252 \330\264\332\251\330\247\333\214\330\252</span></p></body></html>", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "\331\205\330\257\333\214\330\261\333\214\330\252", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "\330\252\330\272\333\214\333\214\330\261 \330\261\331\205\330\262", 0));
        label_14->setText(QApplication::translate("MainWindow", "\330\261\331\205\330\262 \330\254\330\257\333\214\330\257", 0));
        label_15->setText(QApplication::translate("MainWindow", "\330\252\332\251\330\261\330\247\330\261 \330\261\331\205\330\262", 0));
        label_10->setText(QApplication::translate("MainWindow", "\331\206\330\247\331\205 \332\251\330\247\330\261\330\250\330\261\333\214", 0));
        pushButton->setText(QApplication::translate("MainWindow", "\330\252\330\272\333\214\333\214\330\261", 0));
        label_19->setText(QApplication::translate("MainWindow", "\330\261\331\205\330\262 \331\202\330\250\331\204\333\214", 0));
        tabWidget->setTabText(tabWidget->indexOf(widget), QApplication::translate("MainWindow", "\330\252\331\206\330\270\333\214\331\205\330\247\330\252", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
