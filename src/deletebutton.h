#ifndef DELETEBUTTON_H
#define DELETEBUTTON_H

#include <QWidget>

namespace Ui {
class DeleteButton;
}

class DeleteButton : public QWidget
{
    Q_OBJECT

public:
    explicit DeleteButton(QWidget *parent = nullptr);
    ~DeleteButton();

private:
    Ui::DeleteButton *ui;
};

#endif // DELETEBUTTON_H
