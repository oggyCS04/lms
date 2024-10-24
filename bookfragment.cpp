#include "bookfragment.h"
#include "ui_bookform.h"

BookFragment::BookFragment(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::BookFragment)
{
    ui->setupUi(this);
}

BookFragment::~BookFragment()
{
    delete ui;
}
