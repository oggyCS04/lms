#include "bookfragment.h"
#include "ui_bookform.h"

#include "addbookdialog.h"
#include "databaseconnector.h"
#include <QMessageBox>
#include <QDebug>

BookFragment::BookFragment(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::BookFragment)
{
    ui->setupUi(this);
}

BookFragment::~BookFragment()
{
    delete ui;
}

void BookFragment::loadData(){

    DatabaseConnector *dbConnector = new DatabaseConnector;
    dbConnector->open();
    QSqlQuery get_data(*dbConnector);
    QSqlQuery check_data(*dbConnector);
    get_data.prepare("SELECT * FROM tblbooks");
    if(get_data.exec()){
        int RowNumber = 0;
        ui->bookTableWidget->setRowCount(get_data.size());
        while(get_data.next()){

            QPushButton *editButton = new QPushButton(" Edit");
            editButton->setSizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
            editButton->setMinimumSize(0, 32);
            editButton->setMaximumSize(16777215, 32);

            QFont font("Segoe UI", 11, QFont::DemiBold);
            editButton->setFont(font);

            QIcon icon(":/icons/res/icon/edit-bold.png");
            editButton->setIcon(icon);
            editButton->setIconSize(QSize(16, 16));

            editButton->setStyleSheet(R"(
                QPushButton{
                color: white;
                background-color: rgb(66, 139, 202);
                border-radius: 4px;
                }

                QPushButton:Hover{
                background-color: rgb(48,113,169);
                }
            )");

            QPushButton *deleteButton = new QPushButton(" Delete");
            deleteButton->setSizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
            deleteButton->setMinimumSize(0, 32);
            deleteButton->setMaximumSize(16777215, 32);
            deleteButton->setFont(font);

            QIcon icon2(":/icons/res/icon/delete-bold.png");
            deleteButton->setIcon(icon2);
            deleteButton->setIconSize(QSize(16, 16));

            deleteButton->setStyleSheet(R"(
                QPushButton{
                color: white;
                background-color: rgb(217, 83, 79);
                border-radius: 4px;
                }

                QPushButton:Hover{
                background-color: rgb(201,48,44);
                }
            )");



            // Add buttons to a horizontal layout
            QWidget *buttonWidget = new QWidget();
            QHBoxLayout *buttonLayout = new QHBoxLayout(buttonWidget);
            buttonLayout->addWidget(editButton);
            buttonLayout->addWidget(deleteButton);
            buttonLayout->setContentsMargins(0, 0, 0, 0);  // Optional: Remove padding
            buttonWidget->setLayout(buttonLayout);
            buttonWidget->setStyleSheet(R"(
                QWidget{
                    border: 0px;
                }
            )");


            ui->bookTableWidget->setItem(RowNumber,0,new QTableWidgetItem(QString::number(get_data.value("id").toInt())));
            ui->bookTableWidget->setItem(RowNumber,1,new QTableWidgetItem(QString(get_data.value("BookName").toString())));
            ui->bookTableWidget->setItem(RowNumber,2,new QTableWidgetItem(QString::number(get_data.value("id").toInt())));
            ui->bookTableWidget->setItem(RowNumber,3,new QTableWidgetItem(QString(get_data.value("Copies").toString())));
            ui->bookTableWidget->setItem(RowNumber,4,new QTableWidgetItem(QString(get_data.value("IssuedCopies").toString())));
            // ui->bookTableWidget->setItem(RowNumber,5,new QTableWidgetItem(QString(get_data.value("CatId").toString())));
            // ui->bookTableWidget->setItem(RowNumber,6,new QTableWidgetItem(QString(get_data.value("AuthorId").toString())));
            ui->bookTableWidget->setItem(RowNumber,7,new QTableWidgetItem(QString(get_data.value("ISBNNumber").toString())));
            ui->bookTableWidget->setItem(RowNumber,8,new QTableWidgetItem(QString(get_data.value("BookPrice").toString())));

            QString catId = get_data.value("CatId").toString();
            bool ok;
            int newCatId = catId.toInt(&ok) + 1;

            check_data.prepare("SELECT * FROM `tblcategory` WHERE id = :id");
            check_data.bindValue(":id",newCatId);
            if (check_data.exec() && check_data.next()) { // Add check_data.next()
                ui->bookTableWidget->setItem(RowNumber, 5, new QTableWidgetItem(QString(check_data.value("CategoryName").toString())));
            } else {
                qDebug() << "Failed to retrieve category name for id:" << newCatId;
            }

            QString authorId = get_data.value("AuthorId").toString();
            int newAuthorId = authorId.toInt(&ok) + 1;

            check_data.prepare("SELECT * FROM `tblauthors` WHERE id = :id");
            check_data.bindValue(":id",newAuthorId);
            if (check_data.exec() && check_data.next()) { // Add check_data.next()
                ui->bookTableWidget->setItem(RowNumber, 6, new QTableWidgetItem(QString(check_data.value("AuthorName").toString())));
            } else {
                qDebug() << "Failed to retrieve author name for id:" << newCatId;
            }

            ui->bookTableWidget->setCellWidget(RowNumber,9,buttonWidget);

            connect(editButton, &QPushButton::clicked,this, [this,RowNumber]() {
                onEditBtnClicked(RowNumber);
            });
            connect(deleteButton, &QPushButton::clicked,this, [this,RowNumber]() {
                onDeleteBtnClicked(RowNumber);
            });

            RowNumber = RowNumber+1;

        }
        dbConnector->close();
    }
}

void BookFragment::on_addBookBtn_clicked()
{
    AddBookDialog *addBook = new AddBookDialog(this);
    addBook->showNormal();
}

void BookFragment::onEditBtnClicked(int index){
    QMessageBox::information(this,"Success",QString::number(index));
}

void BookFragment::onDeleteBtnClicked(int index){
    QMessageBox::information(this,"Success",QString::number(index));
}

