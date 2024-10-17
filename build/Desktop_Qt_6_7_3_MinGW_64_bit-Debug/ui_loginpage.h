/********************************************************************************
** Form generated from reading UI file 'loginpage.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINPAGE_H
#define UI_LOGINPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginPage
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QWidget *widget;
    QGridLayout *gridLayout;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QLabel *label;
    QWidget *widget_2;
    QGridLayout *gridLayout_2;
    QWidget *widget_4;
    QVBoxLayout *login_layout;
    QLabel *login_title;
    QLineEdit *username_le;
    QLineEdit *password_le;
    QPushButton *login_btn;

    void setupUi(QMainWindow *LoginPage)
    {
        if (LoginPage->objectName().isEmpty())
            LoginPage->setObjectName("LoginPage");
        LoginPage->resize(1082, 769);
        centralwidget = new QWidget(LoginPage);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        widget->setAutoFillBackground(false);
        widget->setStyleSheet(QString::fromUtf8("QWidget{\n"
"background-color: rgb(255, 255, 255);\n"
"}"));
        gridLayout = new QGridLayout(widget);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        widget_3 = new QWidget(widget);
        widget_3->setObjectName("widget_3");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget_3->sizePolicy().hasHeightForWidth());
        widget_3->setSizePolicy(sizePolicy);
        widget_3->setStyleSheet(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(widget_3);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(widget_3);
        frame->setObjectName("frame");
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setMinimumSize(QSize(200, 200));
        frame->setStyleSheet(QString::fromUtf8("QFrame{\n"
"border-image: url(:/images/res/image/digital-library.png) 0 0 0 0 stretch stretch;\n"
"}"));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);

        verticalLayout->addWidget(frame);

        label = new QLabel(widget_3);
        label->setObjectName("label");
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(16);
        font.setWeight(QFont::DemiBold);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: black;\n"
"}"));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label);


        gridLayout->addWidget(widget_3, 0, 0, 1, 1);


        horizontalLayout->addWidget(widget);

        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName("widget_2");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy1);
        widget_2->setStyleSheet(QString::fromUtf8("QWidget{\n"
"background-color: rgb(243, 244, 248);\n"
"}"));
        gridLayout_2 = new QGridLayout(widget_2);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        widget_4 = new QWidget(widget_2);
        widget_4->setObjectName("widget_4");
        sizePolicy.setHeightForWidth(widget_4->sizePolicy().hasHeightForWidth());
        widget_4->setSizePolicy(sizePolicy);
        widget_4->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"background-color: rgb(230, 230, 230);\n"
"border: 1px solid rgb(228, 228, 228);\n"
"border-radius: 18px;\n"
"padding-left: 12px;\n"
"color: rgb(79, 79, 79);\n"
"}"));
        login_layout = new QVBoxLayout(widget_4);
        login_layout->setSpacing(24);
        login_layout->setObjectName("login_layout");
        login_layout->setContentsMargins(0, 0, 0, 0);
        login_title = new QLabel(widget_4);
        login_title->setObjectName("login_title");
        sizePolicy.setHeightForWidth(login_title->sizePolicy().hasHeightForWidth());
        login_title->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(12);
        font1.setWeight(QFont::DemiBold);
        login_title->setFont(font1);
        login_title->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: black;\n"
"}"));
        login_title->setAlignment(Qt::AlignmentFlag::AlignCenter);

        login_layout->addWidget(login_title);

        username_le = new QLineEdit(widget_4);
        username_le->setObjectName("username_le");
        sizePolicy.setHeightForWidth(username_le->sizePolicy().hasHeightForWidth());
        username_le->setSizePolicy(sizePolicy);
        username_le->setMinimumSize(QSize(250, 36));
        username_le->setMaximumSize(QSize(250, 36));
        QPalette palette;
        QBrush brush(QColor(79, 79, 79, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(230, 230, 230, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush2(QColor(79, 79, 79, 128));
        brush2.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        username_le->setPalette(palette);
        QFont font2;
        font2.setPointSize(11);
        username_le->setFont(font2);
        username_le->setToolTipDuration(-1);
        username_le->setStyleSheet(QString::fromUtf8(""));
        username_le->setFrame(true);
        username_le->setCursorPosition(0);
        username_le->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);

        login_layout->addWidget(username_le);

        password_le = new QLineEdit(widget_4);
        password_le->setObjectName("password_le");
        sizePolicy.setHeightForWidth(password_le->sizePolicy().hasHeightForWidth());
        password_le->setSizePolicy(sizePolicy);
        password_le->setMinimumSize(QSize(250, 36));
        password_le->setMaximumSize(QSize(250, 36));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        password_le->setPalette(palette1);
        password_le->setFont(font2);

        login_layout->addWidget(password_le);

        login_btn = new QPushButton(widget_4);
        login_btn->setObjectName("login_btn");
        sizePolicy.setHeightForWidth(login_btn->sizePolicy().hasHeightForWidth());
        login_btn->setSizePolicy(sizePolicy);
        login_btn->setMinimumSize(QSize(100, 36));
        login_btn->setMaximumSize(QSize(100, 36));
        login_btn->setFont(font1);
        login_btn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(111, 181, 83);\n"
"border: 1px solid rgb(111, 181, 83);\n"
"border-radius: 18px;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 0, 0);\n"
"border: 1px solid black;\n"
"border-radius: 18px;\n"
"}\n"
""));

        login_layout->addWidget(login_btn);


        gridLayout_2->addWidget(widget_4, 0, 0, 1, 1);


        horizontalLayout->addWidget(widget_2);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 1);
        LoginPage->setCentralWidget(centralwidget);

        retranslateUi(LoginPage);

        QMetaObject::connectSlotsByName(LoginPage);
    } // setupUi

    void retranslateUi(QMainWindow *LoginPage)
    {
        LoginPage->setWindowTitle(QCoreApplication::translate("LoginPage", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("LoginPage", "Library Management System", nullptr));
        login_title->setText(QCoreApplication::translate("LoginPage", "Admin Login", nullptr));
        username_le->setInputMask(QString());
        username_le->setPlaceholderText(QCoreApplication::translate("LoginPage", "Username", nullptr));
        password_le->setText(QString());
        password_le->setPlaceholderText(QCoreApplication::translate("LoginPage", "Password", nullptr));
        login_btn->setText(QCoreApplication::translate("LoginPage", "Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginPage: public Ui_LoginPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINPAGE_H
