#include "dashboardfragment.h"
#include "ui_dashboardform.h"
#include "databaseconnector.h"

#include<QDebug>

DashboardFragment::DashboardFragment(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::DashboardFragment)
{
    ui->setupUi(this);

    ui->dashboardFragmentVL->setAlignment(ui->topWidget,Qt::AlignTop);

    w1 = new InsightFrame(this);
    w2 = new InsightFrame(this);
    w3 = new InsightFrame(this);
    w4 = new InsightFrame(this);

    w1->setHeaderText("Books Listed");
    w2->setHeaderText("Registered Users");
    w3->setHeaderText("Book Issued ");
    w4->setHeaderText("Overdue Books");

    DatabaseConnector *dbConnector= new DatabaseConnector();
    dbConnector->open();
    QSqlQuery get_data(*dbConnector);
    get_data.prepare("SELECT * FROM tblbooks");
    if(get_data.exec()){
        w1->setUserNum(QString::number(get_data.size()));
    }
    get_data.prepare("SELECT * FROM tblstudents");
    if(get_data.exec()){
        w2->setUserNum(QString::number(get_data.size()));
    }
    get_data.prepare("SELECT * FROM tblissuedbookdetails");
    if(get_data.exec()){
        w3->setUserNum(QString::number(get_data.size()));
    }

    dbConnector->close();
    delete dbConnector;

    w2->setInsightIcon(":/icons/res/icon/team.png");
    w3->setInsightIcon(":/icons/res/icon/book-issue.png");
    w4->setInsightIcon(":/icons/res/icon/overdue.png");

    ui->topWidgetHL->addWidget(w1);
    ui->topWidgetHL->addWidget(w2);
    ui->topWidgetHL->addWidget(w3);
    ui->topWidgetHL->addWidget(w4);

}

DashboardFragment::~DashboardFragment()
{
    delete ui;
}

void DashboardFragment::loadData(){
    DatabaseConnector *dbConnector= new DatabaseConnector();
    dbConnector->open();
    QSqlQuery get_data(*dbConnector);
    get_data.prepare("SELECT * FROM tblbooks");
    if(get_data.exec()){
        w1->setUserNum(QString::number(get_data.size()));
    }

    get_data.prepare("SELECT * FROM tblstudents");
    if(get_data.exec()){
        w2->setUserNum(QString::number(get_data.size()));
    }

    get_data.prepare("SELECT * FROM tblissuedbookdetails");
    if(get_data.exec()){
        w3->setUserNum(QString::number(get_data.size()));
    }
    dbConnector->close();
    delete dbConnector;
}
