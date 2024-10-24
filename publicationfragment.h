#ifndef PUBLICATIONFRAGMENT_H
#define PUBLICATIONFRAGMENT_H

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

private slots:
    void on_addPubBtn_clicked();

    void on_managePubBtn_clicked();

private:
    Ui::PublicationFragment *ui;
};

#endif // PUBLICATIONFRAGMENT_H
