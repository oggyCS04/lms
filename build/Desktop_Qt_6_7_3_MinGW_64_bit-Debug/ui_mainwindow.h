/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QWidget *top_bar;
    QHBoxLayout *horizontalLayout_2;
    QLabel *logo_label;
    QPushButton *menu_btn;
    QSpacerItem *horizontalSpacer;
    QLineEdit *search_le;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *notification_btn;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *name_layout;
    QLabel *name_label;
    QLabel *mode_label;
    QPushButton *profile_btn;
    QSpacerItem *horizontalSpacer_4;
    QWidget *body;
    QHBoxLayout *horizontalLayout;
    QWidget *sidebar;
    QVBoxLayout *sidebar_vlayout;
    QStackedWidget *stackedWidget;
    QWidget *aa_dashboard;
    QHBoxLayout *horizontalLayout_6;
    QWidget *category;
    QGridLayout *categoryGL;
    QWidget *publication;
    QGridLayout *publicationGL;
    QWidget *books;
    QGridLayout *booksGL;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1132, 650);
        QFont font;
        font.setPointSize(11);
        MainWindow->setFont(font);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        top_bar = new QWidget(centralwidget);
        top_bar->setObjectName("top_bar");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(top_bar->sizePolicy().hasHeightForWidth());
        top_bar->setSizePolicy(sizePolicy);
        top_bar->setMinimumSize(QSize(0, 56));
        top_bar->setMaximumSize(QSize(16777215, 56));
        top_bar->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	background-color: rgb(255, 255, 255);\n"
"}\n"
"QPushButton{\n"
"background-color: rgb(255, 255, 255);\n"
"border: 1px solid white;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background-color: #ebebeb;\n"
"border: 1px solid rgb(236, 236, 236);\n"
"}\n"
""));
        horizontalLayout_2 = new QHBoxLayout(top_bar);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        logo_label = new QLabel(top_bar);
        logo_label->setObjectName("logo_label");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(logo_label->sizePolicy().hasHeightForWidth());
        logo_label->setSizePolicy(sizePolicy1);
        logo_label->setMinimumSize(QSize(72, 56));
        logo_label->setMaximumSize(QSize(72, 56));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        logo_label->setFont(font1);
        logo_label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: rgb(16, 16, 16);\n"
"}"));
        logo_label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        logo_label->setIndent(0);

        horizontalLayout_2->addWidget(logo_label);

        menu_btn = new QPushButton(top_bar);
        menu_btn->setObjectName("menu_btn");
        sizePolicy1.setHeightForWidth(menu_btn->sizePolicy().hasHeightForWidth());
        menu_btn->setSizePolicy(sizePolicy1);
        menu_btn->setMinimumSize(QSize(48, 56));
        menu_btn->setMaximumSize(QSize(48, 56));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/res/image/menu.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        menu_btn->setIcon(icon);
        menu_btn->setIconSize(QSize(24, 24));

        horizontalLayout_2->addWidget(menu_btn);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        search_le = new QLineEdit(top_bar);
        search_le->setObjectName("search_le");
        sizePolicy1.setHeightForWidth(search_le->sizePolicy().hasHeightForWidth());
        search_le->setSizePolicy(sizePolicy1);
        search_le->setMinimumSize(QSize(200, 32));
        search_le->setMaximumSize(QSize(200, 32));
        search_le->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"background-color: rgb(230, 230, 230);\n"
"border: 1px solid rgb(228, 228, 228);\n"
"border-radius: 16px;\n"
"padding-left: 12px;\n"
"color: rgb(79, 79, 79);\n"
"}"));
        search_le->setCursorMoveStyle(Qt::CursorMoveStyle::LogicalMoveStyle);

        horizontalLayout_2->addWidget(search_le);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        notification_btn = new QPushButton(top_bar);
        notification_btn->setObjectName("notification_btn");
        sizePolicy1.setHeightForWidth(notification_btn->sizePolicy().hasHeightForWidth());
        notification_btn->setSizePolicy(sizePolicy1);
        notification_btn->setMinimumSize(QSize(48, 56));
        notification_btn->setMaximumSize(QSize(48, 56));
        notification_btn->setStyleSheet(QString::fromUtf8(""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/res/icon/bell.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        notification_btn->setIcon(icon1);
        notification_btn->setIconSize(QSize(24, 24));

        horizontalLayout_2->addWidget(notification_btn);

        horizontalSpacer_3 = new QSpacerItem(32, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        name_layout = new QVBoxLayout();
        name_layout->setSpacing(2);
        name_layout->setObjectName("name_layout");
        name_layout->setContentsMargins(-1, -1, 4, -1);
        name_label = new QLabel(top_bar);
        name_label->setObjectName("name_label");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(name_label->sizePolicy().hasHeightForWidth());
        name_label->setSizePolicy(sizePolicy2);
        name_label->setMinimumSize(QSize(0, 0));
        name_label->setMaximumSize(QSize(16777215, 16777215));
        QFont font2;
        font2.setPointSize(10);
        font2.setWeight(QFont::DemiBold);
        name_label->setFont(font2);
        name_label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: black;\n"
"}"));
        name_label->setAlignment(Qt::AlignmentFlag::AlignBottom|Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing);
        name_label->setMargin(0);
        name_label->setIndent(0);

        name_layout->addWidget(name_label);

        mode_label = new QLabel(top_bar);
        mode_label->setObjectName("mode_label");
        mode_label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: rgb(86, 86, 86);\n"
"}"));
        mode_label->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTop|Qt::AlignmentFlag::AlignTrailing);
        mode_label->setIndent(0);

        name_layout->addWidget(mode_label);

        name_layout->setStretch(0, 1);
        name_layout->setStretch(1, 1);

        horizontalLayout_2->addLayout(name_layout);

        profile_btn = new QPushButton(top_bar);
        profile_btn->setObjectName("profile_btn");
        sizePolicy1.setHeightForWidth(profile_btn->sizePolicy().hasHeightForWidth());
        profile_btn->setSizePolicy(sizePolicy1);
        profile_btn->setMinimumSize(QSize(48, 56));
        profile_btn->setMaximumSize(QSize(48, 56));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/res/icon/profile.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        profile_btn->setIcon(icon2);
        profile_btn->setIconSize(QSize(32, 32));

        horizontalLayout_2->addWidget(profile_btn);

        horizontalSpacer_4 = new QSpacerItem(8, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout->addWidget(top_bar);

        body = new QWidget(centralwidget);
        body->setObjectName("body");
        body->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout = new QHBoxLayout(body);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        sidebar = new QWidget(body);
        sidebar->setObjectName("sidebar");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(sidebar->sizePolicy().hasHeightForWidth());
        sidebar->setSizePolicy(sizePolicy3);
        sidebar->setMinimumSize(QSize(72, 0));
        sidebar->setMaximumSize(QSize(72, 16777215));
        sidebar->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	background-color: rgb(255, 255, 255);\n"
"}"));
        sidebar_vlayout = new QVBoxLayout(sidebar);
        sidebar_vlayout->setSpacing(20);
        sidebar_vlayout->setObjectName("sidebar_vlayout");
        sidebar_vlayout->setContentsMargins(0, 16, 0, 0);

        horizontalLayout->addWidget(sidebar);

        stackedWidget = new QStackedWidget(body);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setStyleSheet(QString::fromUtf8("QWidget{\n"
"background-color: rgb(243, 244, 248);\n"
"}"));
        aa_dashboard = new QWidget();
        aa_dashboard->setObjectName("aa_dashboard");
        aa_dashboard->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout_6 = new QHBoxLayout(aa_dashboard);
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        stackedWidget->addWidget(aa_dashboard);
        category = new QWidget();
        category->setObjectName("category");
        categoryGL = new QGridLayout(category);
        categoryGL->setSpacing(0);
        categoryGL->setObjectName("categoryGL");
        categoryGL->setContentsMargins(0, 0, 0, 0);
        stackedWidget->addWidget(category);
        publication = new QWidget();
        publication->setObjectName("publication");
        publicationGL = new QGridLayout(publication);
        publicationGL->setSpacing(0);
        publicationGL->setObjectName("publicationGL");
        publicationGL->setContentsMargins(0, 0, 0, 0);
        stackedWidget->addWidget(publication);
        books = new QWidget();
        books->setObjectName("books");
        books->setStyleSheet(QString::fromUtf8(""));
        booksGL = new QGridLayout(books);
        booksGL->setSpacing(0);
        booksGL->setObjectName("booksGL");
        booksGL->setContentsMargins(0, 0, 0, 0);
        stackedWidget->addWidget(books);

        horizontalLayout->addWidget(stackedWidget);


        verticalLayout->addWidget(body);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        logo_label->setText(QCoreApplication::translate("MainWindow", "LMS", nullptr));
        menu_btn->setText(QString());
        search_le->setPlaceholderText(QCoreApplication::translate("MainWindow", "Search", nullptr));
        notification_btn->setText(QString());
        name_label->setText(QCoreApplication::translate("MainWindow", "Sagar Gupta", nullptr));
        mode_label->setText(QCoreApplication::translate("MainWindow", "Admin", nullptr));
        profile_btn->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
