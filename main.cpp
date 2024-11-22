#include "mainwindow.h"
#include "loginpage.h"
#include "usermainwindow.h"

#include <QApplication>
#include <QStyleFactory>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QString styleSheet = R"(
        QWidget {
            background-color: #f3f4f8; /* Set background color */
            color: #000000;            /* Set text color */
        }
    )";

    a.setStyleSheet(styleSheet);

    LoginPage w;
    //MainWindow w;
    //UserMainWindow w;

    w.showMaximized();
    return a.exec();
}
