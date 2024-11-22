#include "publicationfragment.h"
#include "ui_publicationform.h"
#include "databaseconnector.h"

#include"addpublicationdialog.h"
#include <QMessageBox>

PublicationFragment::PublicationFragment(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::PublicationFragment)
{
    ui->setupUi(this);
}

PublicationFragment::~PublicationFragment()
{
    delete ui;
}

void PublicationFragment::loadData(){

    DatabaseConnector *dbConnector = new DatabaseConnector;
    dbConnector->open();
    QSqlQuery get_data(*dbConnector);
    get_data.prepare("SELECT * FROM tblauthors");
    if(get_data.exec()){
        int RowNumber = 0;
        ui->tableWidget->setRowCount(get_data.size());
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

            ui->tableWidget->setItem(RowNumber,0,new QTableWidgetItem(QString::number(get_data.value("id").toInt())));
            ui->tableWidget->setItem(RowNumber,1,new QTableWidgetItem(QString(get_data.value("AuthorName").toString())));
            ui->tableWidget->setItem(RowNumber,2,new QTableWidgetItem(QString(get_data.value("CreationDate").toString())));
            ui->tableWidget->setItem(RowNumber,3,new QTableWidgetItem(QString(get_data.value("UpdationDate").toString())));

            ui->tableWidget->setCellWidget(RowNumber,4,buttonWidget);

            connect(editButton, &QPushButton::clicked,this, [this,RowNumber]() {
                onEditBtnClicked(RowNumber);
            });
            connect(deleteButton, &QPushButton::clicked,this, [this,RowNumber]() {
                onDeleteBtnClicked(RowNumber);
            });

            RowNumber = RowNumber+1;
        }
        dbConnector->close();
        delete dbConnector;
    }
}


void PublicationFragment::on_addPublicationBtn_clicked()
{
    AddPublicationDialog *addPublication = new AddPublicationDialog(this);
    addPublication->showNormal();
}

void PublicationFragment::onEditBtnClicked(int index){
    QMessageBox::information(this,"Success",QString::number(index));
}

void PublicationFragment::onDeleteBtnClicked(int index){
    QMessageBox::information(this,"Success",QString::number(index));
}
