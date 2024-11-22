#include "reqbookfragment.h"
#include "ui_reqbookform.h"

ReqBookFragment::ReqBookFragment(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ReqBookFragment)
{
    ui->setupUi(this);
}

ReqBookFragment::~ReqBookFragment()
{
    delete ui;
}
