#include "mainwindow.h"
#include "loginpage.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    // LoginPage w;
    w.showMaximized();
    return a.exec();
}
