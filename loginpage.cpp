#include "loginpage.h"
#include "ui_loginpage.h"
#include "mainwindow.h"
#include "usermainwindow.h"
#include "databaseconnector.h"
#include "appdata.h"

LoginPage::LoginPage(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LoginPage)
{
    ui->setupUi(this);

    ui->verticalLayout->setAlignment(ui->frame, Qt::AlignHCenter);
    ui->login_layout->setAlignment(ui->login_title, Qt::AlignHCenter);
    ui->login_layout->setAlignment(ui->login_btn, Qt::AlignHCenter);
    ui->rightWidgetVL->setAlignment(ui->loginWidget, Qt::AlignHCenter);
    ui->rightWidgetVL->setAlignment(ui->loginOptWidget, Qt::AlignHCenter);

    // QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    // db.setHostName("127.0.0.1");
    // db.setUserName("root");
    // db.setPassword("");
    // db.setDatabaseName("lms_thapathali");

    // if(db.open()){
    //     qDebug() << "Database is connected";
    // }
    // else{
    //     qDebug() << "Database is not conneted";
    // }
}

LoginPage::~LoginPage()
{
    delete ui;
}

void LoginPage::on_login_btn_clicked()
{
    QString username = ui->username_le->text();
    QString password = ui->password_le->text();

    DatabaseConnector *dbConnector = new DatabaseConnector();
    dbConnector->open();


    if(ui->adminLogin->isChecked()){
        QSqlQuery query(*dbConnector);
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
    }else if(ui->userLogin->isChecked()){
        QSqlQuery query(*dbConnector);
        query.prepare("SELECT * FROM tblstudents WHERE EmailId='"+username+"' AND Password='"+password+"'");

        if (query.exec()) {
            int userCount=0;
            while (query.next()) {
                userCount=userCount+1;
            }
            if(userCount==1){
                QMessageBox::information(this,"LMS","Login Successful");
                AppData::instance().setUsername(username);
                this->hide();
                UserMainWindow *usermainwindow = new UserMainWindow;
                usermainwindow->showMaximized();
            }
            else if (userCount==0){
                QMessageBox::information(this,"LMS","Invalid Username and Password");
            }

        } else {
            qDebug() << "Query execution error: " << query.lastError().text();
        }
    }

    dbConnector->close();
    delete dbConnector;
}


void LoginPage::on_adminLogin_clicked()
{
    ui->login_title->setText("Admin Login");
}


void LoginPage::on_userLogin_clicked()
{
    ui->login_title->setText("User Login");
}

