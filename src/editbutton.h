#ifndef EDITBUTTON_H
#define EDITBUTTON_H

#include <QWidget>
#include <QPushButton>

namespace Ui {
class EditButton;
}

class EditButton : public QWidget
{
    Q_OBJECT

public:
    explicit EditButton(QWidget *parent = nullptr);
    ~EditButton();

private slots:
    void on_pushButton_clicked();

private:
    Ui::EditButton *ui;
};

#endif // EDITBUTTON_H
