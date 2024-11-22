/********************************************************************************
** Form generated from reading UI file 'addcategorydialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCATEGORYDIALOG_H
#define UI_ADDCATEGORYDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AddCategoryDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *categoryFrame;
    QVBoxLayout *verticalLayout_4;
    QLabel *categoryNameQL;
    QLineEdit *categoryLE;
    QLabel *categoryStatusQL;
    QRadioButton *activeRadioBtn;
    QRadioButton *InactiveRadioBtn;
    QPushButton *categoryDataBtn;

    void setupUi(QDialog *AddCategoryDialog)
    {
        if (AddCategoryDialog->objectName().isEmpty())
            AddCategoryDialog->setObjectName("AddCategoryDialog");
        AddCategoryDialog->resize(400, 268);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AddCategoryDialog->sizePolicy().hasHeightForWidth());
        AddCategoryDialog->setSizePolicy(sizePolicy);
        AddCategoryDialog->setMinimumSize(QSize(400, 268));
        AddCategoryDialog->setMaximumSize(QSize(400, 268));
        AddCategoryDialog->setStyleSheet(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(AddCategoryDialog);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        categoryFrame = new QFrame(AddCategoryDialog);
        categoryFrame->setObjectName("categoryFrame");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(categoryFrame->sizePolicy().hasHeightForWidth());
        categoryFrame->setSizePolicy(sizePolicy1);
        categoryFrame->setMinimumSize(QSize(0, 0));
        categoryFrame->setMaximumSize(QSize(16777215, 16777215));
        categoryFrame->setStyleSheet(QString::fromUtf8("\n"
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
"QRadioButton{\n"
"color: black;\n"
"background-color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
""));
        verticalLayout_4 = new QVBoxLayout(categoryFrame);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(24, 0, 24, 0);
        categoryNameQL = new QLabel(categoryFrame);
        categoryNameQL->setObjectName("categoryNameQL");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(categoryNameQL->sizePolicy().hasHeightForWidth());
        categoryNameQL->setSizePolicy(sizePolicy2);
        categoryNameQL->setMinimumSize(QSize(0, 36));
        categoryNameQL->setMaximumSize(QSize(16777215, 36));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI Semibold")});
        font.setPointSize(11);
        font.setBold(false);
        categoryNameQL->setFont(font);
        categoryNameQL->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        verticalLayout_4->addWidget(categoryNameQL);

        categoryLE = new QLineEdit(categoryFrame);
        categoryLE->setObjectName("categoryLE");
        categoryLE->setMinimumSize(QSize(0, 36));
        categoryLE->setMaximumSize(QSize(16777215, 36));
        QFont font1;
        font1.setPointSize(10);
        categoryLE->setFont(font1);
        categoryLE->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"color: black;\n"
"border: 1px solid rgb(172, 172, 172);\n"
"border-radius: 4px;\n"
"padding-left: 12px;\n"
"}\n"
"\n"
"QLineEdit:hover{\n"
"border-color: rgb(91, 192, 222);\n"
"}"));

        verticalLayout_4->addWidget(categoryLE);

        categoryStatusQL = new QLabel(categoryFrame);
        categoryStatusQL->setObjectName("categoryStatusQL");
        sizePolicy2.setHeightForWidth(categoryStatusQL->sizePolicy().hasHeightForWidth());
        categoryStatusQL->setSizePolicy(sizePolicy2);
        categoryStatusQL->setMinimumSize(QSize(0, 36));
        categoryStatusQL->setMaximumSize(QSize(16777215, 36));
        categoryStatusQL->setFont(font);
        categoryStatusQL->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        verticalLayout_4->addWidget(categoryStatusQL);

        activeRadioBtn = new QRadioButton(categoryFrame);
        activeRadioBtn->setObjectName("activeRadioBtn");
        activeRadioBtn->setMinimumSize(QSize(0, 36));
        activeRadioBtn->setMaximumSize(QSize(16777215, 36));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(0, 117, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush2);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush3(QColor(0, 0, 0, 128));
        brush3.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush3);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush3);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush3);
#endif
        activeRadioBtn->setPalette(palette);
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(false);
        activeRadioBtn->setFont(font2);
        activeRadioBtn->setChecked(true);

        verticalLayout_4->addWidget(activeRadioBtn);

        InactiveRadioBtn = new QRadioButton(categoryFrame);
        InactiveRadioBtn->setObjectName("InactiveRadioBtn");
        InactiveRadioBtn->setMinimumSize(QSize(0, 36));
        InactiveRadioBtn->setMaximumSize(QSize(16777215, 36));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush3);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush3);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush3);
#endif
        InactiveRadioBtn->setPalette(palette1);
        InactiveRadioBtn->setFont(font2);

        verticalLayout_4->addWidget(InactiveRadioBtn);

        categoryDataBtn = new QPushButton(categoryFrame);
        categoryDataBtn->setObjectName("categoryDataBtn");
        sizePolicy.setHeightForWidth(categoryDataBtn->sizePolicy().hasHeightForWidth());
        categoryDataBtn->setSizePolicy(sizePolicy);
        categoryDataBtn->setMinimumSize(QSize(132, 60));
        categoryDataBtn->setMaximumSize(QSize(132, 60));
        QFont font3;
        font3.setPointSize(10);
        font3.setWeight(QFont::DemiBold);
        categoryDataBtn->setFont(font3);
        categoryDataBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        verticalLayout_4->addWidget(categoryDataBtn);


        verticalLayout->addWidget(categoryFrame);


        retranslateUi(AddCategoryDialog);

        QMetaObject::connectSlotsByName(AddCategoryDialog);
    } // setupUi

    void retranslateUi(QDialog *AddCategoryDialog)
    {
        AddCategoryDialog->setWindowTitle(QCoreApplication::translate("AddCategoryDialog", "Add Category", nullptr));
        categoryNameQL->setText(QCoreApplication::translate("AddCategoryDialog", "Category Name", nullptr));
        categoryStatusQL->setText(QCoreApplication::translate("AddCategoryDialog", "Status", nullptr));
        activeRadioBtn->setText(QCoreApplication::translate("AddCategoryDialog", "Active", nullptr));
        InactiveRadioBtn->setText(QCoreApplication::translate("AddCategoryDialog", "Inactive", nullptr));
        categoryDataBtn->setText(QCoreApplication::translate("AddCategoryDialog", "Create", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddCategoryDialog: public Ui_AddCategoryDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCATEGORYDIALOG_H
