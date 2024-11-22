/********************************************************************************
** Form generated from reading UI file 'editbutton.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITBUTTON_H
#define UI_EDITBUTTON_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EditButton
{
public:
    QGridLayout *gridLayout;
    QPushButton *pushButton;

    void setupUi(QWidget *EditButton)
    {
        if (EditButton->objectName().isEmpty())
            EditButton->setObjectName("EditButton");
        EditButton->resize(956, 676);
        EditButton->setStyleSheet(QString::fromUtf8(""));
        gridLayout = new QGridLayout(EditButton);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(EditButton);
        pushButton->setObjectName("pushButton");
        pushButton->setMinimumSize(QSize(0, 32));
        pushButton->setMaximumSize(QSize(16777215, 32));
        QFont font;
        font.setPointSize(11);
        font.setWeight(QFont::DemiBold);
        pushButton->setFont(font);
        pushButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color: white;\n"
"background-color: rgb(66, 139, 202);\n"
"border-radius: 4px;\n"
"}"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/res/icon/edit-bold.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(16, 16));

        gridLayout->addWidget(pushButton, 0, 0, 1, 1);


        retranslateUi(EditButton);

        QMetaObject::connectSlotsByName(EditButton);
    } // setupUi

    void retranslateUi(QWidget *EditButton)
    {
        EditButton->setWindowTitle(QCoreApplication::translate("EditButton", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("EditButton", " Edit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditButton: public Ui_EditButton {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITBUTTON_H
