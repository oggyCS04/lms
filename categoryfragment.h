#ifndef CATEGORYFRAGMENT_H
#define CATEGORYFRAGMENT_H

#include <QWidget>

namespace Ui {
class CategoryFragment;
}

class CategoryFragment : public QWidget
{
    Q_OBJECT

public:
    explicit CategoryFragment(QWidget *parent = nullptr);
    ~CategoryFragment();
    void loadData();

private slots:

    void on_addCategoryBtn_clicked();
    void onEditBtnClicked(int index1);
    void onDeleteBtnClicked(int index2);

private:
    Ui::CategoryFragment *ui;
};

#endif // CATEGORYFRAGMENT_H
