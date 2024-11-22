#include "deletebutton.h"
#include "ui_deletebutton.h"

DeleteButton::DeleteButton(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::DeleteButton)
{
    ui->setupUi(this);
}

DeleteButton::~DeleteButton()
{
    delete ui;
}
