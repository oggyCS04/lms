#ifndef REQBOOKFRAGMENT_H
#define REQBOOKFRAGMENT_H

#include <QWidget>

namespace Ui {
class ReqBookFragment;
}

class ReqBookFragment : public QWidget
{
    Q_OBJECT

public:
    explicit ReqBookFragment(QWidget *parent = nullptr);
    ~ReqBookFragment();

private:
    Ui::ReqBookFragment *ui;
};

#endif // REQBOOKFRAGMENT_H
