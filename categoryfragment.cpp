#include "categoryfragment.h"
#include "ui_categoryform.h"

#include <QMessageBox>

CategoryFragment::CategoryFragment(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::CategoryFragment)
{
    ui->setupUi(this);
    ui->category_stackedWidget->setCurrentIndex(0);
}

CategoryFragment::~CategoryFragment()
{
    delete ui;
}

void CategoryFragment::on_addCategoryBtn_clicked()
{
    ui->category_stackedWidget->setCurrentIndex(0);
}


void CategoryFragment::on_manageCategoryBtn_clicked()
{
    ui->category_stackedWidget->setCurrentIndex(1);

    dbConnector.open();
    QSqlQuery get_data(dbConnector);
    get_data.prepare("SELECT * FROM tblcategory");
    if(get_data.exec()){
        int RowNumber = 0;
        ui->tableWidget->setRowCount(get_data.size());
        while(get_data.next()){

            QPushButton *editButton = new QPushButton("Edit");
            QPushButton *deleteButton = new QPushButton("Delete");

            // Add buttons to a horizontal layout
            QWidget *buttonWidget = new QWidget();
            QHBoxLayout *buttonLayout = new QHBoxLayout(buttonWidget);
            buttonLayout->addWidget(editButton);
            buttonLayout->addWidget(deleteButton);
            buttonLayout->setContentsMargins(0, 0, 0, 0);  // Optional: Remove padding
            buttonWidget->setLayout(buttonLayout);

            ui->tableWidget->setItem(RowNumber,0,new QTableWidgetItem(QString::number(get_data.value("id").toInt())));
            ui->tableWidget->setItem(RowNumber,1,new QTableWidgetItem(QString(get_data.value("CategoryName").toString())));
            ui->tableWidget->setItem(RowNumber,2,new QTableWidgetItem(QString(get_data.value("Status").toString())));
            ui->tableWidget->setItem(RowNumber,3,new QTableWidgetItem(QString(get_data.value("CreationDate").toString())));
            ui->tableWidget->setItem(RowNumber,4,new QTableWidgetItem(QString(get_data.value("UpdationDate").toString())));

            ui->tableWidget->setCellWidget(RowNumber,5,buttonWidget);

            RowNumber = RowNumber+1;
        }
        dbConnector.close();
    }
}


void CategoryFragment::on_categoryDataBtn_clicked()
{
    int status=0;

    if(ui->activeRadioBtn->isChecked()){
        status = 1;
    }else if(ui->InactiveRadioBtn->isChecked()){
        status = 0;
    }

    dbConnector.open();
    QSqlDatabase::database().transaction();
    QSqlQuery Query_Insert_Data(dbConnector);
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
    dbConnector.close();
}

