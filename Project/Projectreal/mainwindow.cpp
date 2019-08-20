#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlDatabase>
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->mainwid->setCurrentIndex(0);
    ui->pushButton->hide();
    ui->lblcurrent->hide();
    ui->lblcurrent_2->hide();
     database = QSqlDatabase::addDatabase("QSQLITE");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnsub1_clicked()
{
    ui->mainwid->setCurrentIndex(1);
    ui->lblsubname_2->setText("1103");
    ui->pushButton->show();
    ui->btnadmin->hide();
    sub = "1103";
    ui->btnchp8->hide();
}

void MainWindow::on_pushButton_clicked()
{
    ui->lblcurrent->hide();
    ui->lblcurrent_2->hide();
    ui->mainwid->setCurrentIndex(0);
    ui->pushButton->hide();
    ui->btnadmin->show();
    ui->txtpass->setText("");
    ui->txtusername->setText("");
    ui->btnb->setStyleSheet("background-color:rgb(0, 170, 127);border:3px solid white;border-radius:35;");
    ui->btnc->setStyleSheet("background-color:rgb(0, 170, 127);border:3px solid white;border-radius:35;");
    ui->btnd->setStyleSheet("background-color:rgb(0, 170, 127);border:3px solid white;border-radius:35;");
    ui->btna->setStyleSheet("background-color:rgb(0, 170, 127);border:3px solid white;border-radius:35;");
    ui->btnnxt -> setHidden(true);
    ui->btnans -> setHidden(true);
}

void MainWindow::on_btnchp1_clicked()
{
    ui->lblcurrent->show();
    ui->lblcurrent_2->show();
    num = 0;
    mark = 0;
    ui->lblchpno->setNum(1);
    ui->lblcurrent->setNum(num+1);
    ui->btnnxt -> setHidden(true);
    ui->btnans -> setHidden(true);
    ui->mainwid->setCurrentIndex(2);
    qint16 count = 0;
    QSqlQuery query;
    if (sub == "1103")
    {
        ui->lblsubname->setText("1103");
        database.setDatabaseName("D:/University of Information Technology/C++/Project/Database/BDP.db");
        database.open();

        query.exec("select * from  chapter1 order by random() limit 10");
    }
    while(query.next()){
        data[count].question = query.value(0).toString();
        data[count].dbans = query.value(1).toString();
        data[count].reason = query.value(2).toString();
        count++;
    }
    database.close();
    ui->lblquestion->setText(data[num].question);
}
void MainWindow::on_btna_clicked()
{
    data[num].usans = ui->btna->text();
    ui->btnans->show();
   ui->btna->setStyleSheet("background-color:white;color : rgb(0, 170, 127);border:3px solid white;border-radius:35;");
   ui->btnb->setStyleSheet("background-color:rgb(0, 170, 127);border:3px solid white;border-radius:35;");
   ui->btnc->setStyleSheet("background-color:rgb(0, 170, 127);border:3px solid white;border-radius:35;");
   ui->btnd->setStyleSheet("background-color:rgb(0, 170, 127);border:3px solid white;border-radius:35;");
}

void MainWindow::on_btnb_clicked()
{
    data[num].usans = ui->btnb->text();
    ui->btnans->show();
   ui->btnb->setStyleSheet("background-color:white;color : rgb(0, 170, 127);border:3px solid white;border-radius:35;");
   ui->btna->setStyleSheet("background-color:rgb(0, 170, 127);border:3px solid white;border-radius:35;");
   ui->btnc->setStyleSheet("background-color:rgb(0, 170, 127);border:3px solid white;border-radius:35;");
   ui->btnd->setStyleSheet("background-color:rgb(0, 170, 127);border:3px solid white;border-radius:35;");
}

void MainWindow::on_btnc_clicked()
{
    data[num].usans = ui->btnc->text();
    ui->btnans->show();
   ui->btnc->setStyleSheet("background-color:white;color : rgb(0, 170, 127);border:3px solid white;border-radius:35;");
   ui->btnb->setStyleSheet("background-color:rgb(0, 170, 127);border:3px solid white;border-radius:35;");
   ui->btna->setStyleSheet("background-color:rgb(0, 170, 127);border:3px solid white;border-radius:35;");
   ui->btnd->setStyleSheet("background-color:rgb(0, 170, 127);border:3px solid white;border-radius:35;");
}

void MainWindow::on_btnd_clicked()
{
    data[num].usans = ui->btnd->text();
    ui->btnans->show();
   ui->btnd->setStyleSheet("background-color:white;color : rgb(0, 170, 127);border:3px solid white;border-radius:35;");
   ui->btnb->setStyleSheet("background-color:rgb(0, 170, 127);border:3px solid white;border-radius:35;");
   ui->btnc->setStyleSheet("background-color:rgb(0, 170, 127);border:3px solid white;border-radius:35;");
   ui->btna->setStyleSheet("background-color:rgb(0, 170, 127);border:3px solid white;border-radius:35;");
}

void MainWindow::on_btnans_clicked()
{
    if(data[num].dbans == data[num].usans)
    {
        ui->lbloutput->setText("Correct!");
        mark++;
    }
    else {
        ui->lbloutput->setText("Incorrect!\nThe answer is " + data[num].dbans + ".\n" + data[num].reason);
    }
    ui->btna->setEnabled(false);
    ui->btnb->setEnabled(false);
    ui->btnc->setEnabled(false);
    ui->btnd->setEnabled(false);
    ui->btnnxt->show();
}

void MainWindow::on_btnnxt_clicked()
{
    ui->btna->setEnabled(true);//reset
    ui->btnb->setEnabled(true);
    ui->btnc->setEnabled(true);
    ui->btnd->setEnabled(true);
    ui->btna->setStyleSheet("background-color:rgb(0, 170, 127);border:3px solid white;border-radius:35;");
    ui->btnb->setStyleSheet("background-color:rgb(0, 170, 127);border:3px solid white;border-radius:35;");
    ui->btnc->setStyleSheet("background-color:rgb(0, 170, 127);border:3px solid white;border-radius:35;");
    ui->btnd->setStyleSheet("background-color:rgb(0, 170, 127);border:3px solid white;border-radius:35;");
    ui->lbloutput->setText("");
    ui->btnans->hide();
    ui->btnnxt->hide();
    num++;//next question
    ui->lblquestion->setText(data[num].question);
    ui->lblcurrent->setNum(num+1);
    if(num == 10)
    {
        ui->mainwid->setCurrentIndex(3);
        ui->lblmark->setNum(mark);
        ui->pushButton->setHidden(true);
    }
}

void MainWindow::on_btnchp2_clicked()
{
    num = 0;
    ui->lblchpno->setNum(2);
    ui->lblcurrent->setNum(num+1);
    ui->btnnxt -> setHidden(true);
    ui->mainwid->setCurrentIndex(2);
    qint16 count = 0;
    QSqlQuery query;
    if (sub == "1103")
    {
        ui->lblsubname->setText("1103");
        database.setDatabaseName("D:/University of Information Technology/C++/Project/Database/BDP.db");
        database.open();

        query.exec("select * from  chapter2 order by random() limit 10");
    }
    while(query.next()){
        data[count].question = query.value(0).toString();
        data[count].dbans = query.value(1).toString();
        data[count].reason = query.value(2).toString();
        count++;
    }
    database.close();
    ui->lblquestion->setText(data[num].question);
}
void MainWindow::on_pushButton_2_clicked()
{
    ui->mainwid->setCurrentIndex(0);
}

void MainWindow::on_btnlogin_clicked()
{
    int logcount = 0;
    QString username = ui->txtusername->text();
    QString password = ui->txtpass->text();
    while(username.endsWith(' ')){
        username.chop(1);
    }
    while(password.endsWith(' ')){
        password.chop(1);
    }
    database.setDatabaseName("D:/University of Information Technology/C++/Project/Database/Admins.db");
    database.open();
    QSqlQuery qry;
    qry.exec("select * from Admin where Username='"+username+"' and Password='"+password+"'");
    while(qry.next())
    {
        logcount++;
    }
    if(logcount ==1 )
    {
        ui->mainwid->setCurrentIndex(5);
    }
    if(logcount <1)
    {
        QMessageBox::warning(this,"Invalid!","Your username or password is not valid.");
    }
}

void MainWindow::on_btnadmin_clicked()
{
    ui->mainwid->setCurrentIndex(4);
    ui->btnadmin->hide();
    ui->pushButton->show();
}

void MainWindow::on_btnlogin_2_clicked()
{
    int sub = 1;
    int chp = 0;
    QString forqry = "";
    QString question = ui->txtquestion->toPlainText();
    QString answer = ui->comboans->currentText();
    QString reason = ui->txtreason->toPlainText();
    database = QSqlDatabase::addDatabase("QSQLITE");
    QSqlQuery query;
    if(ui->combosub->currentText()!= "Programming in c++")
    {
        sub = 2;
    }
    chp = ui->spinchap->value();
    switch (sub) {
    case 1: database.setDatabaseName("D:/University of Information Technology/C++/Project/Database/Subject1.db");
    }
    database.open();
    switch (chp) {
    case 1: forqry = "insert into chapter1 (question,answer,reason) values ('"+question+"','"+answer+"','"+reason+"')";
    }
    if(query.exec(forqry))
    {
        QMessageBox::information(this,"Success","The new question has been added.");
    }
}

void MainWindow::on_btnchp3_clicked()
{
    num = 0;
    ui->lblchpno->setNum(3);
    ui->lblcurrent->setNum(num+1);
    ui->btnnxt -> setHidden(true);
    ui->mainwid->setCurrentIndex(2);
    qint16 count = 0;
    QSqlQuery query;
    if (sub == "1103")
    {
        ui->lblsubname->setText("1103");
        database.setDatabaseName("D:/University of Information Technology/C++/Project/Database/BDP.db");
        database.open();
        query.exec("select * from  chapter3 order by random() limit 10");
    }
    while(query.next()){
        data[count].question = query.value(0).toString();
        data[count].dbans = query.value(1).toString();
        data[count].reason = query.value(2).toString();
        count++;
    }
    database.close();
    ui->lblquestion->setText(data[num].question);
}

void MainWindow::on_btnchp4_clicked()
{
    num = 0;
    ui->lblchpno->setNum(4);
    ui->lblcurrent->setNum(num+1);
    ui->btnnxt -> setHidden(true);
    ui->mainwid->setCurrentIndex(2);
    qint16 count = 0;
    QSqlQuery query;
    if (sub == "1103")
    {
        ui->lblsubname->setText("1103");
        database.setDatabaseName("D:/University of Information Technology/C++/Project/Database/BDP.db");
        database.open();
        query.exec("select * from  chapter4 order by random() limit 10");
    }
    while(query.next()){
        data[count].question = query.value(0).toString();
        data[count].dbans = query.value(1).toString();
        data[count].reason = query.value(2).toString();
        count++;
    }
    database.close();
    ui->lblquestion->setText(data[num].question);
}

void MainWindow::on_btnchp5_clicked()
{
    num = 0;
    ui->lblchpno->setNum(5);
    ui->lblcurrent->setNum(num+1);
    ui->btnnxt -> setHidden(true);
    ui->mainwid->setCurrentIndex(2);
    qint16 count = 0;
    QSqlQuery query;
    if (sub == "1103")
    {
        ui->lblsubname->setText("1103");
        database.setDatabaseName("D:/University of Information Technology/C++/Project/Database/BDP.db");
        database.open();
        query.exec("select * from  chapter5 order by random() limit 10");
    }
    while(query.next()){
        data[count].question = query.value(0).toString();
        data[count].dbans = query.value(1).toString();
        data[count].reason = query.value(2).toString();
        count++;
    }
    database.close();
    ui->lblquestion->setText(data[num].question);
}

void MainWindow::on_btnchp6_clicked()
{
    num = 0;
    ui->lblchpno->setNum(6);
    ui->lblcurrent->setNum(num+1);
    ui->btnnxt -> setHidden(true);
    ui->mainwid->setCurrentIndex(2);
    qint16 count = 0;
    QSqlQuery query;
    if (sub == "1103")
    {
        ui->lblsubname->setText("1103");
        database.setDatabaseName("D:/University of Information Technology/C++/Project/Database/BDP.db");
        database.open();
        query.exec("select * from  chapter6 order by random() limit 10");
    }
    while(query.next()){
        data[count].question = query.value(0).toString();
        data[count].dbans = query.value(1).toString();
        data[count].reason = query.value(2).toString();
        count++;
    }
    database.close();
    ui->lblquestion->setText(data[num].question);
}

void MainWindow::on_btnchp7_clicked()
{
    num = 0;
    ui->lblchpno->setNum(7);
    ui->lblcurrent->setNum(num+1);
    ui->btnnxt -> setHidden(true);
    ui->mainwid->setCurrentIndex(2);
    qint16 count = 0;
    QSqlQuery query;
    if (sub == "1103")
    {
        ui->lblsubname->setText("1103");
        database.setDatabaseName("D:/University of Information Technology/C++/Project/Database/BDP.db");
        database.open();
        query.exec("select * from  chapter7 order by random() limit 10");
    }
    while(query.next()){
        data[count].question = query.value(0).toString();
        data[count].dbans = query.value(1).toString();
        data[count].reason = query.value(2).toString();
        count++;
    }
    database.close();
    ui->lblquestion->setText(data[num].question);
}

void MainWindow::on_btnchp8_clicked()
{
    num = 0;
    ui->lblchpno->setNum(8);
    ui->lblcurrent->setNum(num+1);
    ui->btnnxt -> setHidden(true);
    ui->mainwid->setCurrentIndex(2);
    qint16 count = 0;
    QSqlQuery query;
    if (sub == "1103")
    {
        ui->lblsubname->setText("1103");
        database.setDatabaseName("D:/University of Information Technology/C++/Project/Database/BDP.db");
        database.open();
        query.exec("select * from  chapter8 order by random() limit 10");
    }
    while(query.next()){
        data[count].question = query.value(0).toString();
        data[count].dbans = query.value(1).toString();
        data[count].reason = query.value(2).toString();
        count++;
    }
    database.close();
    ui->lblquestion->setText(data[num].question);
}

void MainWindow::on_btnchp9_clicked()
{
    num = 0;
    ui->lblchpno->setNum(9);
    ui->lblcurrent->setNum(num+1);
    ui->btnnxt -> setHidden(true);
    ui->mainwid->setCurrentIndex(2);
    qint16 count = 0;
    QSqlQuery query;
    if (sub == "1103")
    {
        ui->lblsubname->setText("1103");
        database.setDatabaseName("D:/University of Information Technology/C++/Project/Database/BDP.db");
        database.open();
        query.exec("select * from  chapter9 order by random() limit 10");
    }
    while(query.next()){
        data[count].question = query.value(0).toString();
        data[count].dbans = query.value(1).toString();
        data[count].reason = query.value(2).toString();
        count++;
    }
    database.close();
    ui->lblquestion->setText(data[num].question);
}
