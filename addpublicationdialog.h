#ifndef ADDPUBLICATIONDIALOG_H
#define ADDPUBLICATIONDIALOG_H

#include <QDialog>

namespace Ui {
class AddPublicationDialog;
}

class AddPublicationDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AddPublicationDialog(QWidget *parent = nullptr);
    ~AddPublicationDialog();

private slots:
    void on_publicationDataBtn_clicked();

private:
    Ui::AddPublicationDialog *ui;
};

#endif // ADDPUBLICATIONDIALOG_H
