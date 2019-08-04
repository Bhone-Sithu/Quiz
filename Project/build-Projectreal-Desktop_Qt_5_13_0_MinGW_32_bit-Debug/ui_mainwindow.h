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
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
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
    QPushButton *btnchp1_4;
    QPushButton *btnchp1_5;
    QPushButton *btnchp1_6;
    QPushButton *btnchp1_7;
    QLabel *lblsubno_2;
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
    QLabel *lblcurrent;
    QLabel *lblcurrent_2;
    QLabel *lblchpno;
    QLabel *lblsubno;
    QWidget *markout;
    QLabel *lblcongrat;
    QLabel *label;
    QLabel *lblmark;
    QPushButton *pushButton_2;
    QLabel *title;
    QPushButton *pushButton;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1366, 768);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        mainwid = new QStackedWidget(centralWidget);
        mainwid->setObjectName(QString::fromUtf8("mainwid"));
        mainwid->setGeometry(QRect(30, 90, 1301, 581));
        mainwid->setCursor(QCursor(Qt::ArrowCursor));
        mainwid->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 127);\n"
"color: rgb(255, 255, 255);"));
        Homie = new QWidget();
        Homie->setObjectName(QString::fromUtf8("Homie"));
        lblhome = new QLabel(Homie);
        lblhome->setObjectName(QString::fromUtf8("lblhome"));
        lblhome->setGeometry(QRect(330, 0, 701, 121));
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
        btnsub2 = new QPushButton(Homie);
        btnsub2->setObjectName(QString::fromUtf8("btnsub2"));
        btnsub2->setEnabled(false);
        btnsub2->setGeometry(QRect(320, 380, 721, 131));
        btnsub2->setFont(font1);
        btnsub2->setCursor(QCursor(Qt::PointingHandCursor));
        mainwid->addWidget(Homie);
        chapter = new QWidget();
        chapter->setObjectName(QString::fromUtf8("chapter"));
        lblchap = new QLabel(chapter);
        lblchap->setObjectName(QString::fromUtf8("lblchap"));
        lblchap->setGeometry(QRect(300, 0, 701, 131));
        lblchap->setFont(font);
        lblchap->setAlignment(Qt::AlignCenter);
        btnchp1 = new QPushButton(chapter);
        btnchp1->setObjectName(QString::fromUtf8("btnchp1"));
        btnchp1->setEnabled(true);
        btnchp1->setGeometry(QRect(210, 160, 441, 61));
        QFont font2;
        font2.setPointSize(28);
        btnchp1->setFont(font2);
        btnchp1->setCursor(QCursor(Qt::PointingHandCursor));
        btnchp2 = new QPushButton(chapter);
        btnchp2->setObjectName(QString::fromUtf8("btnchp2"));
        btnchp2->setEnabled(true);
        btnchp2->setGeometry(QRect(211, 250, 441, 61));
        btnchp2->setFont(font2);
        btnchp2->setCursor(QCursor(Qt::PointingHandCursor));
        btnchp3 = new QPushButton(chapter);
        btnchp3->setObjectName(QString::fromUtf8("btnchp3"));
        btnchp3->setEnabled(false);
        btnchp3->setGeometry(QRect(211, 340, 441, 61));
        btnchp3->setFont(font2);
        btnchp3->setCursor(QCursor(Qt::PointingHandCursor));
        btnchp1_4 = new QPushButton(chapter);
        btnchp1_4->setObjectName(QString::fromUtf8("btnchp1_4"));
        btnchp1_4->setEnabled(false);
        btnchp1_4->setGeometry(QRect(211, 420, 441, 61));
        btnchp1_4->setFont(font2);
        btnchp1_4->setCursor(QCursor(Qt::PointingHandCursor));
        btnchp1_5 = new QPushButton(chapter);
        btnchp1_5->setObjectName(QString::fromUtf8("btnchp1_5"));
        btnchp1_5->setEnabled(false);
        btnchp1_5->setGeometry(QRect(810, 340, 441, 61));
        btnchp1_5->setFont(font2);
        btnchp1_5->setCursor(QCursor(Qt::PointingHandCursor));
        btnchp1_6 = new QPushButton(chapter);
        btnchp1_6->setObjectName(QString::fromUtf8("btnchp1_6"));
        btnchp1_6->setEnabled(false);
        btnchp1_6->setGeometry(QRect(810, 160, 441, 61));
        btnchp1_6->setFont(font2);
        btnchp1_6->setCursor(QCursor(Qt::PointingHandCursor));
        btnchp1_7 = new QPushButton(chapter);
        btnchp1_7->setObjectName(QString::fromUtf8("btnchp1_7"));
        btnchp1_7->setEnabled(false);
        btnchp1_7->setGeometry(QRect(810, 250, 441, 61));
        btnchp1_7->setFont(font2);
        btnchp1_7->setCursor(QCursor(Qt::PointingHandCursor));
        lblsubno_2 = new QLabel(chapter);
        lblsubno_2->setObjectName(QString::fromUtf8("lblsubno_2"));
        lblsubno_2->setGeometry(QRect(620, 50, 31, 41));
        lblsubno_2->setFont(font);
        mainwid->addWidget(chapter);
        Questions = new QWidget();
        Questions->setObjectName(QString::fromUtf8("Questions"));
        lblhome_2 = new QLabel(Questions);
        lblhome_2->setObjectName(QString::fromUtf8("lblhome_2"));
        lblhome_2->setGeometry(QRect(0, 0, 771, 71));
        QFont font3;
        font3.setPointSize(36);
        lblhome_2->setFont(font3);
        lblhome_2->setAlignment(Qt::AlignCenter);
        lblquestion = new QLabel(Questions);
        lblquestion->setObjectName(QString::fromUtf8("lblquestion"));
        lblquestion->setGeometry(QRect(6, 92, 781, 251));
        QFont font4;
        font4.setPointSize(14);
        lblquestion->setFont(font4);
        lblquestion->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        btna = new QPushButton(Questions);
        btna->setObjectName(QString::fromUtf8("btna"));
        btna->setGeometry(QRect(810, 90, 241, 71));
        btna->setFont(font3);
        btna->setCursor(QCursor(Qt::PointingHandCursor));
        btna->setStyleSheet(QString::fromUtf8("border:3px solid white;border-radius:35;"));
        btnb = new QPushButton(Questions);
        btnb->setObjectName(QString::fromUtf8("btnb"));
        btnb->setGeometry(QRect(1070, 92, 221, 71));
        btnb->setFont(font3);
        btnb->setCursor(QCursor(Qt::PointingHandCursor));
        btnb->setStyleSheet(QString::fromUtf8("border:3px solid white;border-radius:35;"));
        btnc = new QPushButton(Questions);
        btnc->setObjectName(QString::fromUtf8("btnc"));
        btnc->setGeometry(QRect(810, 180, 241, 71));
        btnc->setFont(font3);
        btnc->setCursor(QCursor(Qt::PointingHandCursor));
        btnc->setStyleSheet(QString::fromUtf8("border:3px solid white;\n"
"border-radius:35%;"));
        btnd = new QPushButton(Questions);
        btnd->setObjectName(QString::fromUtf8("btnd"));
        btnd->setGeometry(QRect(1070, 180, 221, 71));
        btnd->setFont(font3);
        btnd->setCursor(QCursor(Qt::PointingHandCursor));
        btnd->setStyleSheet(QString::fromUtf8("border:3px solid white;border-radius:35;"));
        btnans = new QPushButton(Questions);
        btnans->setObjectName(QString::fromUtf8("btnans"));
        btnans->setGeometry(QRect(810, 270, 481, 71));
        btnans->setFont(font3);
        btnans->setCursor(QCursor(Qt::PointingHandCursor));
        btnans->setStyleSheet(QString::fromUtf8("border:3px solid white;border-radius:35;"));
        lbloutput = new QLabel(Questions);
        lbloutput->setObjectName(QString::fromUtf8("lbloutput"));
        lbloutput->setGeometry(QRect(10, 360, 1311, 231));
        lbloutput->setFont(font4);
        lbloutput->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        btnnxt = new QPushButton(Questions);
        btnnxt->setObjectName(QString::fromUtf8("btnnxt"));
        btnnxt->setGeometry(QRect(810, 270, 481, 71));
        btnnxt->setFont(font3);
        btnnxt->setCursor(QCursor(Qt::PointingHandCursor));
        btnnxt->setStyleSheet(QString::fromUtf8("border:3px solid white;border-radius:35;"));
        lblcurrent = new QLabel(Questions);
        lblcurrent->setObjectName(QString::fromUtf8("lblcurrent"));
        lblcurrent->setGeometry(QRect(1070, 20, 101, 61));
        lblcurrent->setFont(font2);
        lblcurrent->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lblcurrent_2 = new QLabel(Questions);
        lblcurrent_2->setObjectName(QString::fromUtf8("lblcurrent_2"));
        lblcurrent_2->setGeometry(QRect(1180, 20, 101, 61));
        lblcurrent_2->setFont(font2);
        lblchpno = new QLabel(Questions);
        lblchpno->setObjectName(QString::fromUtf8("lblchpno"));
        lblchpno->setGeometry(QRect(560, 20, 31, 41));
        lblchpno->setFont(font3);
        lblsubno = new QLabel(Questions);
        lblsubno->setObjectName(QString::fromUtf8("lblsubno"));
        lblsubno->setGeometry(QRect(330, 18, 31, 41));
        lblsubno->setFont(font3);
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
        title = new QLabel(centralWidget);
        title->setObjectName(QString::fromUtf8("title"));
        title->setGeometry(QRect(20, 10, 241, 61));
        QFont font6;
        font6.setPointSize(20);
        title->setFont(font6);
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(1060, 20, 281, 51));
        QFont font7;
        font7.setPointSize(24);
        pushButton->setFont(font7);
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 127);\n"
"color: rgb(255, 255, 255);\n"
"border-radius: 25px;"));
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
        lblhome->setText(QCoreApplication::translate("MainWindow", "The Homie", nullptr));
        btnsub1->setText(QCoreApplication::translate("MainWindow", "Subject 1", nullptr));
        btnsub2->setText(QCoreApplication::translate("MainWindow", "Subject 2", nullptr));
        lblchap->setText(QCoreApplication::translate("MainWindow", "Subject-   Chapters", nullptr));
        btnchp1->setText(QCoreApplication::translate("MainWindow", "Chapter-1", nullptr));
        btnchp2->setText(QCoreApplication::translate("MainWindow", "Chapter-2", nullptr));
        btnchp3->setText(QCoreApplication::translate("MainWindow", "Chapter-3", nullptr));
        btnchp1_4->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        btnchp1_5->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        btnchp1_6->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        btnchp1_7->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        lblsubno_2->setText(QString());
        lblhome_2->setText(QCoreApplication::translate("MainWindow", "Subject-   Chapter(   )", nullptr));
        lblquestion->setText(QString());
        btna->setText(QCoreApplication::translate("MainWindow", "a", nullptr));
        btnb->setText(QCoreApplication::translate("MainWindow", "b", nullptr));
        btnc->setText(QCoreApplication::translate("MainWindow", "c", nullptr));
        btnd->setText(QCoreApplication::translate("MainWindow", "d", nullptr));
        btnans->setText(QCoreApplication::translate("MainWindow", "Answer", nullptr));
        lbloutput->setText(QString());
        btnnxt->setText(QCoreApplication::translate("MainWindow", "Next", nullptr));
        lblcurrent->setText(QString());
        lblcurrent_2->setText(QCoreApplication::translate("MainWindow", "/10", nullptr));
        lblchpno->setText(QString());
        lblsubno->setText(QString());
        lblcongrat->setText(QCoreApplication::translate("MainWindow", "CONGRATULATION!", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "You got    marks out of 10.", nullptr));
        lblmark->setText(QString());
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Go to Homie", nullptr));
        title->setText(QCoreApplication::translate("MainWindow", "Logo and title", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Go to Homie", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
