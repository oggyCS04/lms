#include "editbutton.h"
#include "ui_editbutton.h"

#include "addcategorydialog.h"

EditButton::EditButton(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::EditButton)
{
    ui->setupUi(this);
}

EditButton::~EditButton()
{
    delete ui;
}

void EditButton::on_pushButton_clicked()
{
    AddCategoryDialog *addCategory = new AddCategoryDialog(this);
    addCategory->showNormal();
}

