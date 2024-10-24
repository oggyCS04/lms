/********************************************************************************
** Form generated from reading UI file 'bookform.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOKFORM_H
#define UI_BOOKFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BookFragment
{
public:
    QVBoxLayout *bookFragmentVL;
    QWidget *bookHeader;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *addBooksBtn;
    QPushButton *manageBooksBtn;
    QSpacerItem *booksSpacer;
    QStackedWidget *bookStackedWidget;
    QWidget *page;
    QWidget *page_2;

    void setupUi(QWidget *BookFragment)
    {
        if (BookFragment->objectName().isEmpty())
            BookFragment->setObjectName("BookFragment");
        BookFragment->resize(938, 622);
        bookFragmentVL = new QVBoxLayout(BookFragment);
        bookFragmentVL->setSpacing(0);
        bookFragmentVL->setObjectName("bookFragmentVL");
        bookFragmentVL->setContentsMargins(0, 0, 0, 0);
        bookHeader = new QWidget(BookFragment);
        bookHeader->setObjectName("bookHeader");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(bookHeader->sizePolicy().hasHeightForWidth());
        bookHeader->setSizePolicy(sizePolicy);
        bookHeader->setMinimumSize(QSize(0, 64));
        bookHeader->setMaximumSize(QSize(16777215, 64));
        bookHeader->setStyleSheet(QString::fromUtf8("QWidget{\n"
"border-bottom: 1px solid lightgray;\n"
"}\n"
"\n"
"QPushButton{\n"
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
        horizontalLayout_3 = new QHBoxLayout(bookHeader);
        horizontalLayout_3->setSpacing(11);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        addBooksBtn = new QPushButton(bookHeader);
        addBooksBtn->setObjectName("addBooksBtn");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(addBooksBtn->sizePolicy().hasHeightForWidth());
        addBooksBtn->setSizePolicy(sizePolicy1);
        QFont font;
        font.setPointSize(11);
        font.setWeight(QFont::DemiBold);
        addBooksBtn->setFont(font);
        addBooksBtn->setCheckable(true);
        addBooksBtn->setChecked(true);
        addBooksBtn->setAutoExclusive(true);

        horizontalLayout_3->addWidget(addBooksBtn);

        manageBooksBtn = new QPushButton(bookHeader);
        manageBooksBtn->setObjectName("manageBooksBtn");
        sizePolicy1.setHeightForWidth(manageBooksBtn->sizePolicy().hasHeightForWidth());
        manageBooksBtn->setSizePolicy(sizePolicy1);
        manageBooksBtn->setFont(font);
        manageBooksBtn->setCheckable(true);
        manageBooksBtn->setChecked(false);
        manageBooksBtn->setAutoExclusive(true);

        horizontalLayout_3->addWidget(manageBooksBtn);

        booksSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(booksSpacer);


        bookFragmentVL->addWidget(bookHeader);

        bookStackedWidget = new QStackedWidget(BookFragment);
        bookStackedWidget->setObjectName("bookStackedWidget");
        page = new QWidget();
        page->setObjectName("page");
        bookStackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        bookStackedWidget->addWidget(page_2);

        bookFragmentVL->addWidget(bookStackedWidget);


        retranslateUi(BookFragment);

        QMetaObject::connectSlotsByName(BookFragment);
    } // setupUi

    void retranslateUi(QWidget *BookFragment)
    {
        BookFragment->setWindowTitle(QCoreApplication::translate("BookFragment", "Form", nullptr));
        addBooksBtn->setText(QCoreApplication::translate("BookFragment", "Add Books", nullptr));
        manageBooksBtn->setText(QCoreApplication::translate("BookFragment", "Manage Books", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BookFragment: public Ui_BookFragment {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOKFORM_H
