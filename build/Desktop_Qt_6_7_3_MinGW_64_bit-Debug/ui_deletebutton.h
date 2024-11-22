/********************************************************************************
** Form generated from reading UI file 'deletebutton.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETEBUTTON_H
#define UI_DELETEBUTTON_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DeleteButton
{
public:
    QGridLayout *gridLayout;
    QPushButton *pushButton;

    void setupUi(QWidget *DeleteButton)
    {
        if (DeleteButton->objectName().isEmpty())
            DeleteButton->setObjectName("DeleteButton");
        DeleteButton->resize(828, 480);
        DeleteButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        gridLayout = new QGridLayout(DeleteButton);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(DeleteButton);
        pushButton->setObjectName("pushButton");
        pushButton->setMinimumSize(QSize(0, 32));
        pushButton->setMaximumSize(QSize(16777215, 32));
        QFont font;
        font.setPointSize(11);
        font.setWeight(QFont::DemiBold);
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color: white;\n"
"background-color: rgb(217, 83, 79);\n"
"border-radius: 4px;\n"
"}"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/res/icon/delete-bold.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(16, 16));

        gridLayout->addWidget(pushButton, 0, 0, 1, 1);


        retranslateUi(DeleteButton);

        QMetaObject::connectSlotsByName(DeleteButton);
    } // setupUi

    void retranslateUi(QWidget *DeleteButton)
    {
        DeleteButton->setWindowTitle(QCoreApplication::translate("DeleteButton", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("DeleteButton", " Delete", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DeleteButton: public Ui_DeleteButton {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETEBUTTON_H
