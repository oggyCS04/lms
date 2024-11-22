#include "bookissuefragment.h"
#include "ui_bookissueform.h"
#include "databaseconnector.h"
#include "issuebookdialog.h"

#include <QMessageBox>

BookIssueFragment::BookIssueFragment(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::BookIssueFragment)
{
    ui->setupUi(this);
}

BookIssueFragment::~BookIssueFragment()
{
    delete ui;
}

void BookIssueFragment::on_addBookIssueBtn_clicked()
{
    IssueBookDialog *issuebook = new IssueBookDialog(this);
    issuebook->showNormal();
}

void BookIssueFragment::loadData()
{
    DatabaseConnector *dbConnector = new DatabaseConnector;
    dbConnector->open();
    QSqlQuery get_data(*dbConnector);
    QSqlQuery check_data(*dbConnector);
    get_data.prepare("SELECT * FROM tblissuedbookdetails");
    if(get_data.exec()){
        int RowNumber = 0;
        ui->bookIssueTableWidget->setRowCount(get_data.size());
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



            // Add buttons to a horizontal layout
            QWidget *buttonWidget = new QWidget();
            QHBoxLayout *buttonLayout = new QHBoxLayout(buttonWidget);
            buttonLayout->addWidget(editButton);
            buttonLayout->setContentsMargins(0, 0, 0, 0);  // Optional: Remove padding
            buttonWidget->setLayout(buttonLayout);
            buttonWidget->setStyleSheet(R"(
                QWidget{
                    border: 0px;
                }
            )");


            ui->bookIssueTableWidget->setItem(RowNumber,0,new QTableWidgetItem(QString::number(get_data.value("id").toInt())));


            check_data.prepare("SELECT * FROM `tblstudents` WHERE StudentId = :sid");
            check_data.bindValue(":sid",QString(get_data.value("StudentId").toString()));
            if (check_data.exec() && check_data.next()) { // Add check_data.next()
                ui->bookIssueTableWidget->setItem(RowNumber,1,new QTableWidgetItem(QString(check_data.value("FullName").toString())));
            }

            check_data.prepare("SELECT * FROM `tblbooks` WHERE id = :bid");
            check_data.bindValue(":bid",QString(get_data.value("BookId").toString()));
            if (check_data.exec() && check_data.next()) { // Add check_data.next()
                ui->bookIssueTableWidget->setItem(RowNumber,2,new QTableWidgetItem(QString(check_data.value("BookName").toString())));
                ui->bookIssueTableWidget->setItem(RowNumber,4,new QTableWidgetItem(QString(check_data.value("ISBNNumber").toString())));
            }

            // ui->bookIssueTableWidget->setItem(RowNumber,1,new QTableWidgetItem(QString(get_data.value("StudentId").toString())));
            // ui->bookIssueTableWidget->setItem(RowNumber,2,new QTableWidgetItem(QString(get_data.value("BookId").toString())));
            ui->bookIssueTableWidget->setItem(RowNumber,3,new QTableWidgetItem(QString(get_data.value("BookId").toString())));
            // ui->bookIssueTableWidget->setItem(RowNumber,4,new QTableWidgetItem(QString(get_data.value("MobileNumber").toString())));
            ui->bookIssueTableWidget->setItem(RowNumber,5,new QTableWidgetItem(QString(get_data.value("IssuesDate").toString())));
            ui->bookIssueTableWidget->setItem(RowNumber,6,new QTableWidgetItem(QString(get_data.value("ReturnDate").toString())));

            ui->bookIssueTableWidget->setCellWidget(RowNumber,7,buttonWidget);

            connect(editButton, &QPushButton::clicked,this, [this,RowNumber]() {
                onEditBtnClicked(RowNumber);
            });

            RowNumber = RowNumber+1;

        }
        dbConnector->close();
    }
}

void BookIssueFragment::onEditBtnClicked(int index){
    QMessageBox::information(this,"Success",QString::number(index));
}
