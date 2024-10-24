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

private:
    Ui::BookFragment *ui;
};

#endif // BOOKFRAGMENT_H
