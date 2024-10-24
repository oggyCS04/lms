/********************************************************************************
** Form generated from reading UI file 'insightframe.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSIGHTFRAME_H
#define UI_INSIGHTFRAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InsightFrame
{
public:
    QGridLayout *gridLayout;
    QWidget *outerWidget;
    QHBoxLayout *horizontalLayout_2;
    QFrame *innerFrame;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *headerVL;
    QLabel *header;
    QLabel *userNum;
    QLabel *IinsightIcon;

    void setupUi(QWidget *InsightFrame)
    {
        if (InsightFrame->objectName().isEmpty())
            InsightFrame->setObjectName("InsightFrame");
        InsightFrame->resize(703, 708);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(InsightFrame->sizePolicy().hasHeightForWidth());
        InsightFrame->setSizePolicy(sizePolicy);
        InsightFrame->setMinimumSize(QSize(0, 0));
        InsightFrame->setMaximumSize(QSize(16777215, 16777215));
        InsightFrame->setStyleSheet(QString::fromUtf8(""));
        gridLayout = new QGridLayout(InsightFrame);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        outerWidget = new QWidget(InsightFrame);
        outerWidget->setObjectName("outerWidget");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(outerWidget->sizePolicy().hasHeightForWidth());
        outerWidget->setSizePolicy(sizePolicy1);
        outerWidget->setMinimumSize(QSize(0, 140));
        outerWidget->setMaximumSize(QSize(16777215, 140));
        outerWidget->setStyleSheet(QString::fromUtf8("QWidget{\n"
"background-color: white;\n"
"border-radius: 16px;\n"
"}"));
        horizontalLayout_2 = new QHBoxLayout(outerWidget);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        innerFrame = new QFrame(outerWidget);
        innerFrame->setObjectName("innerFrame");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(innerFrame->sizePolicy().hasHeightForWidth());
        innerFrame->setSizePolicy(sizePolicy2);
        innerFrame->setMinimumSize(QSize(0, 100));
        innerFrame->setMaximumSize(QSize(16777215, 100));
        innerFrame->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        innerFrame->setFrameShape(QFrame::Shape::StyledPanel);
        innerFrame->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout = new QHBoxLayout(innerFrame);
        horizontalLayout->setSpacing(16);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(12, 0, 12, 0);
        headerVL = new QVBoxLayout();
        headerVL->setSpacing(0);
        headerVL->setObjectName("headerVL");
        header = new QLabel(innerFrame);
        header->setObjectName("header");
        sizePolicy2.setHeightForWidth(header->sizePolicy().hasHeightForWidth());
        header->setSizePolicy(sizePolicy2);
        QFont font;
        font.setFamilies({QString::fromUtf8("Poppins")});
        font.setPointSize(14);
        font.setBold(true);
        header->setFont(font);

        headerVL->addWidget(header);

        userNum = new QLabel(innerFrame);
        userNum->setObjectName("userNum");
        sizePolicy2.setHeightForWidth(userNum->sizePolicy().hasHeightForWidth());
        userNum->setSizePolicy(sizePolicy2);
        QFont font1;
        font1.setPointSize(24);
        font1.setBold(true);
        userNum->setFont(font1);

        headerVL->addWidget(userNum);


        horizontalLayout->addLayout(headerVL);

        IinsightIcon = new QLabel(innerFrame);
        IinsightIcon->setObjectName("IinsightIcon");
        sizePolicy2.setHeightForWidth(IinsightIcon->sizePolicy().hasHeightForWidth());
        IinsightIcon->setSizePolicy(sizePolicy2);
        IinsightIcon->setMinimumSize(QSize(48, 48));
        IinsightIcon->setMaximumSize(QSize(48, 48));
        IinsightIcon->setPixmap(QPixmap(QString::fromUtf8(":/icons/res/icon/books.png")));
        IinsightIcon->setScaledContents(true);
        IinsightIcon->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout->addWidget(IinsightIcon);


        horizontalLayout_2->addWidget(innerFrame);


        gridLayout->addWidget(outerWidget, 0, 0, 1, 1);


        retranslateUi(InsightFrame);

        QMetaObject::connectSlotsByName(InsightFrame);
    } // setupUi

    void retranslateUi(QWidget *InsightFrame)
    {
        InsightFrame->setWindowTitle(QCoreApplication::translate("InsightFrame", "Form", nullptr));
        header->setText(QCoreApplication::translate("InsightFrame", "Total Users", nullptr));
        userNum->setText(QCoreApplication::translate("InsightFrame", "1", nullptr));
        IinsightIcon->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class InsightFrame: public Ui_InsightFrame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSIGHTFRAME_H
