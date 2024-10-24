#include "publicationfragment.h"
#include "ui_publicationform.h"

PublicationFragment::PublicationFragment(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::PublicationFragment)
{
    ui->setupUi(this);
    ui->pubStackedWidget->setCurrentIndex(0);
}

PublicationFragment::~PublicationFragment()
{
    delete ui;
}

void PublicationFragment::on_addPubBtn_clicked()
{
    ui->pubStackedWidget->setCurrentIndex(0);
}


void PublicationFragment::on_managePubBtn_clicked()
{
    ui->pubStackedWidget->setCurrentIndex(1);
}

