#ifndef ADDBOOKDIALOG_H
#define ADDBOOKDIALOG_H

#include <QDialog>
#include "databaseconnector.h"

namespace Ui {
class AddBookDialog;
}

class AddBookDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AddBookDialog(QWidget *parent = nullptr);
    ~AddBookDialog();

private slots:
    void on_bookSubmitBtn_clicked();

private:
    Ui::AddBookDialog *ui;
    DatabaseConnector *dbConnector = new DatabaseConnector;
};

#endif // ADDBOOKDIALOG_H
