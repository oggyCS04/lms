#ifndef ADDCATEGORYDIALOG_H
#define ADDCATEGORYDIALOG_H

#include <QDialog>

#include "databaseconnector.h"

namespace Ui {
class AddCategoryDialog;
}

class AddCategoryDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AddCategoryDialog(QWidget *parent = nullptr);
    ~AddCategoryDialog();

private slots:
    void on_categoryDataBtn_clicked();

private:
    Ui::AddCategoryDialog *ui;
};

#endif // ADDCATEGORYDIALOG_H
