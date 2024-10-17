#include "loginpage.h"
#include "ui_loginpage.h"
#include "mainwindow.h"

LoginPage::LoginPage(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LoginPage)
{
    ui->setupUi(this);

    ui->verticalLayout->setAlignment(ui->frame, Qt::AlignHCenter);
    ui->login_layout->setAlignment(ui->login_title, Qt::AlignHCenter);
    ui->login_layout->setAlignment(ui->login_btn, Qt::AlignHCenter);

    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("127.0.0.1");
    db.setUserName("root");
    db.setPassword("");
    db.setDatabaseName("lms_thapathali");

    if(db.open()){
        qDebug() << "Database is connected";
    }
    else{
        qDebug() << "Database is not conneted";
    }
}

LoginPage::~LoginPage()
{
    delete ui;
}

void LoginPage::on_login_btn_clicked()
{
    QString username = ui->username_le->text();
    QString password = ui->password_le->text();


    QSqlQuery query;
    query.prepare("SELECT * FROM admin WHERE email='"+username+"' AND pass='"+password+"'");

    if (query.exec()) {
        int userCount=0;
        while (query.next()) {
            userCount=userCount+1;
        }
        if(userCount==1){
            QMessageBox::information(this,"LMS","Login Successful");
            this->hide();
            MainWindow *mainwindow = new MainWindow();
            mainwindow->showMaximized();
        }
        else if (userCount==0){
            QMessageBox::information(this,"LMS","Invalid Username and Password");
        }

    } else {
        qDebug() << "Query execution error: " << query.lastError().text();
    }
}

