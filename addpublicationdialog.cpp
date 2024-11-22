#include "addpublicationdialog.h"
#include "ui_addpublicationdialog.h"

#include "databaseconnector.h"
#include <QMessageBox>

AddPublicationDialog::AddPublicationDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AddPublicationDialog)
{
    ui->setupUi(this);
}

AddPublicationDialog::~AddPublicationDialog()
{
    delete ui;
}

void AddPublicationDialog::on_publicationDataBtn_clicked()
{
    DatabaseConnector *dbConnector = new DatabaseConnector;
    dbConnector->open();
    QSqlDatabase::database().transaction();
    QSqlQuery Query_Insert_Data(*dbConnector);
    Query_Insert_Data.prepare("INSERT INTO  tblauthors(AuthorName) VALUES(:author)");
    Query_Insert_Data.bindValue(":author",ui->publicationLE->text());


    if(Query_Insert_Data.exec()){
        QMessageBox::information(this,"Success","Data inserted successfully");
        ui->publicationLE->clear();
    }else{
        QMessageBox::critical(this, "Database Error", "Failed to insert data.");
    }
    QSqlDatabase::database().commit();
    dbConnector->close();
    delete dbConnector;
    this->close();

}

