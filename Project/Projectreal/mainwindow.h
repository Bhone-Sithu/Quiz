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
    QString subject;
    QString chapter;
    QSqlDatabase database;
    QString locate;
    qint8 num = 0;
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
    d data[10];
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

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
