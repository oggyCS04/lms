/********************************************************************************
** Form generated from reading UI file 'reqbookform.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REQBOOKFORM_H
#define UI_REQBOOKFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ReqBookFragment
{
public:
    QVBoxLayout *verticalLayout;
    QScrollArea *reqBookScrollArea;
    QWidget *bookScrollContents;
    QGridLayout *gridLayout_4;
    QWidget *manageReqBookWidget;
    QVBoxLayout *verticalLayout_6;
    QLabel *reqBookListingLabel;
    QHBoxLayout *horizontalLayout_9;
    QSpinBox *spinBox_2;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_7;
    QLabel *label_8;
    QLineEdit *lineEdit_2;
    QTableWidget *reqBookTableWidget;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_9;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *pushButton_3;
    QLabel *label_10;
    QPushButton *pushButton_4;

    void setupUi(QWidget *ReqBookFragment)
    {
        if (ReqBookFragment->objectName().isEmpty())
            ReqBookFragment->setObjectName("ReqBookFragment");
        ReqBookFragment->resize(1116, 793);
        verticalLayout = new QVBoxLayout(ReqBookFragment);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        reqBookScrollArea = new QScrollArea(ReqBookFragment);
        reqBookScrollArea->setObjectName("reqBookScrollArea");
        reqBookScrollArea->setStyleSheet(QString::fromUtf8(""));
        reqBookScrollArea->setWidgetResizable(true);
        bookScrollContents = new QWidget();
        bookScrollContents->setObjectName("bookScrollContents");
        bookScrollContents->setGeometry(QRect(0, 0, 1114, 791));
        bookScrollContents->setStyleSheet(QString::fromUtf8(""));
        gridLayout_4 = new QGridLayout(bookScrollContents);
        gridLayout_4->setSpacing(0);
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_4->setContentsMargins(48, 24, 48, 48);
        manageReqBookWidget = new QWidget(bookScrollContents);
        manageReqBookWidget->setObjectName("manageReqBookWidget");
        manageReqBookWidget->setStyleSheet(QString::fromUtf8("QWidget{\n"
"color: rgb(0, 0, 0);\n"
"\n"
"background-color: rgb(255, 255, 255);\n"
"border: 1px solid lightgray;\n"
"border-radius: 12px;\n"
"}\n"
"\n"
""));
        verticalLayout_6 = new QVBoxLayout(manageReqBookWidget);
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        reqBookListingLabel = new QLabel(manageReqBookWidget);
        reqBookListingLabel->setObjectName("reqBookListingLabel");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(reqBookListingLabel->sizePolicy().hasHeightForWidth());
        reqBookListingLabel->setSizePolicy(sizePolicy);
        reqBookListingLabel->setMinimumSize(QSize(0, 48));
        reqBookListingLabel->setMaximumSize(QSize(16777215, 48));
        QFont font;
        font.setPointSize(11);
        font.setWeight(QFont::DemiBold);
        reqBookListingLabel->setFont(font);
        reqBookListingLabel->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: black;\n"
"background-color: rgb(243, 244, 248);\n"
"border: 1px solid lightgray;\n"
"padding-left: 12px;\n"
"border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;\n"
"}"));

        verticalLayout_6->addWidget(reqBookListingLabel);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(8);
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        horizontalLayout_9->setContentsMargins(8, 8, 8, 8);
        spinBox_2 = new QSpinBox(manageReqBookWidget);
        spinBox_2->setObjectName("spinBox_2");
        sizePolicy.setHeightForWidth(spinBox_2->sizePolicy().hasHeightForWidth());
        spinBox_2->setSizePolicy(sizePolicy);
        spinBox_2->setMinimumSize(QSize(0, 36));
        spinBox_2->setMaximumSize(QSize(16777215, 36));
        QFont font1;
        font1.setPointSize(11);
        spinBox_2->setFont(font1);
        spinBox_2->setStyleSheet(QString::fromUtf8("QSpinBox {\n"
"	width: 60px; /* make room for the arrows */\n"
"    border-width: 1;\n"
"}\n"
"\n"
"QSpinBox::up-button {\n"
"    subcontrol-origin: border;\n"
"    subcontrol-position: top right;\n"
"    width: 14px;\n"
"    background-color: white;\n"
"    border: 1px solid lightgray;\n"
"	border-bottom-width: 0px;\n"
"   \n"
"}\n"
"\n"
"QSpinBox::up-button:hover {\n"
"    background-color:rgb(221, 221, 221);\n"
"}\n"
"\n"
"QSpinBox::up-button:pressed {\n"
"    background-color:yellow;\n"
"}\n"
"\n"
"QSpinBox::up-arrow {\n"
"    image: url(:/icons/res/icon/arrow-up.png);\n"
"    width: 10px;\n"
"    height: 10px;\n"
"}\n"
"\n"
"\n"
"\n"
"QSpinBox::down-button {\n"
"    subcontrol-origin: border;\n"
"    subcontrol-position: bottom right; \n"
"\n"
"    width: 14px;\n"
"	background-color: white;\n"
"    border: 1px solid lightgray;\n"
"	border-top-width: 0px;\n"
"	\n"
"}\n"
"\n"
"QSpinBox::down-button:hover {\n"
"    background-color: rgb(221, 221, 221);\n"
"}\n"
"\n"
"QSpinBox::down-button:pressed {\n"
"   ba"
                        "ckground-color: yellow;\n"
"}\n"
"\n"
"QSpinBox::down-arrow {\n"
"    \n"
"	image: url(:/icons/res/icon/arrow-down.png);\n"
"    width: 10px;\n"
"    height: 10px;\n"
"}\n"
""));
        spinBox_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        spinBox_2->setReadOnly(false);
        spinBox_2->setMinimum(25);
        spinBox_2->setMaximum(100);
        spinBox_2->setSingleStep(25);

        horizontalLayout_9->addWidget(spinBox_2);

        label_4 = new QLabel(manageReqBookWidget);
        label_4->setObjectName("label_4");
        label_4->setFont(font1);
        label_4->setStyleSheet(QString::fromUtf8("border:none;"));

        horizontalLayout_9->addWidget(label_4);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_7);

        label_8 = new QLabel(manageReqBookWidget);
        label_8->setObjectName("label_8");
        label_8->setFont(font1);
        label_8->setStyleSheet(QString::fromUtf8("border:none;"));

        horizontalLayout_9->addWidget(label_8);

        lineEdit_2 = new QLineEdit(manageReqBookWidget);
        lineEdit_2->setObjectName("lineEdit_2");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEdit_2->sizePolicy().hasHeightForWidth());
        lineEdit_2->setSizePolicy(sizePolicy1);
        lineEdit_2->setMinimumSize(QSize(200, 36));
        lineEdit_2->setMaximumSize(QSize(200, 36));
        lineEdit_2->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"border: 1px solid lightgray;\n"
"border-radius: 8px;\n"
"padding-left: 12px;\n"
"color: rgb(79, 79, 79);\n"
"}"));

        horizontalLayout_9->addWidget(lineEdit_2);


        verticalLayout_6->addLayout(horizontalLayout_9);

        reqBookTableWidget = new QTableWidget(manageReqBookWidget);
        if (reqBookTableWidget->columnCount() < 9)
            reqBookTableWidget->setColumnCount(9);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font);
        reqBookTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font);
        reqBookTableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setFont(font);
        reqBookTableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setFont(font);
        reqBookTableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setFont(font);
        reqBookTableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        __qtablewidgetitem5->setFont(font);
        reqBookTableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        __qtablewidgetitem6->setFont(font);
        reqBookTableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        __qtablewidgetitem7->setFont(font);
        reqBookTableWidget->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        __qtablewidgetitem8->setFont(font);
        reqBookTableWidget->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        reqBookTableWidget->setObjectName("reqBookTableWidget");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(reqBookTableWidget->sizePolicy().hasHeightForWidth());
        reqBookTableWidget->setSizePolicy(sizePolicy2);
        reqBookTableWidget->setFont(font1);
        reqBookTableWidget->setStyleSheet(QString::fromUtf8("QHeaderView{\n"
"border: none;\n"
"border-radius:0px;\n"
"border-bottom: 1px solid lightgray;\n"
"min-height: 36px;\n"
"}\n"
"\n"
"QHeaderView::section{\n"
"background-color: rgb(243, 244, 248);\n"
"border:none;\n"
"border-right: 1px solid lightgray;\n"
"}\n"
"\n"
"QTableWidget{\n"
"border-radius: 0px;\n"
"background-color: white;\n"
"alternate-background-color: rgb(243, 244, 248);\n"
"}\n"
"\n"
"QTableWidget::item {\n"
" padding-left: 10px;\n"
"padding-right: 10px;\n"
"}"));
        reqBookTableWidget->setLineWidth(1);
        reqBookTableWidget->setMidLineWidth(0);
        reqBookTableWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAsNeeded);
        reqBookTableWidget->setEditTriggers(QAbstractItemView::EditTrigger::NoEditTriggers);
        reqBookTableWidget->setAlternatingRowColors(true);
        reqBookTableWidget->setSelectionMode(QAbstractItemView::SelectionMode::ExtendedSelection);
        reqBookTableWidget->setTextElideMode(Qt::TextElideMode::ElideRight);
        reqBookTableWidget->setShowGrid(true);
        reqBookTableWidget->setGridStyle(Qt::PenStyle::SolidLine);
        reqBookTableWidget->setWordWrap(true);
        reqBookTableWidget->setCornerButtonEnabled(true);
        reqBookTableWidget->horizontalHeader()->setVisible(true);
        reqBookTableWidget->horizontalHeader()->setCascadingSectionResizes(true);
        reqBookTableWidget->horizontalHeader()->setMinimumSectionSize(148);
        reqBookTableWidget->horizontalHeader()->setDefaultSectionSize(148);
        reqBookTableWidget->horizontalHeader()->setHighlightSections(false);
        reqBookTableWidget->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        reqBookTableWidget->horizontalHeader()->setStretchLastSection(true);
        reqBookTableWidget->verticalHeader()->setVisible(false);
        reqBookTableWidget->verticalHeader()->setCascadingSectionResizes(false);
        reqBookTableWidget->verticalHeader()->setMinimumSectionSize(48);
        reqBookTableWidget->verticalHeader()->setDefaultSectionSize(48);
        reqBookTableWidget->verticalHeader()->setStretchLastSection(false);

        verticalLayout_6->addWidget(reqBookTableWidget);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(0);
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        horizontalLayout_10->setContentsMargins(8, 8, 8, 8);
        label_9 = new QLabel(manageReqBookWidget);
        label_9->setObjectName("label_9");
        sizePolicy.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy);
        label_9->setMinimumSize(QSize(0, 36));
        label_9->setMaximumSize(QSize(16777215, 36));
        label_9->setFont(font1);
        label_9->setStyleSheet(QString::fromUtf8("border:none;"));

        horizontalLayout_10->addWidget(label_9);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_8);

        pushButton_3 = new QPushButton(manageReqBookWidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setMinimumSize(QSize(0, 36));
        pushButton_3->setMaximumSize(QSize(16777215, 36));
        pushButton_3->setFont(font1);
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color: black;\n"
"border: 1px solid lightgray;\n"
"border-top-right-radius: 0px;\n"
"border-bottom-right-radius:0px;\n"
"padding-left: 8px;\n"
"padding-right: 8px;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(10, 37, 88);\n"
"border: 1px solid rgb(10, 37, 88);\n"
"}"));

        horizontalLayout_10->addWidget(pushButton_3);

        label_10 = new QLabel(manageReqBookWidget);
        label_10->setObjectName("label_10");
        sizePolicy1.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy1);
        label_10->setMinimumSize(QSize(32, 36));
        label_10->setMaximumSize(QSize(32, 36));
        label_10->setFont(font1);
        label_10->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(10, 37, 88);\n"
"border: 1px solid rgb(10, 37, 88);\n"
"border-radius: 0px;\n"
"}"));
        label_10->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_10->addWidget(label_10);

        pushButton_4 = new QPushButton(manageReqBookWidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setMinimumSize(QSize(0, 36));
        pushButton_4->setMaximumSize(QSize(16777215, 36));
        pushButton_4->setFont(font1);
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color: black;\n"
"border: 1px solid lightgray;\n"
"border-top-left-radius: 0px;\n"
"border-bottom-left-radius:0px;\n"
"padding-left: 8px;\n"
"padding-right: 8px;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(10, 37, 88);\n"
"border: 1px solid rgb(10, 37, 88);\n"
"}"));

        horizontalLayout_10->addWidget(pushButton_4);


        verticalLayout_6->addLayout(horizontalLayout_10);


        gridLayout_4->addWidget(manageReqBookWidget, 0, 0, 1, 1);

        reqBookScrollArea->setWidget(bookScrollContents);

        verticalLayout->addWidget(reqBookScrollArea);


        retranslateUi(ReqBookFragment);

        QMetaObject::connectSlotsByName(ReqBookFragment);
    } // setupUi

    void retranslateUi(QWidget *ReqBookFragment)
    {
        ReqBookFragment->setWindowTitle(QCoreApplication::translate("ReqBookFragment", "Form", nullptr));
        reqBookListingLabel->setText(QCoreApplication::translate("ReqBookFragment", "Requested Books", nullptr));
        label_4->setText(QCoreApplication::translate("ReqBookFragment", "records per page", nullptr));
        label_8->setText(QCoreApplication::translate("ReqBookFragment", "Search :", nullptr));
        QTableWidgetItem *___qtablewidgetitem = reqBookTableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("ReqBookFragment", "#", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = reqBookTableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("ReqBookFragment", "Student ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = reqBookTableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("ReqBookFragment", "Student Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = reqBookTableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("ReqBookFragment", "Book Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = reqBookTableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("ReqBookFragment", "Category Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = reqBookTableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("ReqBookFragment", "Publication Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = reqBookTableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("ReqBookFragment", "ISBN Number", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = reqBookTableWidget->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("ReqBookFragment", "Book Price", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = reqBookTableWidget->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("ReqBookFragment", "Action", nullptr));
        label_9->setText(QCoreApplication::translate("ReqBookFragment", "Showing", nullptr));
        pushButton_3->setText(QCoreApplication::translate("ReqBookFragment", "Previous", nullptr));
        label_10->setText(QCoreApplication::translate("ReqBookFragment", "1", nullptr));
        pushButton_4->setText(QCoreApplication::translate("ReqBookFragment", "Next", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ReqBookFragment: public Ui_ReqBookFragment {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REQBOOKFORM_H
