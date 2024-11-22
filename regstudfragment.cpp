#include "regstudfragment.h"
#include "ui_regstudform.h"
#include "databaseconnector.h"

#include <QMessageBox>

RegStudFragment::RegStudFragment(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::RegStudFragment)
{
    ui->setupUi(this);
}

RegStudFragment::~RegStudFragment()
{
    delete ui;
}

void RegStudFragment::loadData(){

    DatabaseConnector *dbConnector = new DatabaseConnector;
    dbConnector->open();
    QSqlQuery get_data(*dbConnector);
    get_data.prepare("SELECT * FROM tblstudents");
    if(get_data.exec()){
        int RowNumber = 0;
        ui->regStudTableWidget->setRowCount(get_data.size());
        while(get_data.next()){

            QPushButton *inactiveButton = new QPushButton("Inactive");
            inactiveButton->setSizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
            inactiveButton->setMinimumSize(0, 32);
            inactiveButton->setMaximumSize(16777215, 32);

            QFont font("Segoe UI", 11, QFont::DemiBold);
            inactiveButton->setFont(font);

            inactiveButton->setStyleSheet(R"(
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
            buttonLayout->addWidget(inactiveButton);
            buttonLayout->setContentsMargins(0, 0, 0, 0);  // Optional: Remove padding
            buttonWidget->setLayout(buttonLayout);
            buttonWidget->setStyleSheet(R"(
                QWidget{
                    border: 0px;
                }
            )");


            ui->regStudTableWidget->setItem(RowNumber,0,new QTableWidgetItem(QString::number(get_data.value("id").toInt())));
            ui->regStudTableWidget->setItem(RowNumber,1,new QTableWidgetItem(QString(get_data.value("StudentId").toString())));
            ui->regStudTableWidget->setItem(RowNumber,2,new QTableWidgetItem(QString(get_data.value("FullName").toString())));
            ui->regStudTableWidget->setItem(RowNumber,3,new QTableWidgetItem(QString(get_data.value("EmailId").toString())));
            ui->regStudTableWidget->setItem(RowNumber,4,new QTableWidgetItem(QString(get_data.value("MobileNumber").toString())));
            ui->regStudTableWidget->setItem(RowNumber,5,new QTableWidgetItem(QString(get_data.value("RegDate").toString())));
            ui->regStudTableWidget->setItem(RowNumber,6,new QTableWidgetItem(QString(get_data.value("Status").toString())));

            ui->regStudTableWidget->setCellWidget(RowNumber,7,buttonWidget);

            connect(inactiveButton, &QPushButton::clicked,this, [this,RowNumber]() {
                onInactiveBtnClicked(RowNumber);
            });

            RowNumber = RowNumber+1;

        }
        dbConnector->close();
    }
}

void RegStudFragment::onInactiveBtnClicked(int index){
    QMessageBox::information(this,"Success",QString::number(index));
}
