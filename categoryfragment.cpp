#include "categoryfragment.h"
#include "ui_categoryform.h"
#include "addcategorydialog.h"
#include "databaseconnector.h"

#include <QMessageBox>

CategoryFragment::CategoryFragment(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::CategoryFragment)
{
    ui->setupUi(this);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
}

CategoryFragment::~CategoryFragment()
{
    delete ui;
}
void CategoryFragment::loadData(){

    ui->tableWidget->clearContents();
    ui->tableWidget->setRowCount(0);

    DatabaseConnector *dbConnector = new DatabaseConnector;

    dbConnector->open();
    QSqlQuery get_data(*dbConnector);
    get_data.prepare("SELECT * FROM tblcategory");
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

            QLabel *statusLabel = new QLabel("Active");
            statusLabel->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
            statusLabel->setMinimumSize(64, 24);
            statusLabel->setMaximumSize(64, 24);
            QFont font2("Segoe UI", 10, QFont::Normal);
            statusLabel->setFont(font2);
            statusLabel->setAlignment(Qt::AlignCenter);

            statusLabel->setStyleSheet(R"(
                QLabel{
                color: white;
                background-color: rgb(92,184,92);
                border-radius: 4px;
                }
            )");

            QWidget *labelWidget = new QWidget();
            QHBoxLayout *labelLayout = new QHBoxLayout(labelWidget);
            labelLayout->addWidget(statusLabel);
            labelLayout->setContentsMargins(0, 0, 0, 0);  // Optional: Remove padding
            labelWidget->setLayout(labelLayout);
            labelWidget->setStyleSheet(R"(
                QWidget{
                    background-color: none;
                    border: 0px;
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
            ui->tableWidget->setItem(RowNumber,1,new QTableWidgetItem(QString(get_data.value("CategoryName").toString())));
            ui->tableWidget->setItem(RowNumber,2,new QTableWidgetItem(QString(get_data.value("Status").toString())));
            ui->tableWidget->setItem(RowNumber,3,new QTableWidgetItem(QString(get_data.value("CreationDate").toString())));
            ui->tableWidget->setItem(RowNumber,4,new QTableWidgetItem(QString(get_data.value("UpdationDate").toString())));

            if(get_data.value("Status")== 1){
                ui->tableWidget->setCellWidget(RowNumber,2,labelWidget);
            }else{
                statusLabel->setText("Inactive");
                statusLabel->setStyleSheet(R"(
                    QLabel{
                    color: white;
                    background-color: rgb(217,83,79);
                    border-radius: 4px;
                    }
                )");
                ui->tableWidget->setCellWidget(RowNumber,2,labelWidget);
            }

            ui->tableWidget->setCellWidget(RowNumber,5,buttonWidget);

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
void CategoryFragment::on_addCategoryBtn_clicked()
{
    AddCategoryDialog *addCategory = new AddCategoryDialog(this);
    addCategory->showNormal();
}

void CategoryFragment::onEditBtnClicked(int index){
    QMessageBox::information(this,"Success",QString::number(index));
}

void CategoryFragment::onDeleteBtnClicked(int index){
   QMessageBox::information(this,"Success",QString::number(index));
}



