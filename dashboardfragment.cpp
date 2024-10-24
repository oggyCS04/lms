#include "dashboardfragment.h"
#include "ui_dashboardform.h"
#include "insightframe.h"

DashboardFragment::DashboardFragment(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::DashboardFragment)
{
    ui->setupUi(this);

    ui->dashboardFragmentVL->setAlignment(ui->topWidget,Qt::AlignTop);

    InsightFrame *w1 = new InsightFrame(this);
    InsightFrame *w2 = new InsightFrame(this);
    InsightFrame *w3 = new InsightFrame(this);
    InsightFrame *w4 = new InsightFrame(this);

    w1->setHeaderText("Books Listed");
    w2->setHeaderText("Registered Users");
    w3->setHeaderText("Book Issued ");
    w4->setHeaderText("Overdue Books");

    ui->topWidgetHL->addWidget(w1);
    ui->topWidgetHL->addWidget(w2);
    ui->topWidgetHL->addWidget(w3);
    ui->topWidgetHL->addWidget(w4);

}

DashboardFragment::~DashboardFragment()
{
    delete ui;
}
