#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    QSqlDatabase database;
    QString locate;
    qint16 num = 0;
    qint16 mark;
    QString sub;
    class d{
    public: QString dbans;
        QString usans;
        QString reason;
        QString question;
            d(){
            dbans = "";
            usans = "";
            reason = "";
            question = "";
        }
    };
    d data[11];
    ~MainWindow();

private slots:
    void on_btnsub1_clicked();

    void on_pushButton_clicked();

    void on_btnchp1_clicked();

    void on_btna_clicked();

    void on_btnb_clicked();

    void on_btnc_clicked();

    void on_btnd_clicked();

    void on_btnans_clicked();

    void on_btnnxt_clicked();

    void on_btnchp2_clicked();

    void on_pushButton_2_clicked();

    void on_btnlogin_clicked();

    void on_btnadmin_clicked();

    void on_btnlogin_2_clicked();

    void on_btnchp3_clicked();

    void on_btnchp4_clicked();

    void on_btnchp5_clicked();

    void on_btnchp6_clicked();

    void on_btnchp7_clicked();

    void on_btnchp8_clicked();

    void on_btnchp9_clicked();

    void on_btnsub2_clicked();

    void on_btnchp10_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
