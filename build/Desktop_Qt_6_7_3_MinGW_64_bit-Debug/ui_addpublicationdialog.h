/********************************************************************************
** Form generated from reading UI file 'addpublicationdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDPUBLICATIONDIALOG_H
#define UI_ADDPUBLICATIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AddPublicationDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *publicationFrame;
    QVBoxLayout *verticalLayout_4;
    QLabel *publicationNameQL;
    QLineEdit *publicationLE;
    QPushButton *publicationDataBtn;

    void setupUi(QDialog *AddPublicationDialog)
    {
        if (AddPublicationDialog->objectName().isEmpty())
            AddPublicationDialog->setObjectName("AddPublicationDialog");
        AddPublicationDialog->resize(400, 200);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AddPublicationDialog->sizePolicy().hasHeightForWidth());
        AddPublicationDialog->setSizePolicy(sizePolicy);
        AddPublicationDialog->setMinimumSize(QSize(400, 200));
        AddPublicationDialog->setMaximumSize(QSize(400, 200));
        verticalLayout = new QVBoxLayout(AddPublicationDialog);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        publicationFrame = new QFrame(AddPublicationDialog);
        publicationFrame->setObjectName("publicationFrame");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(publicationFrame->sizePolicy().hasHeightForWidth());
        publicationFrame->setSizePolicy(sizePolicy1);
        publicationFrame->setMinimumSize(QSize(0, 0));
        publicationFrame->setMaximumSize(QSize(16777215, 16777215));
        publicationFrame->setStyleSheet(QString::fromUtf8("\n"
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
"}\n"
"\n"
"\n"
""));
        verticalLayout_4 = new QVBoxLayout(publicationFrame);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(24, 0, 24, 0);
        publicationNameQL = new QLabel(publicationFrame);
        publicationNameQL->setObjectName("publicationNameQL");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(publicationNameQL->sizePolicy().hasHeightForWidth());
        publicationNameQL->setSizePolicy(sizePolicy2);
        publicationNameQL->setMinimumSize(QSize(0, 36));
        publicationNameQL->setMaximumSize(QSize(16777215, 36));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI Semibold")});
        font.setPointSize(11);
        font.setBold(false);
        publicationNameQL->setFont(font);
        publicationNameQL->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        verticalLayout_4->addWidget(publicationNameQL);

        publicationLE = new QLineEdit(publicationFrame);
        publicationLE->setObjectName("publicationLE");
        publicationLE->setMinimumSize(QSize(0, 36));
        publicationLE->setMaximumSize(QSize(16777215, 36));
        QFont font1;
        font1.setPointSize(10);
        publicationLE->setFont(font1);
        publicationLE->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"color: black;\n"
"border: 1px solid rgb(172, 172, 172);\n"
"border-radius: 4px;\n"
"padding-left: 12px;\n"
"}\n"
"\n"
"QLineEdit:hover{\n"
"border-color: rgb(91, 192, 222);\n"
"}"));

        verticalLayout_4->addWidget(publicationLE);

        publicationDataBtn = new QPushButton(publicationFrame);
        publicationDataBtn->setObjectName("publicationDataBtn");
        sizePolicy.setHeightForWidth(publicationDataBtn->sizePolicy().hasHeightForWidth());
        publicationDataBtn->setSizePolicy(sizePolicy);
        publicationDataBtn->setMinimumSize(QSize(132, 60));
        publicationDataBtn->setMaximumSize(QSize(132, 60));
        QFont font2;
        font2.setPointSize(10);
        font2.setWeight(QFont::DemiBold);
        publicationDataBtn->setFont(font2);
        publicationDataBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(10, 36, 86);\n"
"border: 1px solid rgb(10, 36, 86);\n"
"border-radius: 4px;\n"
"margin-top: 12px;\n"
"margin-bottom: 12px;\n"
"}\n"
"\n"
"\n"
"QPushButton:hover{\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(8, 29, 69);\n"
"border: 1px solid rgb(8, 29, 69);\n"
"border-radius: 4px;\n"
"}"));

        verticalLayout_4->addWidget(publicationDataBtn);


        verticalLayout->addWidget(publicationFrame);


        retranslateUi(AddPublicationDialog);

        QMetaObject::connectSlotsByName(AddPublicationDialog);
    } // setupUi

    void retranslateUi(QDialog *AddPublicationDialog)
    {
        AddPublicationDialog->setWindowTitle(QCoreApplication::translate("AddPublicationDialog", "Add Publication", nullptr));
        publicationNameQL->setText(QCoreApplication::translate("AddPublicationDialog", "Publication Name", nullptr));
        publicationDataBtn->setText(QCoreApplication::translate("AddPublicationDialog", "Add", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddPublicationDialog: public Ui_AddPublicationDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDPUBLICATIONDIALOG_H
