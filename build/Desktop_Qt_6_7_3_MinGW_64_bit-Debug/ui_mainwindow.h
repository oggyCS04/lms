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
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QWidget *sidebar_1;
    QVBoxLayout *sidebar_vlayout_1;
    QLabel *logo_label_1;
    QPushButton *dashboardBtn_1;
    QPushButton *categoryBtn_1;
    QPushButton *publicationBtn_1;
    QPushButton *bookBtn_1;
    QPushButton *issueBtn_1;
    QPushButton *requestBtn_1;
    QPushButton *regBtn_1;
    QPushButton *reportBtn_1;
    QSpacerItem *verticalSpacer_1;
    QWidget *sidebar_2;
    QVBoxLayout *sidebar_vlayout_2;
    QLabel *logo_label_2;
    QPushButton *dashboardBtn_2;
    QPushButton *categoryBtn_2;
    QPushButton *publicationBtn_2;
    QPushButton *bookBtn_2;
    QPushButton *issueBtn_2;
    QPushButton *requestBtn_2;
    QPushButton *regBtn_2;
    QPushButton *reportBtn_2;
    QSpacerItem *verticalSpacer_2;
    QScrollArea *bodyScrollArea;
    QWidget *body;
    QVBoxLayout *verticalLayout;
    QWidget *top_bar;
    QHBoxLayout *topBarHL;
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
    QStackedWidget *stackedWidget;
    QWidget *dashboard;
    QVBoxLayout *dashboardVL;
    QWidget *category;
    QVBoxLayout *categoryVL;
    QWidget *publication;
    QGridLayout *publicationGL;
    QWidget *books;
    QGridLayout *booksGL;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1096, 688);
        QFont font;
        font.setPointSize(11);
        MainWindow->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/res/image/e-library.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setIconSize(QSize(24, 24));
        MainWindow->setToolButtonStyle(Qt::ToolButtonStyle::ToolButtonFollowStyle);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        sidebar_1 = new QWidget(centralwidget);
        sidebar_1->setObjectName("sidebar_1");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(sidebar_1->sizePolicy().hasHeightForWidth());
        sidebar_1->setSizePolicy(sizePolicy);
        sidebar_1->setMinimumSize(QSize(72, 0));
        sidebar_1->setMaximumSize(QSize(72, 16777215));
        sidebar_1->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	background-color: rgb(10, 37, 88);\n"
"}\n"
"\n"
"QPushButton {\n"
"            color: white;\n"
"			margin-left: 12px;\n"
"			margin-right: 12px;\n"
"            border: none;\n"
"            border-radius: 12px;\n"
"        }\n"
"        QPushButton:hover {\n"
"            background-color: rgb(8, 29, 69);/*#efefef*/\n"
"        }\n"
"        QPushButton:checked{\n"
"             background-color: rgb(8, 29, 69); /*#ebebeb*/\n"
"        }"));
        sidebar_vlayout_1 = new QVBoxLayout(sidebar_1);
        sidebar_vlayout_1->setSpacing(20);
        sidebar_vlayout_1->setObjectName("sidebar_vlayout_1");
        sidebar_vlayout_1->setContentsMargins(0, 0, 0, 0);
        logo_label_1 = new QLabel(sidebar_1);
        logo_label_1->setObjectName("logo_label_1");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(logo_label_1->sizePolicy().hasHeightForWidth());
        logo_label_1->setSizePolicy(sizePolicy1);
        logo_label_1->setMinimumSize(QSize(0, 64));
        logo_label_1->setMaximumSize(QSize(16777215, 64));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Poppins")});
        font1.setPointSize(14);
        font1.setBold(true);
        logo_label_1->setFont(font1);
        logo_label_1->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: white;/*rgb(55, 55, 55)*/\n"
"margin-left: 0px;\n"
"}"));
        logo_label_1->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        logo_label_1->setMargin(0);
        logo_label_1->setIndent(0);

        sidebar_vlayout_1->addWidget(logo_label_1);

        dashboardBtn_1 = new QPushButton(sidebar_1);
        dashboardBtn_1->setObjectName("dashboardBtn_1");
        sizePolicy1.setHeightForWidth(dashboardBtn_1->sizePolicy().hasHeightForWidth());
        dashboardBtn_1->setSizePolicy(sizePolicy1);
        dashboardBtn_1->setMinimumSize(QSize(72, 48));
        dashboardBtn_1->setMaximumSize(QSize(72, 48));
        dashboardBtn_1->setStyleSheet(QString::fromUtf8(""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/res/icon/dashboard-white.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        dashboardBtn_1->setIcon(icon1);
        dashboardBtn_1->setIconSize(QSize(20, 20));
        dashboardBtn_1->setCheckable(true);
        dashboardBtn_1->setChecked(true);
        dashboardBtn_1->setAutoExclusive(true);

        sidebar_vlayout_1->addWidget(dashboardBtn_1);

        categoryBtn_1 = new QPushButton(sidebar_1);
        categoryBtn_1->setObjectName("categoryBtn_1");
        sizePolicy1.setHeightForWidth(categoryBtn_1->sizePolicy().hasHeightForWidth());
        categoryBtn_1->setSizePolicy(sizePolicy1);
        categoryBtn_1->setMinimumSize(QSize(72, 48));
        categoryBtn_1->setMaximumSize(QSize(72, 48));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/res/icon/category-white.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        categoryBtn_1->setIcon(icon2);
        categoryBtn_1->setIconSize(QSize(20, 20));
        categoryBtn_1->setCheckable(true);
        categoryBtn_1->setAutoExclusive(true);

        sidebar_vlayout_1->addWidget(categoryBtn_1);

        publicationBtn_1 = new QPushButton(sidebar_1);
        publicationBtn_1->setObjectName("publicationBtn_1");
        sizePolicy1.setHeightForWidth(publicationBtn_1->sizePolicy().hasHeightForWidth());
        publicationBtn_1->setSizePolicy(sizePolicy1);
        publicationBtn_1->setMinimumSize(QSize(72, 48));
        publicationBtn_1->setMaximumSize(QSize(72, 48));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/res/icon/publication-white.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        publicationBtn_1->setIcon(icon3);
        publicationBtn_1->setIconSize(QSize(20, 20));
        publicationBtn_1->setCheckable(true);
        publicationBtn_1->setAutoExclusive(true);

        sidebar_vlayout_1->addWidget(publicationBtn_1);

        bookBtn_1 = new QPushButton(sidebar_1);
        bookBtn_1->setObjectName("bookBtn_1");
        sizePolicy1.setHeightForWidth(bookBtn_1->sizePolicy().hasHeightForWidth());
        bookBtn_1->setSizePolicy(sizePolicy1);
        bookBtn_1->setMinimumSize(QSize(72, 48));
        bookBtn_1->setMaximumSize(QSize(72, 48));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/res/icon/book-white.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        bookBtn_1->setIcon(icon4);
        bookBtn_1->setIconSize(QSize(20, 20));
        bookBtn_1->setCheckable(true);
        bookBtn_1->setAutoExclusive(true);

        sidebar_vlayout_1->addWidget(bookBtn_1);

        issueBtn_1 = new QPushButton(sidebar_1);
        issueBtn_1->setObjectName("issueBtn_1");
        sizePolicy1.setHeightForWidth(issueBtn_1->sizePolicy().hasHeightForWidth());
        issueBtn_1->setSizePolicy(sizePolicy1);
        issueBtn_1->setMinimumSize(QSize(72, 48));
        issueBtn_1->setMaximumSize(QSize(72, 48));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icons/res/icon/book-issue-white.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        issueBtn_1->setIcon(icon5);
        issueBtn_1->setIconSize(QSize(20, 20));
        issueBtn_1->setCheckable(true);
        issueBtn_1->setAutoExclusive(true);

        sidebar_vlayout_1->addWidget(issueBtn_1);

        requestBtn_1 = new QPushButton(sidebar_1);
        requestBtn_1->setObjectName("requestBtn_1");
        sizePolicy1.setHeightForWidth(requestBtn_1->sizePolicy().hasHeightForWidth());
        requestBtn_1->setSizePolicy(sizePolicy1);
        requestBtn_1->setMinimumSize(QSize(72, 48));
        requestBtn_1->setMaximumSize(QSize(72, 48));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icons/res/icon/request-white.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        requestBtn_1->setIcon(icon6);
        requestBtn_1->setIconSize(QSize(20, 20));
        requestBtn_1->setCheckable(true);
        requestBtn_1->setAutoExclusive(true);

        sidebar_vlayout_1->addWidget(requestBtn_1);

        regBtn_1 = new QPushButton(sidebar_1);
        regBtn_1->setObjectName("regBtn_1");
        sizePolicy1.setHeightForWidth(regBtn_1->sizePolicy().hasHeightForWidth());
        regBtn_1->setSizePolicy(sizePolicy1);
        regBtn_1->setMinimumSize(QSize(72, 48));
        regBtn_1->setMaximumSize(QSize(72, 48));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/icons/res/icon/register-white.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        regBtn_1->setIcon(icon7);
        regBtn_1->setIconSize(QSize(20, 20));
        regBtn_1->setCheckable(true);
        regBtn_1->setAutoExclusive(true);

        sidebar_vlayout_1->addWidget(regBtn_1);

        reportBtn_1 = new QPushButton(sidebar_1);
        reportBtn_1->setObjectName("reportBtn_1");
        sizePolicy1.setHeightForWidth(reportBtn_1->sizePolicy().hasHeightForWidth());
        reportBtn_1->setSizePolicy(sizePolicy1);
        reportBtn_1->setMinimumSize(QSize(72, 48));
        reportBtn_1->setMaximumSize(QSize(72, 48));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/icons/res/icon/report-white.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        reportBtn_1->setIcon(icon8);
        reportBtn_1->setIconSize(QSize(20, 20));
        reportBtn_1->setCheckable(true);
        reportBtn_1->setAutoExclusive(true);

        sidebar_vlayout_1->addWidget(reportBtn_1);

        verticalSpacer_1 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        sidebar_vlayout_1->addItem(verticalSpacer_1);


        horizontalLayout->addWidget(sidebar_1);

        sidebar_2 = new QWidget(centralwidget);
        sidebar_2->setObjectName("sidebar_2");
        sizePolicy.setHeightForWidth(sidebar_2->sizePolicy().hasHeightForWidth());
        sidebar_2->setSizePolicy(sizePolicy);
        sidebar_2->setMinimumSize(QSize(200, 0));
        sidebar_2->setMaximumSize(QSize(200, 16777215));
        sidebar_2->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	background-color: rgb(10, 37, 88);\n"
"}\n"
"\n"
"QPushButton {\n"
"            color: white;\n"
"			text-align: left;\n"
"			margin-left: 12px;\n"
"			margin-right: 12px;\n"
"			padding-left: 12px;\n"
"            border: none;\n"
"            border-radius: 12px;\n"
"        }\n"
"        QPushButton:hover {\n"
"            background-color: rgb(8, 29, 69);\n"
"        }\n"
"        QPushButton:checked{\n"
"             background-color: rgb(8, 29, 69);\n"
"        }"));
        sidebar_vlayout_2 = new QVBoxLayout(sidebar_2);
        sidebar_vlayout_2->setSpacing(20);
        sidebar_vlayout_2->setObjectName("sidebar_vlayout_2");
        sidebar_vlayout_2->setContentsMargins(0, 0, 0, 0);
        logo_label_2 = new QLabel(sidebar_2);
        logo_label_2->setObjectName("logo_label_2");
        sizePolicy1.setHeightForWidth(logo_label_2->sizePolicy().hasHeightForWidth());
        logo_label_2->setSizePolicy(sizePolicy1);
        logo_label_2->setMinimumSize(QSize(0, 64));
        logo_label_2->setMaximumSize(QSize(16777215, 64));
        logo_label_2->setFont(font1);
        logo_label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: white;\n"
"}"));
        logo_label_2->setTextFormat(Qt::TextFormat::AutoText);
        logo_label_2->setScaledContents(false);
        logo_label_2->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        logo_label_2->setIndent(0);

        sidebar_vlayout_2->addWidget(logo_label_2);

        dashboardBtn_2 = new QPushButton(sidebar_2);
        dashboardBtn_2->setObjectName("dashboardBtn_2");
        sizePolicy1.setHeightForWidth(dashboardBtn_2->sizePolicy().hasHeightForWidth());
        dashboardBtn_2->setSizePolicy(sizePolicy1);
        dashboardBtn_2->setMinimumSize(QSize(200, 48));
        dashboardBtn_2->setMaximumSize(QSize(200, 48));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Poppins Medium")});
        font2.setPointSize(12);
        font2.setBold(false);
        dashboardBtn_2->setFont(font2);
        dashboardBtn_2->setStyleSheet(QString::fromUtf8(""));
        dashboardBtn_2->setIcon(icon1);
        dashboardBtn_2->setIconSize(QSize(20, 20));
        dashboardBtn_2->setCheckable(true);
        dashboardBtn_2->setChecked(true);
        dashboardBtn_2->setAutoExclusive(true);
        dashboardBtn_2->setAutoDefault(false);
        dashboardBtn_2->setFlat(false);

        sidebar_vlayout_2->addWidget(dashboardBtn_2);

        categoryBtn_2 = new QPushButton(sidebar_2);
        categoryBtn_2->setObjectName("categoryBtn_2");
        sizePolicy1.setHeightForWidth(categoryBtn_2->sizePolicy().hasHeightForWidth());
        categoryBtn_2->setSizePolicy(sizePolicy1);
        categoryBtn_2->setMinimumSize(QSize(200, 48));
        categoryBtn_2->setMaximumSize(QSize(200, 48));
        categoryBtn_2->setFont(font2);
        categoryBtn_2->setIcon(icon2);
        categoryBtn_2->setIconSize(QSize(20, 20));
        categoryBtn_2->setCheckable(true);
        categoryBtn_2->setAutoExclusive(true);

        sidebar_vlayout_2->addWidget(categoryBtn_2);

        publicationBtn_2 = new QPushButton(sidebar_2);
        publicationBtn_2->setObjectName("publicationBtn_2");
        sizePolicy1.setHeightForWidth(publicationBtn_2->sizePolicy().hasHeightForWidth());
        publicationBtn_2->setSizePolicy(sizePolicy1);
        publicationBtn_2->setMinimumSize(QSize(200, 48));
        publicationBtn_2->setMaximumSize(QSize(200, 48));
        publicationBtn_2->setFont(font2);
        publicationBtn_2->setIcon(icon3);
        publicationBtn_2->setIconSize(QSize(20, 20));
        publicationBtn_2->setCheckable(true);
        publicationBtn_2->setAutoExclusive(true);

        sidebar_vlayout_2->addWidget(publicationBtn_2);

        bookBtn_2 = new QPushButton(sidebar_2);
        bookBtn_2->setObjectName("bookBtn_2");
        sizePolicy1.setHeightForWidth(bookBtn_2->sizePolicy().hasHeightForWidth());
        bookBtn_2->setSizePolicy(sizePolicy1);
        bookBtn_2->setMinimumSize(QSize(200, 48));
        bookBtn_2->setMaximumSize(QSize(200, 48));
        bookBtn_2->setFont(font2);
        bookBtn_2->setIcon(icon4);
        bookBtn_2->setIconSize(QSize(20, 20));
        bookBtn_2->setCheckable(true);
        bookBtn_2->setAutoExclusive(true);

        sidebar_vlayout_2->addWidget(bookBtn_2);

        issueBtn_2 = new QPushButton(sidebar_2);
        issueBtn_2->setObjectName("issueBtn_2");
        sizePolicy1.setHeightForWidth(issueBtn_2->sizePolicy().hasHeightForWidth());
        issueBtn_2->setSizePolicy(sizePolicy1);
        issueBtn_2->setMinimumSize(QSize(200, 48));
        issueBtn_2->setMaximumSize(QSize(200, 48));
        issueBtn_2->setFont(font2);
        issueBtn_2->setIcon(icon5);
        issueBtn_2->setIconSize(QSize(20, 20));
        issueBtn_2->setCheckable(true);
        issueBtn_2->setAutoExclusive(true);

        sidebar_vlayout_2->addWidget(issueBtn_2);

        requestBtn_2 = new QPushButton(sidebar_2);
        requestBtn_2->setObjectName("requestBtn_2");
        sizePolicy1.setHeightForWidth(requestBtn_2->sizePolicy().hasHeightForWidth());
        requestBtn_2->setSizePolicy(sizePolicy1);
        requestBtn_2->setMinimumSize(QSize(200, 48));
        requestBtn_2->setMaximumSize(QSize(200, 48));
        requestBtn_2->setFont(font2);
        requestBtn_2->setIcon(icon6);
        requestBtn_2->setIconSize(QSize(20, 20));
        requestBtn_2->setCheckable(true);
        requestBtn_2->setAutoExclusive(true);

        sidebar_vlayout_2->addWidget(requestBtn_2);

        regBtn_2 = new QPushButton(sidebar_2);
        regBtn_2->setObjectName("regBtn_2");
        sizePolicy1.setHeightForWidth(regBtn_2->sizePolicy().hasHeightForWidth());
        regBtn_2->setSizePolicy(sizePolicy1);
        regBtn_2->setMinimumSize(QSize(200, 48));
        regBtn_2->setMaximumSize(QSize(200, 48));
        regBtn_2->setFont(font2);
        regBtn_2->setIcon(icon7);
        regBtn_2->setIconSize(QSize(20, 20));
        regBtn_2->setCheckable(true);
        regBtn_2->setAutoExclusive(true);

        sidebar_vlayout_2->addWidget(regBtn_2);

        reportBtn_2 = new QPushButton(sidebar_2);
        reportBtn_2->setObjectName("reportBtn_2");
        sizePolicy1.setHeightForWidth(reportBtn_2->sizePolicy().hasHeightForWidth());
        reportBtn_2->setSizePolicy(sizePolicy1);
        reportBtn_2->setMinimumSize(QSize(200, 48));
        reportBtn_2->setMaximumSize(QSize(200, 48));
        reportBtn_2->setFont(font2);
        reportBtn_2->setIcon(icon8);
        reportBtn_2->setIconSize(QSize(20, 20));
        reportBtn_2->setCheckable(true);
        reportBtn_2->setAutoExclusive(true);

        sidebar_vlayout_2->addWidget(reportBtn_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        sidebar_vlayout_2->addItem(verticalSpacer_2);


        horizontalLayout->addWidget(sidebar_2);

        bodyScrollArea = new QScrollArea(centralwidget);
        bodyScrollArea->setObjectName("bodyScrollArea");
        bodyScrollArea->setWidgetResizable(true);
        body = new QWidget();
        body->setObjectName("body");
        body->setGeometry(QRect(0, 0, 822, 686));
        body->setStyleSheet(QString::fromUtf8("background-color: rgb(243, 244, 248);"));
        verticalLayout = new QVBoxLayout(body);
        verticalLayout->setSpacing(8);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        top_bar = new QWidget(body);
        top_bar->setObjectName("top_bar");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(top_bar->sizePolicy().hasHeightForWidth());
        top_bar->setSizePolicy(sizePolicy2);
        top_bar->setMinimumSize(QSize(0, 64));
        top_bar->setMaximumSize(QSize(16777215, 64));
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
        topBarHL = new QHBoxLayout(top_bar);
        topBarHL->setSpacing(0);
        topBarHL->setObjectName("topBarHL");
        topBarHL->setContentsMargins(0, 0, 0, 0);
        menu_btn = new QPushButton(top_bar);
        menu_btn->setObjectName("menu_btn");
        sizePolicy1.setHeightForWidth(menu_btn->sizePolicy().hasHeightForWidth());
        menu_btn->setSizePolicy(sizePolicy1);
        menu_btn->setMinimumSize(QSize(48, 64));
        menu_btn->setMaximumSize(QSize(48, 64));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/images/res/image/menu.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        menu_btn->setIcon(icon9);
        menu_btn->setIconSize(QSize(24, 24));
        menu_btn->setCheckable(true);
        menu_btn->setChecked(false);

        topBarHL->addWidget(menu_btn);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        topBarHL->addItem(horizontalSpacer);

        search_le = new QLineEdit(top_bar);
        search_le->setObjectName("search_le");
        sizePolicy1.setHeightForWidth(search_le->sizePolicy().hasHeightForWidth());
        search_le->setSizePolicy(sizePolicy1);
        search_le->setMinimumSize(QSize(200, 36));
        search_le->setMaximumSize(QSize(200, 36));
        search_le->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"background-color: rgb(230, 230, 230);\n"
"border: 1px solid rgb(228, 228, 228);\n"
"border-radius: 16px;\n"
"padding-left: 12px;\n"
"color: rgb(79, 79, 79);\n"
"}"));
        search_le->setCursorMoveStyle(Qt::CursorMoveStyle::LogicalMoveStyle);

        topBarHL->addWidget(search_le);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        topBarHL->addItem(horizontalSpacer_2);

        notification_btn = new QPushButton(top_bar);
        notification_btn->setObjectName("notification_btn");
        sizePolicy1.setHeightForWidth(notification_btn->sizePolicy().hasHeightForWidth());
        notification_btn->setSizePolicy(sizePolicy1);
        notification_btn->setMinimumSize(QSize(48, 65));
        notification_btn->setMaximumSize(QSize(48, 64));
        notification_btn->setStyleSheet(QString::fromUtf8(""));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/icons/res/icon/bell.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        notification_btn->setIcon(icon10);
        notification_btn->setIconSize(QSize(24, 24));

        topBarHL->addWidget(notification_btn);

        horizontalSpacer_3 = new QSpacerItem(32, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        topBarHL->addItem(horizontalSpacer_3);

        name_layout = new QVBoxLayout();
        name_layout->setSpacing(2);
        name_layout->setObjectName("name_layout");
        name_layout->setContentsMargins(-1, -1, 4, -1);
        name_label = new QLabel(top_bar);
        name_label->setObjectName("name_label");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(name_label->sizePolicy().hasHeightForWidth());
        name_label->setSizePolicy(sizePolicy3);
        name_label->setMinimumSize(QSize(0, 0));
        name_label->setMaximumSize(QSize(16777215, 16777215));
        QFont font3;
        font3.setPointSize(10);
        font3.setWeight(QFont::DemiBold);
        name_label->setFont(font3);
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

        topBarHL->addLayout(name_layout);

        profile_btn = new QPushButton(top_bar);
        profile_btn->setObjectName("profile_btn");
        sizePolicy1.setHeightForWidth(profile_btn->sizePolicy().hasHeightForWidth());
        profile_btn->setSizePolicy(sizePolicy1);
        profile_btn->setMinimumSize(QSize(48, 64));
        profile_btn->setMaximumSize(QSize(48, 64));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/icons/res/icon/profile.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        profile_btn->setIcon(icon11);
        profile_btn->setIconSize(QSize(32, 32));

        topBarHL->addWidget(profile_btn);

        horizontalSpacer_4 = new QSpacerItem(8, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        topBarHL->addItem(horizontalSpacer_4);


        verticalLayout->addWidget(top_bar);

        stackedWidget = new QStackedWidget(body);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setStyleSheet(QString::fromUtf8("QWidget{\n"
"background-color: rgb(243, 244, 248);\n"
"}"));
        dashboard = new QWidget();
        dashboard->setObjectName("dashboard");
        dashboard->setStyleSheet(QString::fromUtf8(""));
        dashboardVL = new QVBoxLayout(dashboard);
        dashboardVL->setSpacing(0);
        dashboardVL->setObjectName("dashboardVL");
        dashboardVL->setContentsMargins(0, 0, 0, 0);
        stackedWidget->addWidget(dashboard);
        category = new QWidget();
        category->setObjectName("category");
        categoryVL = new QVBoxLayout(category);
        categoryVL->setSpacing(0);
        categoryVL->setObjectName("categoryVL");
        categoryVL->setContentsMargins(0, 0, 0, 0);
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

        verticalLayout->addWidget(stackedWidget);

        bodyScrollArea->setWidget(body);

        horizontalLayout->addWidget(bodyScrollArea);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);
        QObject::connect(dashboardBtn_1, &QPushButton::toggled, dashboardBtn_2, &QPushButton::setChecked);
        QObject::connect(categoryBtn_1, &QPushButton::toggled, categoryBtn_2, &QPushButton::setChecked);
        QObject::connect(publicationBtn_1, &QPushButton::toggled, publicationBtn_2, &QPushButton::setChecked);
        QObject::connect(bookBtn_1, &QPushButton::toggled, bookBtn_2, &QPushButton::setChecked);
        QObject::connect(issueBtn_1, &QPushButton::toggled, issueBtn_2, &QPushButton::setChecked);
        QObject::connect(requestBtn_1, &QPushButton::toggled, requestBtn_2, &QPushButton::setChecked);
        QObject::connect(regBtn_1, &QPushButton::toggled, regBtn_2, &QPushButton::setChecked);
        QObject::connect(reportBtn_1, &QPushButton::toggled, reportBtn_2, &QPushButton::setChecked);
        QObject::connect(dashboardBtn_2, &QPushButton::toggled, dashboardBtn_1, &QPushButton::setChecked);
        QObject::connect(categoryBtn_2, &QPushButton::toggled, categoryBtn_1, &QPushButton::setChecked);
        QObject::connect(publicationBtn_2, &QPushButton::toggled, publicationBtn_1, &QPushButton::setChecked);
        QObject::connect(bookBtn_2, &QPushButton::toggled, bookBtn_1, &QPushButton::setChecked);
        QObject::connect(issueBtn_2, &QPushButton::toggled, issueBtn_1, &QPushButton::setChecked);
        QObject::connect(requestBtn_2, &QPushButton::toggled, requestBtn_1, &QPushButton::setChecked);
        QObject::connect(regBtn_2, &QPushButton::toggled, regBtn_1, &QPushButton::setChecked);
        QObject::connect(reportBtn_2, &QPushButton::toggled, reportBtn_1, &QPushButton::setChecked);
        QObject::connect(menu_btn, &QPushButton::toggled, sidebar_1, &QWidget::setHidden);
        QObject::connect(menu_btn, &QPushButton::toggled, sidebar_2, &QWidget::setVisible);

        dashboardBtn_2->setDefault(false);
        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Library Management System", nullptr));
        logo_label_1->setText(QCoreApplication::translate("MainWindow", "LMS", nullptr));
        dashboardBtn_1->setText(QString());
        categoryBtn_1->setText(QString());
        publicationBtn_1->setText(QString());
        bookBtn_1->setText(QString());
        issueBtn_1->setText(QString());
        requestBtn_1->setText(QString());
        regBtn_1->setText(QString());
        reportBtn_1->setText(QString());
        logo_label_2->setText(QCoreApplication::translate("MainWindow", "LMS", nullptr));
        dashboardBtn_2->setText(QCoreApplication::translate("MainWindow", "  Dashboard", nullptr));
        categoryBtn_2->setText(QCoreApplication::translate("MainWindow", "  Categories", nullptr));
        publicationBtn_2->setText(QCoreApplication::translate("MainWindow", "  Publications", nullptr));
        bookBtn_2->setText(QCoreApplication::translate("MainWindow", "  Books", nullptr));
        issueBtn_2->setText(QCoreApplication::translate("MainWindow", "  Book Issue", nullptr));
        requestBtn_2->setText(QCoreApplication::translate("MainWindow", "  Book Request", nullptr));
        regBtn_2->setText(QCoreApplication::translate("MainWindow", "  Reg. Student", nullptr));
        reportBtn_2->setText(QCoreApplication::translate("MainWindow", "  Report", nullptr));
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
