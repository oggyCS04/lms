#include "addbookdialog.h"
#include "ui_addbookdialog.h"

#include <QMessageBox>


AddBookDialog::AddBookDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AddBookDialog)
{
    ui->setupUi(this);

    dbConnector->open();
    QSqlDatabase::database().transaction();
    QSqlQuery get_data(*dbConnector);
    get_data.prepare("SELECT * FROM tblcategory");


    if(get_data.exec()){
        while(get_data.next()){
            ui->categoryCB->addItem(QString(get_data.value("CategoryName").toString()));
        }
    }

    get_data.prepare("SELECT * FROM tblauthors");
    if(get_data.exec()){
        while(get_data.next()){
            ui->publicationCB->addItem(QString(get_data.value("AuthorName").toString()));
        }
    }

    dbConnector->close();
}

AddBookDialog::~AddBookDialog()
{
    delete ui;
}

void AddBookDialog::on_bookSubmitBtn_clicked()
{
    dbConnector->open();
    QSqlDatabase::database().transaction();
    QSqlQuery put_data(*dbConnector);

    put_data.prepare("INSERT INTO  tblbooks(BookName,CatId,AuthorId,ISBNNumber,BookPrice,Copies) VALUES(:bookname,:category,:author,:isbn,:price,:copies)");
    put_data.bindValue(":bookname",ui->bookNameLE->text());
    put_data.bindValue(":category",ui->categoryCB->currentIndex());
    put_data.bindValue(":author",ui->publicationCB->currentIndex());
    put_data.bindValue(":isbn",ui->isbnLE->text());
    put_data.bindValue(":price",ui->priceLE->text());
    put_data.bindValue(":copies",ui->numOfCopiesLE->text());


    if(put_data.exec()){
        QMessageBox::information(this,"Success","Data inserted successfully");
    }else{
        QMessageBox::critical(this, "Database Error", "Failed to insert data.");
    }
    QSqlDatabase::database().commit();
    dbConnector->close();
    delete dbConnector;
    this->close();
}

