/********************************************************************************
** Form generated from reading UI file 'issuebookdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ISSUEBOOKDIALOG_H
#define UI_ISSUEBOOKDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_IssueBookDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QFrame *issueBookFrame;
    QVBoxLayout *verticalLayout;
    QLabel *studentIdLabel;
    QLineEdit *StudentIdLE;
    QLabel *bookIdLabel;
    QLineEdit *bookIdLE;
    QLabel *bookNameLabel;
    QLineEdit *bookNameLE;
    QLabel *returnDateLabel;
    QDateEdit *returnDateEdit;
    QHBoxLayout *buttonHL;
    QPushButton *pushButton;
    QPushButton *issueBookBtn;

    void setupUi(QDialog *IssueBookDialog)
    {
        if (IssueBookDialog->objectName().isEmpty())
            IssueBookDialog->setObjectName("IssueBookDialog");
        IssueBookDialog->resize(400, 500);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(IssueBookDialog->sizePolicy().hasHeightForWidth());
        IssueBookDialog->setSizePolicy(sizePolicy);
        IssueBookDialog->setMinimumSize(QSize(400, 500));
        IssueBookDialog->setMaximumSize(QSize(400, 500));
        verticalLayout_2 = new QVBoxLayout(IssueBookDialog);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        issueBookFrame = new QFrame(IssueBookDialog);
        issueBookFrame->setObjectName("issueBookFrame");
        issueBookFrame->setStyleSheet(QString::fromUtf8("\n"
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
"\n"
"\n"
"\n"
""));
        issueBookFrame->setFrameShape(QFrame::Shape::StyledPanel);
        issueBookFrame->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout = new QVBoxLayout(issueBookFrame);
        verticalLayout->setSpacing(8);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(24, 0, 24, 0);
        studentIdLabel = new QLabel(issueBookFrame);
        studentIdLabel->setObjectName("studentIdLabel");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(studentIdLabel->sizePolicy().hasHeightForWidth());
        studentIdLabel->setSizePolicy(sizePolicy1);
        studentIdLabel->setMinimumSize(QSize(0, 36));
        studentIdLabel->setMaximumSize(QSize(16777215, 36));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI Semibold")});
        font.setPointSize(11);
        font.setBold(false);
        studentIdLabel->setFont(font);
        studentIdLabel->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        verticalLayout->addWidget(studentIdLabel);

        StudentIdLE = new QLineEdit(issueBookFrame);
        StudentIdLE->setObjectName("StudentIdLE");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(StudentIdLE->sizePolicy().hasHeightForWidth());
        StudentIdLE->setSizePolicy(sizePolicy2);
        StudentIdLE->setMinimumSize(QSize(0, 36));
        StudentIdLE->setMaximumSize(QSize(16777215, 36));

        verticalLayout->addWidget(StudentIdLE);

        bookIdLabel = new QLabel(issueBookFrame);
        bookIdLabel->setObjectName("bookIdLabel");
        sizePolicy1.setHeightForWidth(bookIdLabel->sizePolicy().hasHeightForWidth());
        bookIdLabel->setSizePolicy(sizePolicy1);
        bookIdLabel->setMinimumSize(QSize(0, 36));
        bookIdLabel->setMaximumSize(QSize(16777215, 36));
        bookIdLabel->setFont(font);
        bookIdLabel->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        verticalLayout->addWidget(bookIdLabel);

        bookIdLE = new QLineEdit(issueBookFrame);
        bookIdLE->setObjectName("bookIdLE");
        sizePolicy2.setHeightForWidth(bookIdLE->sizePolicy().hasHeightForWidth());
        bookIdLE->setSizePolicy(sizePolicy2);
        bookIdLE->setMinimumSize(QSize(0, 36));
        bookIdLE->setMaximumSize(QSize(16777215, 36));

        verticalLayout->addWidget(bookIdLE);

        bookNameLabel = new QLabel(issueBookFrame);
        bookNameLabel->setObjectName("bookNameLabel");
        sizePolicy1.setHeightForWidth(bookNameLabel->sizePolicy().hasHeightForWidth());
        bookNameLabel->setSizePolicy(sizePolicy1);
        bookNameLabel->setMinimumSize(QSize(0, 36));
        bookNameLabel->setMaximumSize(QSize(16777215, 36));
        bookNameLabel->setFont(font);
        bookNameLabel->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        verticalLayout->addWidget(bookNameLabel);

        bookNameLE = new QLineEdit(issueBookFrame);
        bookNameLE->setObjectName("bookNameLE");
        sizePolicy2.setHeightForWidth(bookNameLE->sizePolicy().hasHeightForWidth());
        bookNameLE->setSizePolicy(sizePolicy2);
        bookNameLE->setMinimumSize(QSize(0, 36));
        bookNameLE->setMaximumSize(QSize(16777215, 36));

        verticalLayout->addWidget(bookNameLE);

        returnDateLabel = new QLabel(issueBookFrame);
        returnDateLabel->setObjectName("returnDateLabel");
        sizePolicy1.setHeightForWidth(returnDateLabel->sizePolicy().hasHeightForWidth());
        returnDateLabel->setSizePolicy(sizePolicy1);
        returnDateLabel->setMinimumSize(QSize(0, 36));
        returnDateLabel->setMaximumSize(QSize(16777215, 36));
        returnDateLabel->setFont(font);
        returnDateLabel->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        verticalLayout->addWidget(returnDateLabel);

        returnDateEdit = new QDateEdit(issueBookFrame);
        returnDateEdit->setObjectName("returnDateEdit");
        returnDateEdit->setMinimumSize(QSize(0, 36));
        returnDateEdit->setMaximumSize(QSize(16777215, 36));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(false);
        returnDateEdit->setFont(font1);

        verticalLayout->addWidget(returnDateEdit);

        buttonHL = new QHBoxLayout();
        buttonHL->setSpacing(12);
        buttonHL->setObjectName("buttonHL");
        pushButton = new QPushButton(issueBookFrame);
        pushButton->setObjectName("pushButton");
        pushButton->setMinimumSize(QSize(148, 60));
        pushButton->setMaximumSize(QSize(148, 60));
        QFont font2;
        font2.setPointSize(10);
        font2.setWeight(QFont::DemiBold);
        pushButton->setFont(font2);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        buttonHL->addWidget(pushButton);

        issueBookBtn = new QPushButton(issueBookFrame);
        issueBookBtn->setObjectName("issueBookBtn");
        sizePolicy.setHeightForWidth(issueBookBtn->sizePolicy().hasHeightForWidth());
        issueBookBtn->setSizePolicy(sizePolicy);
        issueBookBtn->setMinimumSize(QSize(148, 60));
        issueBookBtn->setMaximumSize(QSize(148, 60));
        issueBookBtn->setFont(font2);
        issueBookBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        buttonHL->addWidget(issueBookBtn);


        verticalLayout->addLayout(buttonHL);


        verticalLayout_2->addWidget(issueBookFrame);


        retranslateUi(IssueBookDialog);

        QMetaObject::connectSlotsByName(IssueBookDialog);
    } // setupUi

    void retranslateUi(QDialog *IssueBookDialog)
    {
        IssueBookDialog->setWindowTitle(QCoreApplication::translate("IssueBookDialog", "Issue a Book", nullptr));
        studentIdLabel->setText(QCoreApplication::translate("IssueBookDialog", "Student ID", nullptr));
        bookIdLabel->setText(QCoreApplication::translate("IssueBookDialog", "Book ID", nullptr));
        bookNameLabel->setText(QCoreApplication::translate("IssueBookDialog", "Book Name", nullptr));
        returnDateLabel->setText(QCoreApplication::translate("IssueBookDialog", "Return Date", nullptr));
        pushButton->setText(QCoreApplication::translate("IssueBookDialog", "Check Details", nullptr));
        issueBookBtn->setText(QCoreApplication::translate("IssueBookDialog", "Issue Book", nullptr));
    } // retranslateUi

};

namespace Ui {
    class IssueBookDialog: public Ui_IssueBookDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ISSUEBOOKDIALOG_H
