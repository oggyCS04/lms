#ifndef ISSUEBOOKDIALOG_H
#define ISSUEBOOKDIALOG_H

#include <QDialog>

namespace Ui {
class IssueBookDialog;
}

class IssueBookDialog : public QDialog
{
    Q_OBJECT

public:
    explicit IssueBookDialog(QWidget *parent = nullptr);
    ~IssueBookDialog();

private slots:
    void on_issueBookBtn_clicked();

    bool on_pushButton_clicked();

private:
    Ui::IssueBookDialog *ui;
};

#endif // ISSUEBOOKDIALOG_H
