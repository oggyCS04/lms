#ifndef PUBLICATIONFRAGMENT_H
#define PUBLICATIONFRAGMENT_H

#include "databaseconnector.h"

#include <QWidget>

namespace Ui {
class PublicationFragment;
}

class PublicationFragment : public QWidget
{
    Q_OBJECT

public:
    explicit PublicationFragment(QWidget *parent = nullptr);
    ~PublicationFragment();
    void loadData();

private slots:

    void on_addPublicationBtn_clicked();
    void onEditBtnClicked(int index1);
    void onDeleteBtnClicked(int index2);

private:
    Ui::PublicationFragment *ui;
};

#endif // PUBLICATIONFRAGMENT_H
