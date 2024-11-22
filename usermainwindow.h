#ifndef USERMAINWINDOW_H
#define USERMAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class UserMainWindow;
}

class UserMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit UserMainWindow(QWidget *parent = nullptr);
    ~UserMainWindow();

    void loadBookRequestdata();

private slots:
    void onMenuButtonClicked(int index);

    void on_logoutBtn_clicked();

private:
    Ui::UserMainWindow *ui;
};

#endif // USERMAINWINDOW_H
