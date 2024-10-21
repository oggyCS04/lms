#ifndef CATEGORYFRAGMENT_H
#define CATEGORYFRAGMENT_H

#include "databaseconnector.h"

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

private slots:
    void on_addCategoryBtn_clicked();

    void on_manageCategoryBtn_clicked();

    void on_categoryDataBtn_clicked();

private:
    Ui::CategoryFragment *ui;
    DatabaseConnector dbConnector;
};

#endif // CATEGORYFRAGMENT_H
