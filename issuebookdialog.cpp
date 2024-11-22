#include "issuebookdialog.h"
#include "ui_issuebookdialog.h"
#include "databaseconnector.h"

#include <QMessageBox>

IssueBookDialog::IssueBookDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::IssueBookDialog)
{
    ui->setupUi(this);

    QDate date = QDate::currentDate();
    ui->returnDateEdit->setDate(date);
}

IssueBookDialog::~IssueBookDialog()
{
    delete ui;
}

void IssueBookDialog::on_issueBookBtn_clicked()
{

    if(on_pushButton_clicked()){

        DatabaseConnector *dbConnector = new DatabaseConnector;
        dbConnector->open();
        QSqlDatabase::database().transaction();
        QSqlQuery put_data(*dbConnector);

        put_data.prepare("INSERT INTO  tblissuedbookdetails(StudentId,BookId,ReturnDate) VALUES(:studentid,:bookid,:return)");
        put_data.bindValue(":studentid",ui->StudentIdLE->text());
        put_data.bindValue(":bookid",ui->bookIdLE->text());
        put_data.bindValue(":return",ui->returnDateEdit->date().toString("yyyy-MM-dd"));

        if(put_data.exec()){
            QMessageBox::information(this,"Success","Data inserted successfully");
        }

        QSqlDatabase::database().commit();
        dbConnector->close();
        delete dbConnector;
        this->hide();
    }

}


bool IssueBookDialog::on_pushButton_clicked()
{
    int checkSId;
    int checkBookId;

    DatabaseConnector *dbConnector = new DatabaseConnector;
    dbConnector->open();
    QSqlQuery get_data(*dbConnector);

    get_data.prepare("SELECT * FROM tblstudents WHERE StudentId=:sid");
    get_data.bindValue(":sid",ui->StudentIdLE->text());
    if(get_data.exec() && get_data.next()){
        checkSId = 1;
    }else {
        checkSId = 0;
    }

    get_data.prepare("SELECT * FROM tblbooks WHERE id=:bid");
    get_data.bindValue(":bid",ui->bookIdLE->text());
    if(get_data.exec() && get_data.next()){
        checkBookId = 1;
        ui->bookNameLE->setText(QString(get_data.value("BookName").toString()));
    }else {
        checkBookId = 0;
    }


    if(checkSId == 1 && checkBookId == 1){
        QMessageBox::information(this,"LMS","Data are Correct");
        return 1;
    }else if (checkSId == 0 && checkBookId ==0){
        QMessageBox::information(this,"LMS","Both Student ID and Book Id are incorrect");
        return 0;
    } else if(checkSId == 0){
        QMessageBox::information(this,"LMS","Student ID is incorrect");
        return 0;
    }else if (checkBookId == 0){
        QMessageBox::information(this,"LMS","Book ID is incorrect");
        return 0;
    }


    dbConnector->close();
    delete dbConnector;
}

