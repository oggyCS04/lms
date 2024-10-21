#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "booksfragment.h"
#include "categoryfragment.h"
#include "databaseconnector.h"

#include <QMainWindow>
#include <QPushButton>
#include <QFrame>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void onMenuButtonClicked(int index);

private:
    Ui::MainWindow *ui;
    BookFragment *bookWidget;
    CategoryFragment *categoryWidget;
    QPushButton* createMenuButton(const QString &iconPath, const QString &text, int index);

    // void applyDropShadow(QFrame*);
};
#endif // MAINWINDOW_H
