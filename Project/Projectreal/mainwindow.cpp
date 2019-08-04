#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlDatabase>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->mainwid->setCurrentIndex(0);
    ui->btnans->hide();
     database = QSqlDatabase::addDatabase("QSQLITE");

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnsub1_clicked()
{
    ui->mainwid->setCurrentIndex(1);
    ui->lblsubno_2->setNum(1);
}

void MainWindow::on_pushButton_clicked()
{
    ui->mainwid->setCurrentIndex(0);

}

void MainWindow::on_btnchp1_clicked()
{
    ui->lblsubno->setNum(1);
    num = 0;
    ui->lblchpno->setNum(1);
    ui->lblcurrent->setNum(num+1);
    ui->btnnxt -> setHidden(true);
    ui->mainwid->setCurrentIndex(2);
    qint16 count = 0;
    database.setDatabaseName("D:/University of Information Technology/C++/Project/Database/Subject1.db");
    database.open();
    QSqlQuery query;
    query.exec("select * from chapter1 order by random() limit 10");
    while(query.next()){
        data[count].question = query.value(1).toString();
        data[count].dbans = query.value(2).toString();
        data[count].reason = query.value(3).toString();
        count++;
    }
    database.close();
    ui->lblquestion->setText(data[num].question);
}

void MainWindow::on_btna_clicked()
{
    data[num].usans = ui->btna->text();
    ui->btnans->show();
   ui->btna->setStyleSheet("background-color:white;color : rgb(0, 170, 127)");
   ui->btnb->setStyleSheet("background-color:rgb(0, 170, 127);");
   ui->btnc->setStyleSheet("background-color:rgb(0, 170, 127);");
   ui->btnd->setStyleSheet("background-color:rgb(0, 170, 127);");
}

void MainWindow::on_btnb_clicked()
{
    data[num].usans = ui->btnb->text();
    ui->btnans->show();
   ui->btnb->setStyleSheet("background-color:white;color : rgb(0, 170, 127)");
   ui->btna->setStyleSheet("background-color:rgb(0, 170, 127);");
   ui->btnc->setStyleSheet("background-color:rgb(0, 170, 127);");
   ui->btnd->setStyleSheet("background-color:rgb(0, 170, 127);");
}

void MainWindow::on_btnc_clicked()
{
    data[num].usans = ui->btnc->text();
    ui->btnans->show();
   ui->btnc->setStyleSheet("background-color:white;color : rgb(0, 170, 127)");
   ui->btnb->setStyleSheet("background-color:rgb(0, 170, 127);");
   ui->btna->setStyleSheet("background-color:rgb(0, 170, 127);");
   ui->btnd->setStyleSheet("background-color:rgb(0, 170, 127);");
}

void MainWindow::on_btnd_clicked()
{
    data[num].usans = ui->btnd->text();
    ui->btnans->show();
   ui->btnd->setStyleSheet("background-color:white;color : rgb(0, 170, 127)");
   ui->btnb->setStyleSheet("background-color:rgb(0, 170, 127);");
   ui->btnc->setStyleSheet("background-color:rgb(0, 170, 127);");
   ui->btna->setStyleSheet("background-color:rgb(0, 170, 127);");
}

void MainWindow::on_btnans_clicked()
{
    if(data[num].dbans == data[num].usans)
    {
        ui->lbloutput->setText("Correct!");
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
    ui->btna->setStyleSheet("background-color:background-color:rgb(0, 170, 127);;");
    ui->btnb->setStyleSheet("background-color:background-color:rgb(0, 170, 127);;");
    ui->btnc->setStyleSheet("background-color:background-color:rgb(0, 170, 127);;");
    ui->btnd->setStyleSheet("background-color:background-color:rgb(0, 170, 127);;");
    ui->lbloutput->setText("");
    ui->btnans->hide();
    ui->btnnxt->hide();
    num++;//next question
    ui->lblquestion->setText(data[num].question);
    ui->lblcurrent->setNum(num+1);
}

void MainWindow::on_btnchp2_clicked()
{
    num = 0;
    ui->lblchpno->setNum(2);
    ui->lblcurrent->setNum(num+1);
    ui->btnnxt -> setHidden(true);
    ui->mainwid->setCurrentIndex(2);
    qint16 count = 0;
    database.setDatabaseName("D:/University of Information Technology/C++/Project/Database/Subject1.db");
    database.open();
    QSqlQuery query;
    query.exec("select * from chapter1 order by random() limit 10");
    while(query.next()){
        data[count].question = query.value(1).toString();
        data[count].dbans = query.value(2).toString();
        data[count].reason = query.value(3).toString();
        count++;
    }
    database.close();
    ui->lblquestion->setText(data[num].question);
}
