#include "addcategorydialog.h"
#include "ui_addcategorydialog.h"

#include <QtSql>
#include <QSqlDatabase>
#include <QMessageBox>

AddCategoryDialog::AddCategoryDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AddCategoryDialog)
{
    ui->setupUi(this);
}

AddCategoryDialog::~AddCategoryDialog()
{
    delete ui;
}

void AddCategoryDialog::on_categoryDataBtn_clicked()
{
    int status=0;

    if(ui->activeRadioBtn->isChecked()){
        status = 1;
    }else if(ui->InactiveRadioBtn->isChecked()){
        status = 0;
    }

    DatabaseConnector *dbConnector = new DatabaseConnector;
    dbConnector->open();
    QSqlDatabase::database().transaction();
    QSqlQuery Query_Insert_Data(*dbConnector);
    Query_Insert_Data.prepare("INSERT INTO  tblcategory(CategoryName,Status) VALUES(:category,:status)");
    Query_Insert_Data.bindValue(":category",ui->categoryLE->text());
    Query_Insert_Data.bindValue(":status",status);


    if(Query_Insert_Data.exec()){
        QMessageBox::information(this,"Success","Data inserted successfully");
        ui->categoryLE->clear();
        ui->activeRadioBtn->setChecked(true);
    }else{
        QMessageBox::critical(this, "Database Error", "Failed to insert data.");
    }
    QSqlDatabase::database().commit();
    dbConnector->close();
    delete dbConnector;
    this->close();

}

