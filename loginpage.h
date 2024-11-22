#ifndef LOGINPAGE_H
#define LOGINPAGE_H

#include <QMainWindow>
#include <QtSql>
#include <QSqlDatabase>
#include <QDebug>
#include <QMessageBox>

namespace Ui {
class LoginPage;
}

class LoginPage : public QMainWindow
{
    Q_OBJECT

public:
    explicit LoginPage(QWidget *parent = nullptr);
    ~LoginPage();

private slots:
    void on_login_btn_clicked();

    void on_adminLogin_clicked();

    void on_userLogin_clicked();

private:
    Ui::LoginPage *ui;
};

#endif // LOGINPAGE_H
