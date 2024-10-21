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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BookFragment
{
public:
    QGridLayout *gridLayout;
    QLabel *label;

    void setupUi(QWidget *BookFragment)
    {
        if (BookFragment->objectName().isEmpty())
            BookFragment->setObjectName("BookFragment");
        BookFragment->resize(938, 622);
        gridLayout = new QGridLayout(BookFragment);
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(BookFragment);
        label->setObjectName("label");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        gridLayout->addWidget(label, 0, 0, 1, 1);


        retranslateUi(BookFragment);

        QMetaObject::connectSlotsByName(BookFragment);
    } // setupUi

    void retranslateUi(QWidget *BookFragment)
    {
        BookFragment->setWindowTitle(QCoreApplication::translate("BookFragment", "Form", nullptr));
        label->setText(QCoreApplication::translate("BookFragment", "Coming from future", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BookFragment: public Ui_BookFragment {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOKFORM_H
