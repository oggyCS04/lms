#ifndef BOOKFRAGMENT_H
#define BOOKFRAGMENT_H

#include <QWidget>

namespace Ui {
class BookFragment;
}

class BookFragment : public QWidget
{
    Q_OBJECT

public:
    explicit BookFragment(QWidget *parent = nullptr);
    ~BookFragment();
    void loadData();

private slots:
    void on_addBookBtn_clicked();
    void onEditBtnClicked(int index1);
    void onDeleteBtnClicked(int index2);

private:
    Ui::BookFragment *ui;
};

#endif // BOOKFRAGMENT_H
