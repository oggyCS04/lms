#ifndef REGSTUDFRAGMENT_H
#define REGSTUDFRAGMENT_H

#include <QWidget>

namespace Ui {
class RegStudFragment;
}

class RegStudFragment : public QWidget
{
    Q_OBJECT

public:
    explicit RegStudFragment(QWidget *parent = nullptr);
    ~RegStudFragment();
    void loadData();

private slots:
    void onInactiveBtnClicked(int index1);

private:
    Ui::RegStudFragment *ui;
};

#endif // REGSTUDFRAGMENT_H
