#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "loginpage.h"

#include <QPushButton>
#include <QDebug>
#include <QGraphicsDropShadowEffect>
#include <QFrame>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , dashboardWidget(nullptr)
    , categoryWidget(nullptr)
    , publicationWidget(nullptr)
    , bookWidget(nullptr)
    , bookIssueWidget(nullptr)
    , reqBookWidget(nullptr)
    , regStudWidget(nullptr)
{
    ui->setupUi(this);

    ui->sidebar_vlayout_1->setAlignment(ui->logo_label_1,Qt::AlignHCenter);
    ui->sidebar_vlayout_2->setAlignment(ui->logo_label_2,Qt::AlignHCenter);
    ui->sidebar_2->setVisible(0);

    applyDropShadow(ui->top_bar);

    ui->stackedWidget->setCurrentIndex(0);

    dashboardWidget = new DashboardFragment(this);
    categoryWidget = new CategoryFragment(this);
    publicationWidget = new PublicationFragment(this);
    bookWidget = new BookFragment(this);
    bookIssueWidget = new BookIssueFragment(this);
    reqBookWidget = new ReqBookFragment(this);
    regStudWidget = new RegStudFragment(this);

    ui->dashboardVL->addWidget(dashboardWidget);
    ui->categoryVL->addWidget(categoryWidget);
    ui->publicationGL->addWidget(publicationWidget);
    ui->booksGL->addWidget(bookWidget);
    ui->bookIssueVL->addWidget(bookIssueWidget);
    ui->bookReqVL->addWidget(reqBookWidget);
    ui->regStudVL->addWidget(regStudWidget);


    connect(ui->dashboardBtn_1, &QPushButton::clicked,this, [this]() {
        onMenuButtonClicked(0);
    });
    connect(ui->dashboardBtn_2, &QPushButton::clicked,this, [this]() {
        onMenuButtonClicked(0);
    });
    connect(ui->categoryBtn_1, &QPushButton::clicked,this, [this]() {
        onMenuButtonClicked(1);
    });
    connect(ui->categoryBtn_2, &QPushButton::clicked,this, [this]() {
        onMenuButtonClicked(1);
    });
    connect(ui->publicationBtn_1, &QPushButton::clicked,this, [this]() {
        onMenuButtonClicked(2);
    });
    connect(ui->publicationBtn_2, &QPushButton::clicked,this, [this]() {
        onMenuButtonClicked(2);
    });
    connect(ui->bookBtn_1, &QPushButton::clicked,this, [this]() {
        onMenuButtonClicked(3);
    });
    connect(ui->bookBtn_2, &QPushButton::clicked,this, [this]() {
        onMenuButtonClicked(3);
    });
    connect(ui->issueBtn_1, &QPushButton::clicked,this, [this]() {
        onMenuButtonClicked(4);
    });
    connect(ui->issueBtn_2, &QPushButton::clicked,this, [this]() {
        onMenuButtonClicked(4);
    });
    connect(ui->requestBtn_1, &QPushButton::clicked,this, [this]() {
        onMenuButtonClicked(5);
    });
    connect(ui->requestBtn_2, &QPushButton::clicked,this, [this]() {
        onMenuButtonClicked(5);
    });
    connect(ui->regBtn_1, &QPushButton::clicked,this, [this]() {
        onMenuButtonClicked(6);
    });
    connect(ui->regBtn_2, &QPushButton::clicked,this, [this]() {
        onMenuButtonClicked(6);
    });
    connect(ui->reportBtn_1, &QPushButton::clicked,this, [this]() {
        onMenuButtonClicked(7);
    });
    connect(ui->reportBtn_2, &QPushButton::clicked,this, [this]() {
        onMenuButtonClicked(7);
    });


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onMenuButtonClicked(int index) {
    qDebug() << "Menu button clicked:" << index;
    if(index==0){
        dashboardWidget->loadData();
        ui->title_label->setText("Dashboard");
    }else if(index==1){
        categoryWidget->loadData();
        ui->title_label->setText("Categories");
    }else if(index==2){
        publicationWidget->loadData();
        ui->title_label->setText("Publications");
    }else if(index==3){
        bookWidget->loadData();
        ui->title_label->setText("Books");
    }else if(index==4){
        bookIssueWidget->loadData();
        ui->title_label->setText("Book Issue");
    }else if(index==5){
        ui->title_label->setText("Book Request");
    }else if(index==6){
        regStudWidget->loadData();
        ui->title_label->setText("Reg. Students");
    }else if(index==7){
        ui->title_label->setText("Report");
    }
    ui->stackedWidget->setCurrentIndex(index);
}

void MainWindow::applyDropShadow(QWidget* widget){
    QGraphicsDropShadowEffect *shadow = new QGraphicsDropShadowEffect;
    shadow->setBlurRadius(8);
    shadow->setOffset(0, 1);
    shadow->setColor(Qt::lightGray);
    widget->setGraphicsEffect(shadow);
}




void MainWindow::on_profile_btn_clicked()
{
    QMessageBox::information(this,"LMS","Logout Successful");
    this->hide();
    LoginPage *loginpage = new LoginPage();
    loginpage->showMaximized();
}

