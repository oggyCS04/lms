#include "usermainwindow.h"
#include "ui_usermainwindow.h"
#include "loginpage.h"
#include "databaseconnector.h"
#include "appdata.h"

UserMainWindow::UserMainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::UserMainWindow)
{
    ui->setupUi(this);
    ui->userStackedWidget->setCurrentIndex(0);

    QString username = AppData::instance().getUsername();


    ui->userDashHL->setAlignment(Qt::AlignTop);
    ui->bookIssueFrameVL->setAlignment(ui->bookIcon,Qt::AlignHCenter);
    ui->bookIssueFrameVL->setAlignment(ui->issuedNum,Qt::AlignHCenter);
    ui->bookIssueFrameVL->setAlignment(ui->bookIssuedLabel,Qt::AlignHCenter);
    ui->notReturnedFrameVL->setAlignment(ui->notReturnIcon,Qt::AlignHCenter);
    ui->notReturnedFrameVL->setAlignment(ui->notReturnedNum,Qt::AlignHCenter);
    ui->notReturnedFrameVL->setAlignment(ui->notReturnLabel,Qt::AlignHCenter);
    ui->accountWidgetHL->setAlignment(Qt::AlignTop);


    DatabaseConnector *dbConnector = new DatabaseConnector();
    dbConnector->open();
    QSqlQuery get_data(*dbConnector);
    QSqlQuery get_data2(*dbConnector);
    QSqlQuery check_data(*dbConnector);
    get_data.prepare("SELECT * FROM tblstudents WHERE EmailId = :eid");
    get_data.bindValue(":eid",username);

    if(get_data.exec()&& get_data.next()){

        ui->studentIdValue->setText(QString(get_data.value("StudentId").toString()));
        ui->studentNameValue->setText(QString(get_data.value("FullName").toString()));

        get_data2.prepare("SELECT * FROM tblissuedbookdetails WHERE StudentId = :sid");
        get_data2.bindValue(":sid",QString(get_data.value("StudentId").toString()));

        if(get_data2.exec()){

            int RowNumber = 0;

            ui->issuedBooksTableWidget->setRowCount(get_data2.size());
            ui->issuedNum->setText(QString::number(get_data2.size()));
            ui->notReturnedNum->setText(QString::number(get_data2.size()));

            while(get_data2.next()){

                check_data.prepare("SELECT * FROM `tblbooks` WHERE id = :bid");
                check_data.bindValue(":bid",QString(get_data2.value("BookId").toString()));
                if (check_data.exec() && check_data.next()) { // Add check_data.next()
                    ui->issuedBooksTableWidget->setItem(RowNumber,1,new QTableWidgetItem(QString(check_data.value("BookName").toString())));
                    ui->issuedBooksTableWidget->setItem(RowNumber,2,new QTableWidgetItem(QString(check_data.value("ISBNNumber").toString())));
                }

                ui->issuedBooksTableWidget->setItem(RowNumber,0,new QTableWidgetItem(QString::number(get_data2.value("id").toInt())));
                // ui->issuedBooksTableWidget->setItem(RowNumber,1,new QTableWidgetItem(QString(get_data2.value("BookId").toString())));
                // ui->issuedBooksTableWidget->setItem(RowNumber,2,new QTableWidgetItem(QString(get_data2.value("BookId").toString())));
                ui->issuedBooksTableWidget->setItem(RowNumber,3,new QTableWidgetItem(QString(get_data2.value("IssuesDate").toString())));
                ui->issuedBooksTableWidget->setItem(RowNumber,4,new QTableWidgetItem(QString(get_data2.value("ReturnDate").toString())));



                RowNumber = RowNumber+1;
            }
        }
    }
    dbConnector->close();

    connect(ui->dashboardBtn, &QPushButton::clicked,this, [this]() {
        onMenuButtonClicked(0);
    });
    connect(ui->issuedBooksBtn, &QPushButton::clicked,this, [this]() {
        onMenuButtonClicked(1);
    });
    connect(ui->requestBookBtn, &QPushButton::clicked,this, [this]() {
        onMenuButtonClicked(2);
    });
    connect(ui->accountBtn, &QPushButton::clicked,this, [this]() {
        onMenuButtonClicked(3);
    });

}

UserMainWindow::~UserMainWindow()
{
    delete ui;
}

void UserMainWindow::onMenuButtonClicked(int index){
    if(index==2){
        loadBookRequestdata();
    }
    ui->userStackedWidget->setCurrentIndex(index);
}

void UserMainWindow::on_logoutBtn_clicked()
{
    QMessageBox::information(this,"LMS","Logout Successful");
    this->hide();
    LoginPage *loginpage = new LoginPage();
    loginpage->showMaximized();
}

void UserMainWindow::loadBookRequestdata(){
    DatabaseConnector *dbConnector = new DatabaseConnector;
    dbConnector->open();
    QSqlQuery get_data(*dbConnector);
    QSqlQuery check_data(*dbConnector);
    get_data.prepare("SELECT * FROM tblbooks");
    if(get_data.exec()){
        int RowNumber = 0;
        ui->requestBooksTableWidget->setRowCount(get_data.size());
        while(get_data.next()){

            QPushButton *editButton = new QPushButton(" Request");
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


            ui->requestBooksTableWidget->setItem(RowNumber,0,new QTableWidgetItem(QString::number(get_data.value("id").toInt())));
            ui->requestBooksTableWidget->setItem(RowNumber,1,new QTableWidgetItem(QString(get_data.value("BookName").toString())));
            ui->requestBooksTableWidget->setItem(RowNumber,4,new QTableWidgetItem(QString(get_data.value("ISBNNumber").toString())));
            ui->requestBooksTableWidget->setItem(RowNumber,5,new QTableWidgetItem(QString(get_data.value("BookPrice").toString())));

            QString catId = get_data.value("CatId").toString();
            bool ok;
            int newCatId = catId.toInt(&ok) + 1;

            check_data.prepare("SELECT * FROM `tblcategory` WHERE id = :id");
            check_data.bindValue(":id",newCatId);
            if (check_data.exec() && check_data.next()) { // Add check_data.next()
                ui->requestBooksTableWidget->setItem(RowNumber, 2, new QTableWidgetItem(QString(check_data.value("CategoryName").toString())));
            } else {
                qDebug() << "Failed to retrieve category name for id:" << newCatId;
            }

            QString authorId = get_data.value("AuthorId").toString();
            int newAuthorId = authorId.toInt(&ok) + 1;

            check_data.prepare("SELECT * FROM `tblauthors` WHERE id = :id");
            check_data.bindValue(":id",newAuthorId);
            if (check_data.exec() && check_data.next()) { // Add check_data.next()
                ui->requestBooksTableWidget->setItem(RowNumber, 3, new QTableWidgetItem(QString(check_data.value("AuthorName").toString())));
            } else {
                qDebug() << "Failed to retrieve author name for id:" << newCatId;
            }

            ui->requestBooksTableWidget->setCellWidget(RowNumber,6,buttonWidget);

            RowNumber = RowNumber+1;

        }
        dbConnector->close();
    }

}

