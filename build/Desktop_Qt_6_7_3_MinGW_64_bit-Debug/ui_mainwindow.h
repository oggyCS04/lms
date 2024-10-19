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
#include <QtWidgets/QFrame>
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
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QWidget *sidebar;
    QVBoxLayout *sidebar_vlayout;
    QStackedWidget *stackedWidget;
    QWidget *aa_dashboard;
    QHBoxLayout *horizontalLayout_6;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QFrame *frame;
    QFrame *frame_2;
    QFrame *frame_3;
    QFrame *frame_4;
    QHBoxLayout *horizontalLayout_5;
    QWidget *widget;
    QWidget *widget_3;
    QWidget *widget_4;
    QWidget *category;
    QVBoxLayout *verticalLayout_2;
    QWidget *category_header;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *addCategoryBtn;
    QPushButton *manageCategoryBtn;
    QSpacerItem *categorySpacer;
    QStackedWidget *category_stackedWidget;
    QWidget *addCategoryWidget;
    QLabel *label;
    QWidget *manageCategoryWidget;
    QLabel *label_2;
    QWidget *testPage_1;
    QLabel *label_3;
    QWidget *testPage_2;
    QLabel *label_4;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1132, 650);
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
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        logo_label->setFont(font);
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
        QFont font1;
        font1.setPointSize(10);
        font1.setWeight(QFont::DemiBold);
        name_label->setFont(font1);
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

        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName("widget_2");
        widget_2->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        sidebar = new QWidget(widget_2);
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

        stackedWidget = new QStackedWidget(widget_2);
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
        scrollArea = new QScrollArea(aa_dashboard);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setStyleSheet(QString::fromUtf8("\n"
"QScrollBar:vertical {;\n"
"	background-color: rgb(85, 255, 127);\n"
"    background: rgb(241, 241, 241);\n"
"    width: 14px;\n"
"    margin: 15px 0 15px 0;\n"
" }\n"
"\n"
"/*  HANDLE BAR VERTICAL */\n"
"QScrollBar::handle:vertical {	\n"
"	background-color: rgb(127, 127, 127);\n"
"	min-height: 30px;\n"
"	border-radius: 7px;\n"
"}\n"
"QScrollBar::handle:vertical:hover{	\n"
"	background-color: rgb(180, 180, 180);\n"
"}\n"
"QScrollBar::handle:vertical:pressed {	\n"
"	background-color: rgb(127, 127, 127);\n"
"}\n"
"\n"
"/* BTN TOP - SCROLLBAR */\n"
"QScrollBar::sub-line:vertical {\n"
"	border: none;\n"
"	background-color: rgb(241, 241, 241);\n"
"	height: 15px;\n"
"	subcontrol-position: top;\n"
"	subcontrol-origin: margin;\n"
"}\n"
"QScrollBar::sub-line:vertical:hover {	\n"
"	background-color: rgb(180, 180, 180);\n"
"}\n"
"QScrollBar::sub-line:vertical:pressed {	\n"
"	background-color: rgb(127, 127, 127);\n"
"}\n"
"/* BTN BOTTOM - SCROLLBAR */\n"
"QScrollBar::add-line:vertical {\n"
"	border: none;\n"
"	backgro"
                        "und-color: rgb(241, 241, 241);\n"
"	height: 15px;\n"
"	subcontrol-position: bottom;\n"
"	subcontrol-origin: margin;\n"
"}\n"
"QScrollBar::add-line:vertical:hover {	\n"
"	background-color: rgb(180, 180, 180);\n"
"}\n"
"QScrollBar::add-line:vertical:pressed {	\n"
"	background-color:rgb(127, 127, 127);\n"
"}\n"
"\n"
"\n"
"\n"
"/* RESET ARROW */\n"
"QScrollBar::up-arrow:vertical, QScrollBar::down-arrow:vertical {\n"
"	background: none;\n"
"}\n"
"QScrollBar::add-page:vertical, QScrollBar::sub-page:vertical {\n"
"	background:  none;\n"
"}\n"
"\n"
""));
        scrollArea->setFrameShape(QFrame::Shape::StyledPanel);
        scrollArea->setFrameShadow(QFrame::Shadow::Sunken);
        scrollArea->setLineWidth(1);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1044, 770));
        scrollAreaWidgetContents->setStyleSheet(QString::fromUtf8("QFrame{\n"
"background-color: white;\n"
"border: 1px solid rgb(199, 199, 199);\n"
"border-radius: 16px;\n"
"}\n"
""));
        verticalLayout_3 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(24);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(24, 24, 24, 24);
        frame = new QFrame(scrollAreaWidgetContents);
        frame->setObjectName("frame");
        QSizePolicy sizePolicy4(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy4);
        frame->setMinimumSize(QSize(150, 120));
        frame->setMaximumSize(QSize(16777215, 120));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        frame->setLineWidth(1);
        frame->setMidLineWidth(0);

        horizontalLayout_4->addWidget(frame);

        frame_2 = new QFrame(scrollAreaWidgetContents);
        frame_2->setObjectName("frame_2");
        sizePolicy4.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy4);
        frame_2->setMinimumSize(QSize(150, 120));
        frame_2->setMaximumSize(QSize(16777215, 120));
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        frame_2->setLineWidth(1);
        frame_2->setMidLineWidth(0);

        horizontalLayout_4->addWidget(frame_2);

        frame_3 = new QFrame(scrollAreaWidgetContents);
        frame_3->setObjectName("frame_3");
        sizePolicy4.setHeightForWidth(frame_3->sizePolicy().hasHeightForWidth());
        frame_3->setSizePolicy(sizePolicy4);
        frame_3->setMinimumSize(QSize(150, 120));
        frame_3->setMaximumSize(QSize(16777215, 120));
        frame_3->setFrameShape(QFrame::Shape::StyledPanel);
        frame_3->setFrameShadow(QFrame::Shadow::Raised);
        frame_3->setLineWidth(1);
        frame_3->setMidLineWidth(0);

        horizontalLayout_4->addWidget(frame_3);

        frame_4 = new QFrame(scrollAreaWidgetContents);
        frame_4->setObjectName("frame_4");
        sizePolicy4.setHeightForWidth(frame_4->sizePolicy().hasHeightForWidth());
        frame_4->setSizePolicy(sizePolicy4);
        frame_4->setMinimumSize(QSize(150, 120));
        frame_4->setMaximumSize(QSize(16777215, 120));
        frame_4->setFrameShape(QFrame::Shape::StyledPanel);
        frame_4->setFrameShadow(QFrame::Shadow::Raised);
        frame_4->setLineWidth(1);
        frame_4->setMidLineWidth(0);

        horizontalLayout_4->addWidget(frame_4);


        verticalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        widget = new QWidget(scrollAreaWidgetContents);
        widget->setObjectName("widget");
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        widget->setMinimumSize(QSize(0, 200));
        widget->setMaximumSize(QSize(16777215, 200));

        horizontalLayout_5->addWidget(widget);

        widget_3 = new QWidget(scrollAreaWidgetContents);
        widget_3->setObjectName("widget_3");
        widget_3->setStyleSheet(QString::fromUtf8("QWidget{\n"
"background-color: rgb(255, 170, 127);\n"
"}"));

        horizontalLayout_5->addWidget(widget_3);


        verticalLayout_3->addLayout(horizontalLayout_5);

        widget_4 = new QWidget(scrollAreaWidgetContents);
        widget_4->setObjectName("widget_4");
        sizePolicy.setHeightForWidth(widget_4->sizePolicy().hasHeightForWidth());
        widget_4->setSizePolicy(sizePolicy);
        widget_4->setMinimumSize(QSize(0, 400));
        widget_4->setMaximumSize(QSize(16777215, 400));

        verticalLayout_3->addWidget(widget_4);

        scrollArea->setWidget(scrollAreaWidgetContents);

        horizontalLayout_6->addWidget(scrollArea);

        stackedWidget->addWidget(aa_dashboard);
        category = new QWidget();
        category->setObjectName("category");
        verticalLayout_2 = new QVBoxLayout(category);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        category_header = new QWidget(category);
        category_header->setObjectName("category_header");
        sizePolicy.setHeightForWidth(category_header->sizePolicy().hasHeightForWidth());
        category_header->setSizePolicy(sizePolicy);
        category_header->setMinimumSize(QSize(0, 64));
        category_header->setMaximumSize(QSize(16777215, 64));
        category_header->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color: black;\n"
"background-color: rgb(255, 255, 255);\n"
"border: 1px solid white;\n"
"padding: 10px;\n"
"border-radius: 12px;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background-color: #ebebeb;\n"
"border: 1px solid rgb(236, 236, 236);\n"
"}\n"
"\n"
"QPushButton:checked{\n"
"color: white;\n"
"background-color: black;\n"
"}"));
        horizontalLayout_3 = new QHBoxLayout(category_header);
        horizontalLayout_3->setSpacing(11);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        addCategoryBtn = new QPushButton(category_header);
        addCategoryBtn->setObjectName("addCategoryBtn");
        sizePolicy1.setHeightForWidth(addCategoryBtn->sizePolicy().hasHeightForWidth());
        addCategoryBtn->setSizePolicy(sizePolicy1);
        QFont font2;
        font2.setPointSize(11);
        font2.setWeight(QFont::DemiBold);
        addCategoryBtn->setFont(font2);
        addCategoryBtn->setCheckable(true);
        addCategoryBtn->setChecked(true);
        addCategoryBtn->setAutoExclusive(true);

        horizontalLayout_3->addWidget(addCategoryBtn);

        manageCategoryBtn = new QPushButton(category_header);
        manageCategoryBtn->setObjectName("manageCategoryBtn");
        sizePolicy1.setHeightForWidth(manageCategoryBtn->sizePolicy().hasHeightForWidth());
        manageCategoryBtn->setSizePolicy(sizePolicy1);
        manageCategoryBtn->setFont(font2);
        manageCategoryBtn->setCheckable(true);
        manageCategoryBtn->setChecked(false);
        manageCategoryBtn->setAutoExclusive(true);

        horizontalLayout_3->addWidget(manageCategoryBtn);

        categorySpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(categorySpacer);


        verticalLayout_2->addWidget(category_header);

        category_stackedWidget = new QStackedWidget(category);
        category_stackedWidget->setObjectName("category_stackedWidget");
        addCategoryWidget = new QWidget();
        addCategoryWidget->setObjectName("addCategoryWidget");
        label = new QLabel(addCategoryWidget);
        label->setObjectName("label");
        label->setGeometry(QRect(400, 210, 191, 20));
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: black;\n"
"}"));
        category_stackedWidget->addWidget(addCategoryWidget);
        manageCategoryWidget = new QWidget();
        manageCategoryWidget->setObjectName("manageCategoryWidget");
        label_2 = new QLabel(manageCategoryWidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(380, 200, 161, 20));
        label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: black;\n"
"}"));
        category_stackedWidget->addWidget(manageCategoryWidget);

        verticalLayout_2->addWidget(category_stackedWidget);

        stackedWidget->addWidget(category);
        testPage_1 = new QWidget();
        testPage_1->setObjectName("testPage_1");
        label_3 = new QLabel(testPage_1);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(470, 250, 91, 20));
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        stackedWidget->addWidget(testPage_1);
        testPage_2 = new QWidget();
        testPage_2->setObjectName("testPage_2");
        label_4 = new QLabel(testPage_2);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(450, 250, 101, 20));
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);"));
        stackedWidget->addWidget(testPage_2);

        horizontalLayout->addWidget(stackedWidget);


        verticalLayout->addWidget(widget_2);

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
        addCategoryBtn->setText(QCoreApplication::translate("MainWindow", "Add Category", nullptr));
        manageCategoryBtn->setText(QCoreApplication::translate("MainWindow", "Manage Categories", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Add Category", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Manage Category", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Test Page 1", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Test Page 2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
