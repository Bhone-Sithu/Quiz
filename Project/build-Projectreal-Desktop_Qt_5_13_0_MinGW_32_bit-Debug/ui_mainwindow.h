/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QStackedWidget *mainwid;
    QWidget *Homie;
    QLabel *lblhome;
    QPushButton *btnsub1;
    QPushButton *btnsub2;
    QWidget *chapter;
    QLabel *lblchap;
    QPushButton *btnchp1;
    QPushButton *btnchp2;
    QPushButton *btnchp3;
    QPushButton *btnchp4;
    QPushButton *btnchp7;
    QPushButton *btnchp5;
    QPushButton *btnchp6;
    QLabel *lblsubname_2;
    QPushButton *btnchp8;
    QPushButton *btnchp9;
    QPushButton *btnchp10;
    QWidget *Questions;
    QLabel *lblhome_2;
    QLabel *lblquestion;
    QPushButton *btna;
    QPushButton *btnb;
    QPushButton *btnc;
    QPushButton *btnd;
    QPushButton *btnans;
    QLabel *lbloutput;
    QPushButton *btnnxt;
    QLabel *lblsubname;
    QLabel *lblchpno;
    QWidget *markout;
    QLabel *lblcongrat;
    QLabel *label;
    QLabel *lblmark;
    QPushButton *pushButton_2;
    QWidget *adminlogin;
    QLabel *lblchap_2;
    QLineEdit *txtusername;
    QLabel *lblchap_3;
    QLineEdit *txtpass;
    QLabel *lblchap_4;
    QPushButton *btnlogin;
    QWidget *Newquestion;
    QLabel *label_3;
    QTextEdit *txtquestion;
    QSpinBox *spinchap;
    QLabel *label_4;
    QComboBox *comboans;
    QLabel *label_5;
    QLabel *label_6;
    QComboBox *combosub;
    QLabel *label_7;
    QLabel *lblchap_5;
    QPushButton *btnlogin_2;
    QTextEdit *txtreason;
    QLabel *title;
    QPushButton *pushButton;
    QPushButton *btnadmin;
    QLabel *lblcurrent_2;
    QLabel *lblcurrent;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1366, 750);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        mainwid = new QStackedWidget(centralWidget);
        mainwid->setObjectName(QString::fromUtf8("mainwid"));
        mainwid->setGeometry(QRect(30, 100, 1301, 591));
        mainwid->setCursor(QCursor(Qt::ArrowCursor));
        mainwid->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 127);\n"
"color: rgb(255, 255, 255);"));
        Homie = new QWidget();
        Homie->setObjectName(QString::fromUtf8("Homie"));
        lblhome = new QLabel(Homie);
        lblhome->setObjectName(QString::fromUtf8("lblhome"));
        lblhome->setGeometry(QRect(270, 0, 811, 121));
        QFont font;
        font.setPointSize(48);
        lblhome->setFont(font);
        lblhome->setAlignment(Qt::AlignCenter);
        btnsub1 = new QPushButton(Homie);
        btnsub1->setObjectName(QString::fromUtf8("btnsub1"));
        btnsub1->setGeometry(QRect(320, 170, 721, 131));
        QFont font1;
        font1.setPointSize(36);
        font1.setBold(true);
        font1.setWeight(75);
        btnsub1->setFont(font1);
        btnsub1->setCursor(QCursor(Qt::PointingHandCursor));
        btnsub1->setStyleSheet(QString::fromUtf8("color: rgb(0, 170, 127);background-color:white;border-radius:65;"));
        btnsub2 = new QPushButton(Homie);
        btnsub2->setObjectName(QString::fromUtf8("btnsub2"));
        btnsub2->setEnabled(true);
        btnsub2->setGeometry(QRect(320, 380, 721, 131));
        btnsub2->setFont(font1);
        btnsub2->setCursor(QCursor(Qt::PointingHandCursor));
        btnsub2->setStyleSheet(QString::fromUtf8("color: rgb(0, 170, 127);background-color:white;border-radius:65;"));
        mainwid->addWidget(Homie);
        chapter = new QWidget();
        chapter->setObjectName(QString::fromUtf8("chapter"));
        lblchap = new QLabel(chapter);
        lblchap->setObjectName(QString::fromUtf8("lblchap"));
        lblchap->setGeometry(QRect(540, 100, 251, 91));
        lblchap->setFont(font);
        lblchap->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        btnchp1 = new QPushButton(chapter);
        btnchp1->setObjectName(QString::fromUtf8("btnchp1"));
        btnchp1->setEnabled(true);
        btnchp1->setGeometry(QRect(90, 150, 441, 55));
        QFont font2;
        font2.setPointSize(28);
        btnchp1->setFont(font2);
        btnchp1->setCursor(QCursor(Qt::PointingHandCursor));
        btnchp1->setStyleSheet(QString::fromUtf8("color: rgb(0, 170, 127);background-color:white;border-radius:25;"));
        btnchp2 = new QPushButton(chapter);
        btnchp2->setObjectName(QString::fromUtf8("btnchp2"));
        btnchp2->setEnabled(true);
        btnchp2->setGeometry(QRect(90, 240, 441, 55));
        btnchp2->setFont(font2);
        btnchp2->setCursor(QCursor(Qt::PointingHandCursor));
        btnchp2->setStyleSheet(QString::fromUtf8("color: rgb(0, 170, 127);background-color:white;border-radius:25;"));
        btnchp3 = new QPushButton(chapter);
        btnchp3->setObjectName(QString::fromUtf8("btnchp3"));
        btnchp3->setEnabled(true);
        btnchp3->setGeometry(QRect(90, 330, 441, 55));
        btnchp3->setFont(font2);
        btnchp3->setCursor(QCursor(Qt::PointingHandCursor));
        btnchp3->setStyleSheet(QString::fromUtf8("color: rgb(0, 170, 127);background-color:white;border-radius:25;"));
        btnchp4 = new QPushButton(chapter);
        btnchp4->setObjectName(QString::fromUtf8("btnchp4"));
        btnchp4->setEnabled(true);
        btnchp4->setGeometry(QRect(90, 420, 441, 55));
        btnchp4->setFont(font2);
        btnchp4->setCursor(QCursor(Qt::PointingHandCursor));
        btnchp4->setStyleSheet(QString::fromUtf8("color: rgb(0, 170, 127);background-color:white;border-radius:25;"));
        btnchp7 = new QPushButton(chapter);
        btnchp7->setObjectName(QString::fromUtf8("btnchp7"));
        btnchp7->setEnabled(true);
        btnchp7->setGeometry(QRect(800, 240, 441, 55));
        btnchp7->setFont(font2);
        btnchp7->setCursor(QCursor(Qt::PointingHandCursor));
        btnchp7->setStyleSheet(QString::fromUtf8("color: rgb(0, 170, 127);background-color:white;border-radius:25;"));
        btnchp5 = new QPushButton(chapter);
        btnchp5->setObjectName(QString::fromUtf8("btnchp5"));
        btnchp5->setEnabled(true);
        btnchp5->setGeometry(QRect(90, 510, 441, 55));
        btnchp5->setFont(font2);
        btnchp5->setCursor(QCursor(Qt::PointingHandCursor));
        btnchp5->setStyleSheet(QString::fromUtf8("color: rgb(0, 170, 127);background-color:white;border-radius:25;"));
        btnchp6 = new QPushButton(chapter);
        btnchp6->setObjectName(QString::fromUtf8("btnchp6"));
        btnchp6->setEnabled(true);
        btnchp6->setGeometry(QRect(800, 150, 441, 55));
        btnchp6->setFont(font2);
        btnchp6->setCursor(QCursor(Qt::PointingHandCursor));
        btnchp6->setStyleSheet(QString::fromUtf8("color: rgb(0, 170, 127);background-color:white;border-radius:25;"));
        lblsubname_2 = new QLabel(chapter);
        lblsubname_2->setObjectName(QString::fromUtf8("lblsubname_2"));
        lblsubname_2->setGeometry(QRect(20, 0, 1231, 91));
        lblsubname_2->setFont(font);
        lblsubname_2->setAlignment(Qt::AlignCenter);
        btnchp8 = new QPushButton(chapter);
        btnchp8->setObjectName(QString::fromUtf8("btnchp8"));
        btnchp8->setEnabled(true);
        btnchp8->setGeometry(QRect(800, 330, 441, 55));
        btnchp8->setFont(font2);
        btnchp8->setCursor(QCursor(Qt::PointingHandCursor));
        btnchp8->setStyleSheet(QString::fromUtf8("color: rgb(0, 170, 127);background-color:white;border-radius:25;"));
        btnchp9 = new QPushButton(chapter);
        btnchp9->setObjectName(QString::fromUtf8("btnchp9"));
        btnchp9->setEnabled(true);
        btnchp9->setGeometry(QRect(800, 420, 441, 55));
        btnchp9->setFont(font2);
        btnchp9->setCursor(QCursor(Qt::PointingHandCursor));
        btnchp9->setStyleSheet(QString::fromUtf8("color: rgb(0, 170, 127);background-color:white;border-radius:25;"));
        btnchp10 = new QPushButton(chapter);
        btnchp10->setObjectName(QString::fromUtf8("btnchp10"));
        btnchp10->setEnabled(true);
        btnchp10->setGeometry(QRect(800, 510, 441, 55));
        btnchp10->setFont(font2);
        btnchp10->setCursor(QCursor(Qt::PointingHandCursor));
        btnchp10->setStyleSheet(QString::fromUtf8("color: rgb(0, 170, 127);background-color:white;border-radius:25;"));
        mainwid->addWidget(chapter);
        Questions = new QWidget();
        Questions->setObjectName(QString::fromUtf8("Questions"));
        lblhome_2 = new QLabel(Questions);
        lblhome_2->setObjectName(QString::fromUtf8("lblhome_2"));
        lblhome_2->setGeometry(QRect(340, 80, 241, 51));
        lblhome_2->setFont(font2);
        lblhome_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lblquestion = new QLabel(Questions);
        lblquestion->setObjectName(QString::fromUtf8("lblquestion"));
        lblquestion->setGeometry(QRect(16, 132, 771, 431));
        QFont font3;
        font3.setPointSize(14);
        lblquestion->setFont(font3);
        lblquestion->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 170, 127);"));
        lblquestion->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        lblquestion->setWordWrap(true);
        btna = new QPushButton(Questions);
        btna->setObjectName(QString::fromUtf8("btna"));
        btna->setGeometry(QRect(800, 10, 241, 71));
        QFont font4;
        font4.setPointSize(36);
        btna->setFont(font4);
        btna->setCursor(QCursor(Qt::PointingHandCursor));
        btna->setStyleSheet(QString::fromUtf8("border:3px solid white;border-radius:35;"));
        btnb = new QPushButton(Questions);
        btnb->setObjectName(QString::fromUtf8("btnb"));
        btnb->setGeometry(QRect(1060, 10, 221, 71));
        btnb->setFont(font4);
        btnb->setCursor(QCursor(Qt::PointingHandCursor));
        btnb->setStyleSheet(QString::fromUtf8("border:3px solid white;border-radius:35;"));
        btnc = new QPushButton(Questions);
        btnc->setObjectName(QString::fromUtf8("btnc"));
        btnc->setGeometry(QRect(800, 100, 241, 71));
        btnc->setFont(font4);
        btnc->setCursor(QCursor(Qt::PointingHandCursor));
        btnc->setStyleSheet(QString::fromUtf8("border:3px solid white;\n"
"border-radius:35%;"));
        btnd = new QPushButton(Questions);
        btnd->setObjectName(QString::fromUtf8("btnd"));
        btnd->setGeometry(QRect(1060, 100, 221, 71));
        btnd->setFont(font4);
        btnd->setCursor(QCursor(Qt::PointingHandCursor));
        btnd->setStyleSheet(QString::fromUtf8("border:3px solid white;border-radius:35;"));
        btnans = new QPushButton(Questions);
        btnans->setObjectName(QString::fromUtf8("btnans"));
        btnans->setGeometry(QRect(800, 190, 481, 71));
        btnans->setFont(font4);
        btnans->setCursor(QCursor(Qt::PointingHandCursor));
        btnans->setStyleSheet(QString::fromUtf8("border:3px solid white;border-radius:35;"));
        lbloutput = new QLabel(Questions);
        lbloutput->setObjectName(QString::fromUtf8("lbloutput"));
        lbloutput->setGeometry(QRect(810, 280, 471, 281));
        lbloutput->setFont(font3);
        lbloutput->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 170, 127);"));
        lbloutput->setLineWidth(8);
        lbloutput->setTextFormat(Qt::PlainText);
        lbloutput->setScaledContents(false);
        lbloutput->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        lbloutput->setWordWrap(true);
        btnnxt = new QPushButton(Questions);
        btnnxt->setObjectName(QString::fromUtf8("btnnxt"));
        btnnxt->setGeometry(QRect(800, 190, 481, 71));
        btnnxt->setFont(font4);
        btnnxt->setCursor(QCursor(Qt::PointingHandCursor));
        btnnxt->setStyleSheet(QString::fromUtf8("border:3px solid white;border-radius:35;"));
        lblsubname = new QLabel(Questions);
        lblsubname->setObjectName(QString::fromUtf8("lblsubname"));
        lblsubname->setGeometry(QRect(20, 0, 761, 71));
        lblsubname->setFont(font4);
        lblsubname->setAlignment(Qt::AlignCenter);
        lblchpno = new QLabel(Questions);
        lblchpno->setObjectName(QString::fromUtf8("lblchpno"));
        lblchpno->setGeometry(QRect(480, 90, 41, 41));
        lblchpno->setFont(font2);
        lblchpno->setAlignment(Qt::AlignCenter);
        mainwid->addWidget(Questions);
        markout = new QWidget();
        markout->setObjectName(QString::fromUtf8("markout"));
        lblcongrat = new QLabel(markout);
        lblcongrat->setObjectName(QString::fromUtf8("lblcongrat"));
        lblcongrat->setGeometry(QRect(230, 0, 861, 121));
        QFont font5;
        font5.setPointSize(72);
        lblcongrat->setFont(font5);
        lblcongrat->setAlignment(Qt::AlignCenter);
        label = new QLabel(markout);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 230, 1221, 131));
        label->setFont(font5);
        label->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        lblmark = new QLabel(markout);
        lblmark->setObjectName(QString::fromUtf8("lblmark"));
        lblmark->setGeometry(QRect(440, 250, 61, 81));
        lblmark->setFont(font5);
        pushButton_2 = new QPushButton(markout);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(330, 420, 631, 111));
        pushButton_2->setFont(font);
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2->setStyleSheet(QString::fromUtf8("border: 5px solid rgb(0, 170, 127);\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 170, 127);\n"
"border-radius: 50px;"));
        mainwid->addWidget(markout);
        adminlogin = new QWidget();
        adminlogin->setObjectName(QString::fromUtf8("adminlogin"));
        lblchap_2 = new QLabel(adminlogin);
        lblchap_2->setObjectName(QString::fromUtf8("lblchap_2"));
        lblchap_2->setGeometry(QRect(400, 0, 461, 91));
        lblchap_2->setFont(font);
        lblchap_2->setAlignment(Qt::AlignCenter);
        txtusername = new QLineEdit(adminlogin);
        txtusername->setObjectName(QString::fromUtf8("txtusername"));
        txtusername->setGeometry(QRect(650, 180, 321, 51));
        txtusername->setFont(font2);
        txtusername->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 170, 127);"));
        lblchap_3 = new QLabel(adminlogin);
        lblchap_3->setObjectName(QString::fromUtf8("lblchap_3"));
        lblchap_3->setGeometry(QRect(310, 170, 321, 61));
        lblchap_3->setFont(font);
        lblchap_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        txtpass = new QLineEdit(adminlogin);
        txtpass->setObjectName(QString::fromUtf8("txtpass"));
        txtpass->setGeometry(QRect(650, 320, 321, 51));
        txtpass->setFont(font2);
        txtpass->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 170, 127);"));
        txtpass->setEchoMode(QLineEdit::Password);
        lblchap_4 = new QLabel(adminlogin);
        lblchap_4->setObjectName(QString::fromUtf8("lblchap_4"));
        lblchap_4->setGeometry(QRect(310, 310, 321, 61));
        lblchap_4->setFont(font);
        lblchap_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        btnlogin = new QPushButton(adminlogin);
        btnlogin->setObjectName(QString::fromUtf8("btnlogin"));
        btnlogin->setGeometry(QRect(410, 440, 461, 91));
        btnlogin->setFont(font);
        btnlogin->setCursor(QCursor(Qt::PointingHandCursor));
        btnlogin->setStyleSheet(QString::fromUtf8("border: 5px solid rgb(0, 170, 127);\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 170, 127);\n"
"border-radius: 45px;"));
        mainwid->addWidget(adminlogin);
        Newquestion = new QWidget();
        Newquestion->setObjectName(QString::fromUtf8("Newquestion"));
        label_3 = new QLabel(Newquestion);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(680, 159, 151, 51));
        QFont font6;
        font6.setPointSize(26);
        label_3->setFont(font6);
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        txtquestion = new QTextEdit(Newquestion);
        txtquestion->setObjectName(QString::fromUtf8("txtquestion"));
        txtquestion->setGeometry(QRect(260, 300, 351, 161));
        QFont font7;
        font7.setPointSize(20);
        txtquestion->setFont(font7);
        txtquestion->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 170, 127);"));
        spinchap = new QSpinBox(Newquestion);
        spinchap->setObjectName(QString::fromUtf8("spinchap"));
        spinchap->setGeometry(QRect(850, 160, 101, 51));
        spinchap->setFont(font6);
        spinchap->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 170, 127);"));
        spinchap->setMinimum(1);
        spinchap->setMaximum(10);
        label_4 = new QLabel(Newquestion);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(100, 159, 141, 51));
        label_4->setFont(font6);
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        comboans = new QComboBox(Newquestion);
        comboans->addItem(QString());
        comboans->addItem(QString());
        comboans->addItem(QString());
        comboans->addItem(QString());
        comboans->setObjectName(QString::fromUtf8("comboans"));
        comboans->setGeometry(QRect(790, 420, 51, 41));
        QFont font8;
        font8.setPointSize(24);
        comboans->setFont(font8);
        comboans->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 170, 127);"));
        label_5 = new QLabel(Newquestion);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(690, 310, 141, 31));
        label_5->setFont(font6);
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_6 = new QLabel(Newquestion);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(630, 420, 141, 41));
        label_6->setFont(font6);
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        combosub = new QComboBox(Newquestion);
        combosub->addItem(QString());
        combosub->addItem(QString());
        combosub->setObjectName(QString::fromUtf8("combosub"));
        combosub->setGeometry(QRect(260, 159, 351, 51));
        combosub->setFont(font7);
        combosub->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 170, 127);"));
        label_7 = new QLabel(Newquestion);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(80, 300, 161, 51));
        label_7->setFont(font6);
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lblchap_5 = new QLabel(Newquestion);
        lblchap_5->setObjectName(QString::fromUtf8("lblchap_5"));
        lblchap_5->setGeometry(QRect(460, 0, 461, 91));
        lblchap_5->setFont(font);
        lblchap_5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        btnlogin_2 = new QPushButton(Newquestion);
        btnlogin_2->setObjectName(QString::fromUtf8("btnlogin_2"));
        btnlogin_2->setGeometry(QRect(550, 500, 241, 61));
        btnlogin_2->setFont(font4);
        btnlogin_2->setCursor(QCursor(Qt::PointingHandCursor));
        btnlogin_2->setStyleSheet(QString::fromUtf8("border: 5px solid rgb(0, 170, 127);\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 170, 127);\n"
"border-radius: 30px;"));
        txtreason = new QTextEdit(Newquestion);
        txtreason->setObjectName(QString::fromUtf8("txtreason"));
        txtreason->setGeometry(QRect(860, 300, 411, 161));
        txtreason->setFont(font7);
        txtreason->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 170, 127);"));
        mainwid->addWidget(Newquestion);
        title = new QLabel(centralWidget);
        title->setObjectName(QString::fromUtf8("title"));
        title->setGeometry(QRect(40, 10, 321, 81));
        title->setFont(font);
        title->setStyleSheet(QString::fromUtf8("color: rgb(0, 170, 127);"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(1060, 20, 281, 61));
        pushButton->setFont(font8);
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 127);\n"
"color: rgb(255, 255, 255);\n"
"border-radius: 30px;"));
        btnadmin = new QPushButton(centralWidget);
        btnadmin->setObjectName(QString::fromUtf8("btnadmin"));
        btnadmin->setGeometry(QRect(1060, 20, 281, 61));
        btnadmin->setFont(font8);
        btnadmin->setCursor(QCursor(Qt::PointingHandCursor));
        btnadmin->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 127);\n"
"color: rgb(255, 255, 255);\n"
"border-radius: 30px;"));
        lblcurrent_2 = new QLabel(centralWidget);
        lblcurrent_2->setObjectName(QString::fromUtf8("lblcurrent_2"));
        lblcurrent_2->setGeometry(QRect(820, 20, 231, 61));
        lblcurrent_2->setFont(font2);
        lblcurrent_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 127);\n"
"color: rgb(255, 255, 255);\n"
"border-radius: 30px;"));
        lblcurrent_2->setAlignment(Qt::AlignCenter);
        lblcurrent = new QLabel(centralWidget);
        lblcurrent->setObjectName(QString::fromUtf8("lblcurrent"));
        lblcurrent->setGeometry(QRect(850, 30, 51, 41));
        lblcurrent->setFont(font2);
        lblcurrent->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 127);\n"
"color: rgb(255, 255, 255);\n"
"border-radius: 30px;"));
        lblcurrent->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        mainwid->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        lblhome->setText(QCoreApplication::translate("MainWindow", "Subjects", nullptr));
        btnsub1->setText(QCoreApplication::translate("MainWindow", "Basic data processing", nullptr));
        btnsub2->setText(QCoreApplication::translate("MainWindow", "Computer Fundamentals", nullptr));
        lblchap->setText(QCoreApplication::translate("MainWindow", "Chapters", nullptr));
        btnchp1->setText(QCoreApplication::translate("MainWindow", "Chapter-1", nullptr));
        btnchp2->setText(QCoreApplication::translate("MainWindow", "Chapter-2", nullptr));
        btnchp3->setText(QCoreApplication::translate("MainWindow", "Chapter-3", nullptr));
        btnchp4->setText(QCoreApplication::translate("MainWindow", "Chapter-4", nullptr));
        btnchp7->setText(QCoreApplication::translate("MainWindow", "Chapter-7", nullptr));
        btnchp5->setText(QCoreApplication::translate("MainWindow", "Chapter-5", nullptr));
        btnchp6->setText(QCoreApplication::translate("MainWindow", "Chapter-6", nullptr));
        lblsubname_2->setText(QString());
        btnchp8->setText(QCoreApplication::translate("MainWindow", "Chapter-8", nullptr));
        btnchp9->setText(QCoreApplication::translate("MainWindow", "Chapter-9", nullptr));
        btnchp10->setText(QCoreApplication::translate("MainWindow", "Chapter-10", nullptr));
        lblhome_2->setText(QCoreApplication::translate("MainWindow", "Chapter(    )", nullptr));
        lblquestion->setText(QString());
        btna->setText(QCoreApplication::translate("MainWindow", "a", nullptr));
        btnb->setText(QCoreApplication::translate("MainWindow", "b", nullptr));
        btnc->setText(QCoreApplication::translate("MainWindow", "c", nullptr));
        btnd->setText(QCoreApplication::translate("MainWindow", "d", nullptr));
        btnans->setText(QCoreApplication::translate("MainWindow", "Answer", nullptr));
        lbloutput->setText(QString());
        btnnxt->setText(QCoreApplication::translate("MainWindow", "Next", nullptr));
        lblsubname->setText(QString());
        lblchpno->setText(QString());
        lblcongrat->setText(QCoreApplication::translate("MainWindow", "CONGRATULATION!", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "You got    marks out of 10.", nullptr));
        lblmark->setText(QString());
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Go to home", nullptr));
        lblchap_2->setText(QCoreApplication::translate("MainWindow", "Admin log in", nullptr));
        txtusername->setPlaceholderText(QCoreApplication::translate("MainWindow", "Username", nullptr));
        lblchap_3->setText(QCoreApplication::translate("MainWindow", "Username :", nullptr));
        txtpass->setPlaceholderText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        lblchap_4->setText(QCoreApplication::translate("MainWindow", "Password  :", nullptr));
        btnlogin->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Chapter :", nullptr));
        txtquestion->setPlaceholderText(QCoreApplication::translate("MainWindow", "New Question....", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Subject :", nullptr));
        comboans->setItemText(0, QCoreApplication::translate("MainWindow", "a", nullptr));
        comboans->setItemText(1, QCoreApplication::translate("MainWindow", "b", nullptr));
        comboans->setItemText(2, QCoreApplication::translate("MainWindow", "c", nullptr));
        comboans->setItemText(3, QCoreApplication::translate("MainWindow", "d", nullptr));

        label_5->setText(QCoreApplication::translate("MainWindow", "Reason :", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Answer :", nullptr));
        combosub->setItemText(0, QCoreApplication::translate("MainWindow", "Programming in c++", nullptr));
        combosub->setItemText(1, QCoreApplication::translate("MainWindow", "Computer Fundamental", nullptr));

        label_7->setText(QCoreApplication::translate("MainWindow", "Question :", nullptr));
        lblchap_5->setText(QCoreApplication::translate("MainWindow", "Adding Question", nullptr));
        btnlogin_2->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        txtreason->setPlaceholderText(QCoreApplication::translate("MainWindow", "Reason...", nullptr));
        title->setText(QCoreApplication::translate("MainWindow", "UIT-Quizzy", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Go to Home", nullptr));
        btnadmin->setText(QCoreApplication::translate("MainWindow", "Admin", nullptr));
        lblcurrent_2->setText(QCoreApplication::translate("MainWindow", "/10", nullptr));
        lblcurrent->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
