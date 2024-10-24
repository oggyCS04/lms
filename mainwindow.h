#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "dashboardfragment.h"
#include "bookfragment.h"
#include "categoryfragment.h"
#include "publicationfragment.h"

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

    DashboardFragment *dashboardWidget;
    CategoryFragment *categoryWidget;
    PublicationFragment *publicationWidget;
    BookFragment *bookWidget;

    void applyDropShadow(QWidget*);

    // QPushButton* createMenuButton(const QString &iconPath, const QString &text, int index);
};
#endif // MAINWINDOW_H
