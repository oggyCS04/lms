/********************************************************************************
** Form generated from reading UI file 'addbookdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDBOOKDIALOG_H
#define UI_ADDBOOKDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AddBookDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *bookFrame;
    QVBoxLayout *verticalLayout_4;
    QLabel *bookNameLabel;
    QLineEdit *bookNameLE;
    QLabel *categoryLabel;
    QComboBox *categoryCB;
    QLabel *publicationLabel;
    QComboBox *publicationCB;
    QLabel *isbnLabel;
    QLineEdit *isbnLE;
    QLabel *numberOfCopiesLabel;
    QLineEdit *numOfCopiesLE;
    QLabel *priceLabel;
    QLineEdit *priceLE;
    QPushButton *bookSubmitBtn;

    void setupUi(QDialog *AddBookDialog)
    {
        if (AddBookDialog->objectName().isEmpty())
            AddBookDialog->setObjectName("AddBookDialog");
        AddBookDialog->resize(450, 600);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AddBookDialog->sizePolicy().hasHeightForWidth());
        AddBookDialog->setSizePolicy(sizePolicy);
        AddBookDialog->setMinimumSize(QSize(450, 600));
        AddBookDialog->setMaximumSize(QSize(450, 600));
        verticalLayout = new QVBoxLayout(AddBookDialog);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        bookFrame = new QFrame(AddBookDialog);
        bookFrame->setObjectName("bookFrame");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(bookFrame->sizePolicy().hasHeightForWidth());
        bookFrame->setSizePolicy(sizePolicy1);
        bookFrame->setMinimumSize(QSize(0, 0));
        bookFrame->setMaximumSize(QSize(16777215, 16777215));
        bookFrame->setStyleSheet(QString::fromUtf8("\n"
"\n"
"QFrame{\n"
"background-color: white;\n"
"border-bottom: 1px solid lightgray;\n"
"}\n"
"\n"
"QLabel{\n"
"border: none;\n"
"border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;\n"
"margin-top: 12px;\n"
"}\n"
"\n"
"QLineEdit{\n"
"color: black;\n"
"border: 1px solid rgb(172, 172, 172);\n"
"border-radius: 4px;\n"
"padding-left: 12px;\n"
"}\n"
"\n"
"QLineEdit:hover{\n"
"border-color: rgb(91, 192, 222);\n"
"}\n"
"\n"
"QComboBox{\n"
"color: black;\n"
"border: 1px solid rgb(172, 172, 172);\n"
"border-radius: 4px;\n"
"padding-left: 12px;\n"
"}\n"
"\n"
"QComboBox:hover{\n"
"border-color: rgb(91, 192, 222);\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
""));
        verticalLayout_4 = new QVBoxLayout(bookFrame);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(24, 0, 24, 0);
        bookNameLabel = new QLabel(bookFrame);
        bookNameLabel->setObjectName("bookNameLabel");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(bookNameLabel->sizePolicy().hasHeightForWidth());
        bookNameLabel->setSizePolicy(sizePolicy2);
        bookNameLabel->setMinimumSize(QSize(0, 36));
        bookNameLabel->setMaximumSize(QSize(16777215, 36));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI Semibold")});
        font.setPointSize(11);
        font.setBold(false);
        bookNameLabel->setFont(font);
        bookNameLabel->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        verticalLayout_4->addWidget(bookNameLabel);

        bookNameLE = new QLineEdit(bookFrame);
        bookNameLE->setObjectName("bookNameLE");
        bookNameLE->setMinimumSize(QSize(0, 36));
        bookNameLE->setMaximumSize(QSize(16777215, 36));
        QFont font1;
        font1.setPointSize(10);
        bookNameLE->setFont(font1);
        bookNameLE->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_4->addWidget(bookNameLE);

        categoryLabel = new QLabel(bookFrame);
        categoryLabel->setObjectName("categoryLabel");
        sizePolicy2.setHeightForWidth(categoryLabel->sizePolicy().hasHeightForWidth());
        categoryLabel->setSizePolicy(sizePolicy2);
        categoryLabel->setMinimumSize(QSize(0, 36));
        categoryLabel->setMaximumSize(QSize(16777215, 36));
        categoryLabel->setFont(font);
        categoryLabel->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        verticalLayout_4->addWidget(categoryLabel);

        categoryCB = new QComboBox(bookFrame);
        categoryCB->setObjectName("categoryCB");
        categoryCB->setMinimumSize(QSize(0, 36));
        categoryCB->setMaximumSize(QSize(16777215, 36));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Poppins Medium")});
        font2.setPointSize(10);
        font2.setBold(false);
        categoryCB->setFont(font2);

        verticalLayout_4->addWidget(categoryCB);

        publicationLabel = new QLabel(bookFrame);
        publicationLabel->setObjectName("publicationLabel");
        sizePolicy2.setHeightForWidth(publicationLabel->sizePolicy().hasHeightForWidth());
        publicationLabel->setSizePolicy(sizePolicy2);
        publicationLabel->setMinimumSize(QSize(0, 36));
        publicationLabel->setMaximumSize(QSize(16777215, 36));
        publicationLabel->setFont(font);
        publicationLabel->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        verticalLayout_4->addWidget(publicationLabel);

        publicationCB = new QComboBox(bookFrame);
        publicationCB->setObjectName("publicationCB");
        publicationCB->setMinimumSize(QSize(0, 36));
        publicationCB->setMaximumSize(QSize(16777215, 36));
        publicationCB->setFont(font2);

        verticalLayout_4->addWidget(publicationCB);

        isbnLabel = new QLabel(bookFrame);
        isbnLabel->setObjectName("isbnLabel");
        sizePolicy2.setHeightForWidth(isbnLabel->sizePolicy().hasHeightForWidth());
        isbnLabel->setSizePolicy(sizePolicy2);
        isbnLabel->setMinimumSize(QSize(0, 36));
        isbnLabel->setMaximumSize(QSize(16777215, 36));
        isbnLabel->setFont(font);
        isbnLabel->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        verticalLayout_4->addWidget(isbnLabel);

        isbnLE = new QLineEdit(bookFrame);
        isbnLE->setObjectName("isbnLE");
        isbnLE->setMinimumSize(QSize(0, 36));
        isbnLE->setMaximumSize(QSize(16777215, 36));
        isbnLE->setFont(font1);
        isbnLE->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_4->addWidget(isbnLE);

        numberOfCopiesLabel = new QLabel(bookFrame);
        numberOfCopiesLabel->setObjectName("numberOfCopiesLabel");
        sizePolicy2.setHeightForWidth(numberOfCopiesLabel->sizePolicy().hasHeightForWidth());
        numberOfCopiesLabel->setSizePolicy(sizePolicy2);
        numberOfCopiesLabel->setMinimumSize(QSize(0, 36));
        numberOfCopiesLabel->setMaximumSize(QSize(16777215, 36));
        numberOfCopiesLabel->setFont(font);
        numberOfCopiesLabel->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        verticalLayout_4->addWidget(numberOfCopiesLabel);

        numOfCopiesLE = new QLineEdit(bookFrame);
        numOfCopiesLE->setObjectName("numOfCopiesLE");
        numOfCopiesLE->setMinimumSize(QSize(0, 36));
        numOfCopiesLE->setMaximumSize(QSize(16777215, 36));
        numOfCopiesLE->setFont(font1);
        numOfCopiesLE->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_4->addWidget(numOfCopiesLE);

        priceLabel = new QLabel(bookFrame);
        priceLabel->setObjectName("priceLabel");
        sizePolicy2.setHeightForWidth(priceLabel->sizePolicy().hasHeightForWidth());
        priceLabel->setSizePolicy(sizePolicy2);
        priceLabel->setMinimumSize(QSize(0, 36));
        priceLabel->setMaximumSize(QSize(16777215, 36));
        priceLabel->setFont(font);
        priceLabel->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        verticalLayout_4->addWidget(priceLabel);

        priceLE = new QLineEdit(bookFrame);
        priceLE->setObjectName("priceLE");
        priceLE->setMinimumSize(QSize(0, 36));
        priceLE->setMaximumSize(QSize(16777215, 36));
        priceLE->setFont(font1);
        priceLE->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_4->addWidget(priceLE);

        bookSubmitBtn = new QPushButton(bookFrame);
        bookSubmitBtn->setObjectName("bookSubmitBtn");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(bookSubmitBtn->sizePolicy().hasHeightForWidth());
        bookSubmitBtn->setSizePolicy(sizePolicy3);
        bookSubmitBtn->setMinimumSize(QSize(132, 60));
        bookSubmitBtn->setMaximumSize(QSize(132, 60));
        QFont font3;
        font3.setPointSize(10);
        font3.setWeight(QFont::DemiBold);
        bookSubmitBtn->setFont(font3);
        bookSubmitBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(10, 36, 86);\n"
"border: 1px solid rgb(10, 36, 86);\n"
"border-radius: 4px;\n"
"margin-top: 12px;\n"
"margin-bottom: 12px;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(8, 29, 69);\n"
"border: 1px solid rgb(8, 29, 69);\n"
"border-radius: 4px;\n"
"}"));

        verticalLayout_4->addWidget(bookSubmitBtn);


        verticalLayout->addWidget(bookFrame);


        retranslateUi(AddBookDialog);

        QMetaObject::connectSlotsByName(AddBookDialog);
    } // setupUi

    void retranslateUi(QDialog *AddBookDialog)
    {
        AddBookDialog->setWindowTitle(QCoreApplication::translate("AddBookDialog", "Add Book", nullptr));
        bookNameLabel->setText(QCoreApplication::translate("AddBookDialog", "Book Name", nullptr));
        categoryLabel->setText(QCoreApplication::translate("AddBookDialog", "Category", nullptr));
        publicationLabel->setText(QCoreApplication::translate("AddBookDialog", "Publication", nullptr));
        isbnLabel->setText(QCoreApplication::translate("AddBookDialog", "ISBN Number", nullptr));
        numberOfCopiesLabel->setText(QCoreApplication::translate("AddBookDialog", "Number of Copies", nullptr));
        priceLabel->setText(QCoreApplication::translate("AddBookDialog", "Price", nullptr));
        bookSubmitBtn->setText(QCoreApplication::translate("AddBookDialog", "Add", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddBookDialog: public Ui_AddBookDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDBOOKDIALOG_H
