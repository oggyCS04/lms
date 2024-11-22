#ifndef BOOKISSUEFRAGMENT_H
#define BOOKISSUEFRAGMENT_H

#include <QWidget>

namespace Ui {
class BookIssueFragment;
}

class BookIssueFragment : public QWidget
{
    Q_OBJECT

public:
    explicit BookIssueFragment(QWidget *parent = nullptr);
    ~BookIssueFragment();

    void loadData();

private slots:
    void on_addBookIssueBtn_clicked();
    void onEditBtnClicked(int index1);

private:
    Ui::BookIssueFragment *ui;
};

#endif // BOOKISSUEFRAGMENT_H
