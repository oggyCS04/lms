/********************************************************************************
** Form generated from reading UI file 'publicationform.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PUBLICATIONFORM_H
#define UI_PUBLICATIONFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PublicationFragment
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *pubHeader;
    QHBoxLayout *pubHeaderHL;
    QPushButton *addPubBtn;
    QPushButton *managePubBtn;
    QSpacerItem *pubSpacer;
    QStackedWidget *pubStackedWidget;
    QWidget *addPubWidget;
    QGridLayout *pubAddGL;
    QFrame *pubFrame;
    QVBoxLayout *verticalLayout_4;
    QLabel *pubInfoQL;
    QLabel *pubNameQL;
    QLineEdit *pubLE;
    QPushButton *pubAddBtn;
    QWidget *managePubWidget;
    QGridLayout *pubManageGL;
    QScrollArea *pubScrollArea;
    QWidget *pubContents;
    QGridLayout *pubContentsGL;
    QWidget *pubWidget;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_11;
    QHBoxLayout *horizontalLayout_11;
    QSpinBox *spinBox_3;
    QLabel *label_12;
    QSpacerItem *horizontalSpacer_9;
    QLabel *label_13;
    QLineEdit *lineEdit_3;
    QTableWidget *tableWidget_3;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_14;
    QSpacerItem *horizontalSpacer_10;
    QPushButton *pushButton_5;
    QLabel *label_15;
    QPushButton *pushButton_6;

    void setupUi(QWidget *PublicationFragment)
    {
        if (PublicationFragment->objectName().isEmpty())
            PublicationFragment->setObjectName("PublicationFragment");
        PublicationFragment->resize(899, 566);
        PublicationFragment->setStyleSheet(QString::fromUtf8("background-color: rgb(243, 244, 248);"));
        verticalLayout = new QVBoxLayout(PublicationFragment);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pubHeader = new QWidget(PublicationFragment);
        pubHeader->setObjectName("pubHeader");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pubHeader->sizePolicy().hasHeightForWidth());
        pubHeader->setSizePolicy(sizePolicy);
        pubHeader->setMinimumSize(QSize(0, 64));
        pubHeader->setMaximumSize(QSize(16777215, 64));
        pubHeader->setStyleSheet(QString::fromUtf8("QWidget{\n"
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
        pubHeaderHL = new QHBoxLayout(pubHeader);
        pubHeaderHL->setSpacing(11);
        pubHeaderHL->setObjectName("pubHeaderHL");
        addPubBtn = new QPushButton(pubHeader);
        addPubBtn->setObjectName("addPubBtn");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(addPubBtn->sizePolicy().hasHeightForWidth());
        addPubBtn->setSizePolicy(sizePolicy1);
        QFont font;
        font.setPointSize(11);
        font.setWeight(QFont::DemiBold);
        addPubBtn->setFont(font);
        addPubBtn->setCheckable(true);
        addPubBtn->setChecked(true);
        addPubBtn->setAutoExclusive(true);

        pubHeaderHL->addWidget(addPubBtn);

        managePubBtn = new QPushButton(pubHeader);
        managePubBtn->setObjectName("managePubBtn");
        sizePolicy1.setHeightForWidth(managePubBtn->sizePolicy().hasHeightForWidth());
        managePubBtn->setSizePolicy(sizePolicy1);
        managePubBtn->setFont(font);
        managePubBtn->setCheckable(true);
        managePubBtn->setChecked(false);
        managePubBtn->setAutoExclusive(true);

        pubHeaderHL->addWidget(managePubBtn);

        pubSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        pubHeaderHL->addItem(pubSpacer);


        verticalLayout->addWidget(pubHeader);

        pubStackedWidget = new QStackedWidget(PublicationFragment);
        pubStackedWidget->setObjectName("pubStackedWidget");
        addPubWidget = new QWidget();
        addPubWidget->setObjectName("addPubWidget");
        pubAddGL = new QGridLayout(addPubWidget);
        pubAddGL->setSpacing(0);
        pubAddGL->setObjectName("pubAddGL");
        pubAddGL->setContentsMargins(0, 0, 0, 0);
        pubFrame = new QFrame(addPubWidget);
        pubFrame->setObjectName("pubFrame");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pubFrame->sizePolicy().hasHeightForWidth());
        pubFrame->setSizePolicy(sizePolicy2);
        pubFrame->setMinimumSize(QSize(500, 0));
        pubFrame->setMaximumSize(QSize(500, 16777215));
        pubFrame->setStyleSheet(QString::fromUtf8("\n"
"\n"
"QFrame{\n"
"border: 1px solid rgb(188, 232, 241);\n"
"border-radius: 16px;\n"
"}\n"
"\n"
"QLabel{\n"
"border: none;\n"
"border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;\n"
"padding-left: 12px;\n"
"}\n"
"\n"
"QLineEdit{\n"
"color: black;\n"
"border: 1px solid rgb(172, 172, 172);\n"
"border-radius: 16px;\n"
"margin-left: 12px;\n"
"margin-right: 12px;\n"
"padding-left: 12px;\n"
"}\n"
"\n"
"QRadioButton{\n"
"color: black;\n"
"margin-left: 12px;\n"
"}\n"
"\n"
"\n"
""));
        verticalLayout_4 = new QVBoxLayout(pubFrame);
        verticalLayout_4->setSpacing(8);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        pubInfoQL = new QLabel(pubFrame);
        pubInfoQL->setObjectName("pubInfoQL");
        sizePolicy.setHeightForWidth(pubInfoQL->sizePolicy().hasHeightForWidth());
        pubInfoQL->setSizePolicy(sizePolicy);
        pubInfoQL->setMinimumSize(QSize(0, 52));
        pubInfoQL->setMaximumSize(QSize(16777215, 52));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI")});
        font1.setPointSize(11);
        font1.setWeight(QFont::DemiBold);
        pubInfoQL->setFont(font1);
        pubInfoQL->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: rgb(49, 112, 143);\n"
"background-color: rgb(214, 234, 244);\n"
"border-bottom: 1px solid  rgb(188, 232, 241);\n"
"\n"
"}"));
        pubInfoQL->setMargin(3);
        pubInfoQL->setIndent(0);

        verticalLayout_4->addWidget(pubInfoQL);

        pubNameQL = new QLabel(pubFrame);
        pubNameQL->setObjectName("pubNameQL");
        sizePolicy.setHeightForWidth(pubNameQL->sizePolicy().hasHeightForWidth());
        pubNameQL->setSizePolicy(sizePolicy);
        pubNameQL->setMinimumSize(QSize(0, 36));
        pubNameQL->setMaximumSize(QSize(16777215, 36));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Segoe UI Semibold")});
        font2.setPointSize(11);
        font2.setBold(false);
        pubNameQL->setFont(font2);
        pubNameQL->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        verticalLayout_4->addWidget(pubNameQL);

        pubLE = new QLineEdit(pubFrame);
        pubLE->setObjectName("pubLE");
        pubLE->setMinimumSize(QSize(0, 36));
        pubLE->setMaximumSize(QSize(16777215, 36));
        QFont font3;
        font3.setPointSize(10);
        pubLE->setFont(font3);

        verticalLayout_4->addWidget(pubLE);

        pubAddBtn = new QPushButton(pubFrame);
        pubAddBtn->setObjectName("pubAddBtn");
        sizePolicy1.setHeightForWidth(pubAddBtn->sizePolicy().hasHeightForWidth());
        pubAddBtn->setSizePolicy(sizePolicy1);
        pubAddBtn->setMinimumSize(QSize(120, 56));
        pubAddBtn->setMaximumSize(QSize(120, 56));
        QFont font4;
        font4.setPointSize(10);
        font4.setWeight(QFont::DemiBold);
        pubAddBtn->setFont(font4);
        pubAddBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(91, 192, 222);\n"
"border: 1px solid rgb(91, 192, 222);\n"
"border-radius: 16px;\n"
"margin: 12px\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 0, 0);\n"
"border: 1px solid black;\n"
"border-radius: 16px;\n"
"}"));

        verticalLayout_4->addWidget(pubAddBtn);


        pubAddGL->addWidget(pubFrame, 0, 0, 1, 1);

        pubStackedWidget->addWidget(addPubWidget);
        managePubWidget = new QWidget();
        managePubWidget->setObjectName("managePubWidget");
        pubManageGL = new QGridLayout(managePubWidget);
        pubManageGL->setSpacing(0);
        pubManageGL->setObjectName("pubManageGL");
        pubManageGL->setContentsMargins(0, 0, 0, 0);
        pubScrollArea = new QScrollArea(managePubWidget);
        pubScrollArea->setObjectName("pubScrollArea");
        pubScrollArea->setStyleSheet(QString::fromUtf8(""));
        pubScrollArea->setWidgetResizable(true);
        pubContents = new QWidget();
        pubContents->setObjectName("pubContents");
        pubContents->setGeometry(QRect(0, 0, 897, 500));
        pubContents->setStyleSheet(QString::fromUtf8(""));
        pubContentsGL = new QGridLayout(pubContents);
        pubContentsGL->setObjectName("pubContentsGL");
        pubContentsGL->setContentsMargins(48, 48, 48, 48);
        pubWidget = new QWidget(pubContents);
        pubWidget->setObjectName("pubWidget");
        pubWidget->setStyleSheet(QString::fromUtf8("QWidget{\n"
"color: rgb(0, 0, 0);\n"
"border: 1px solid lightgray;\n"
"border-radius: 12px;\n"
"}\n"
"\n"
""));
        verticalLayout_7 = new QVBoxLayout(pubWidget);
        verticalLayout_7->setSpacing(0);
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(pubWidget);
        label_11->setObjectName("label_11");
        sizePolicy.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy);
        label_11->setMinimumSize(QSize(0, 48));
        label_11->setMaximumSize(QSize(16777215, 48));
        label_11->setFont(font);
        label_11->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: black;\n"
"background-color: rgb(230, 230, 230);\n"
"border: 1px solid lightgray;\n"
"padding-left: 12px;\n"
"border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;\n"
"}"));

        verticalLayout_7->addWidget(label_11);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(8);
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        horizontalLayout_11->setContentsMargins(8, 8, 8, 8);
        spinBox_3 = new QSpinBox(pubWidget);
        spinBox_3->setObjectName("spinBox_3");
        sizePolicy1.setHeightForWidth(spinBox_3->sizePolicy().hasHeightForWidth());
        spinBox_3->setSizePolicy(sizePolicy1);
        spinBox_3->setMinimumSize(QSize(72, 36));
        spinBox_3->setMaximumSize(QSize(72, 36));
        QFont font5;
        font5.setPointSize(11);
        spinBox_3->setFont(font5);
        spinBox_3->setStyleSheet(QString::fromUtf8("\n"
"border: 1px solid lightgray;\n"
"border-radius: 8px;\n"
""));
        spinBox_3->setAlignment(Qt::AlignmentFlag::AlignCenter);
        spinBox_3->setMinimum(25);
        spinBox_3->setMaximum(100);
        spinBox_3->setSingleStep(25);

        horizontalLayout_11->addWidget(spinBox_3);

        label_12 = new QLabel(pubWidget);
        label_12->setObjectName("label_12");
        label_12->setFont(font5);
        label_12->setStyleSheet(QString::fromUtf8("border:none;"));

        horizontalLayout_11->addWidget(label_12);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_9);

        label_13 = new QLabel(pubWidget);
        label_13->setObjectName("label_13");
        label_13->setFont(font5);
        label_13->setStyleSheet(QString::fromUtf8("border:none;"));

        horizontalLayout_11->addWidget(label_13);

        lineEdit_3 = new QLineEdit(pubWidget);
        lineEdit_3->setObjectName("lineEdit_3");
        sizePolicy1.setHeightForWidth(lineEdit_3->sizePolicy().hasHeightForWidth());
        lineEdit_3->setSizePolicy(sizePolicy1);
        lineEdit_3->setMinimumSize(QSize(200, 36));
        lineEdit_3->setMaximumSize(QSize(200, 36));
        lineEdit_3->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"border: 1px solid lightgray;\n"
"border-radius: 8px;\n"
"padding-left: 12px;\n"
"color: rgb(79, 79, 79);\n"
"}"));

        horizontalLayout_11->addWidget(lineEdit_3);


        verticalLayout_7->addLayout(horizontalLayout_11);

        tableWidget_3 = new QTableWidget(pubWidget);
        if (tableWidget_3->columnCount() < 5)
            tableWidget_3->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font);
        tableWidget_3->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font);
        tableWidget_3->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setFont(font);
        tableWidget_3->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setFont(font);
        tableWidget_3->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setFont(font);
        tableWidget_3->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        tableWidget_3->setObjectName("tableWidget_3");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(tableWidget_3->sizePolicy().hasHeightForWidth());
        tableWidget_3->setSizePolicy(sizePolicy3);
        tableWidget_3->setFont(font5);
        tableWidget_3->setStyleSheet(QString::fromUtf8("QHeaderView{\n"
"border: none;\n"
"border-radius:0px;\n"
"border-bottom: 1px solid lightgray;\n"
"min-height: 36px;\n"
"}\n"
"\n"
"QHeaderView::section{\n"
"\n"
"	background-color: rgb(243, 244, 248);\n"
"border:none;\n"
"border-right: 1px solid lightgray;\n"
"}\n"
"\n"
"QTableWidget{\n"
"border-radius: 0px;\n"
"}"));
        tableWidget_3->setLineWidth(1);
        tableWidget_3->setMidLineWidth(0);
        tableWidget_3->setHorizontalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAsNeeded);
        tableWidget_3->setEditTriggers(QAbstractItemView::EditTrigger::NoEditTriggers);
        tableWidget_3->setTextElideMode(Qt::TextElideMode::ElideRight);
        tableWidget_3->setShowGrid(true);
        tableWidget_3->setGridStyle(Qt::PenStyle::SolidLine);
        tableWidget_3->setWordWrap(true);
        tableWidget_3->setCornerButtonEnabled(true);
        tableWidget_3->horizontalHeader()->setVisible(true);
        tableWidget_3->horizontalHeader()->setCascadingSectionResizes(false);
        tableWidget_3->horizontalHeader()->setMinimumSectionSize(200);
        tableWidget_3->horizontalHeader()->setDefaultSectionSize(200);
        tableWidget_3->horizontalHeader()->setHighlightSections(false);
        tableWidget_3->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableWidget_3->horizontalHeader()->setStretchLastSection(true);
        tableWidget_3->verticalHeader()->setVisible(false);
        tableWidget_3->verticalHeader()->setMinimumSectionSize(36);
        tableWidget_3->verticalHeader()->setDefaultSectionSize(36);
        tableWidget_3->verticalHeader()->setStretchLastSection(false);

        verticalLayout_7->addWidget(tableWidget_3);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(0);
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        horizontalLayout_12->setContentsMargins(8, 8, 8, 8);
        label_14 = new QLabel(pubWidget);
        label_14->setObjectName("label_14");
        sizePolicy.setHeightForWidth(label_14->sizePolicy().hasHeightForWidth());
        label_14->setSizePolicy(sizePolicy);
        label_14->setMinimumSize(QSize(0, 36));
        label_14->setMaximumSize(QSize(16777215, 36));
        label_14->setFont(font5);
        label_14->setStyleSheet(QString::fromUtf8("border:none;"));

        horizontalLayout_12->addWidget(label_14);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_10);

        pushButton_5 = new QPushButton(pubWidget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setMinimumSize(QSize(0, 36));
        pushButton_5->setMaximumSize(QSize(16777215, 36));
        pushButton_5->setFont(font5);
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
"background-color: rgb(0, 0, 0);\n"
"border: 1px solid black;\n"
"}"));

        horizontalLayout_12->addWidget(pushButton_5);

        label_15 = new QLabel(pubWidget);
        label_15->setObjectName("label_15");
        sizePolicy1.setHeightForWidth(label_15->sizePolicy().hasHeightForWidth());
        label_15->setSizePolicy(sizePolicy1);
        label_15->setMinimumSize(QSize(32, 36));
        label_15->setMaximumSize(QSize(32, 36));
        label_15->setFont(font5);
        label_15->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 0, 0);\n"
"border: 1px solid black;\n"
"border-radius: 0px;\n"
"}"));
        label_15->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_12->addWidget(label_15);

        pushButton_6 = new QPushButton(pubWidget);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setMinimumSize(QSize(0, 36));
        pushButton_6->setMaximumSize(QSize(16777215, 36));
        pushButton_6->setFont(font5);
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
"background-color: rgb(0, 0, 0);\n"
"border: 1px solid black;\n"
"}"));

        horizontalLayout_12->addWidget(pushButton_6);


        verticalLayout_7->addLayout(horizontalLayout_12);


        pubContentsGL->addWidget(pubWidget, 0, 0, 1, 1);

        pubScrollArea->setWidget(pubContents);

        pubManageGL->addWidget(pubScrollArea, 0, 0, 1, 1);

        pubStackedWidget->addWidget(managePubWidget);

        verticalLayout->addWidget(pubStackedWidget);


        retranslateUi(PublicationFragment);

        QMetaObject::connectSlotsByName(PublicationFragment);
    } // setupUi

    void retranslateUi(QWidget *PublicationFragment)
    {
        PublicationFragment->setWindowTitle(QCoreApplication::translate("PublicationFragment", "Form", nullptr));
        addPubBtn->setText(QCoreApplication::translate("PublicationFragment", "Add Publication", nullptr));
        managePubBtn->setText(QCoreApplication::translate("PublicationFragment", "Manage Publications", nullptr));
        pubInfoQL->setText(QCoreApplication::translate("PublicationFragment", "Publication Info", nullptr));
        pubNameQL->setText(QCoreApplication::translate("PublicationFragment", "Publication Name", nullptr));
        pubAddBtn->setText(QCoreApplication::translate("PublicationFragment", "Add", nullptr));
        label_11->setText(QCoreApplication::translate("PublicationFragment", "Publications Listing", nullptr));
        label_12->setText(QCoreApplication::translate("PublicationFragment", "records per page", nullptr));
        label_13->setText(QCoreApplication::translate("PublicationFragment", "Search :", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_3->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("PublicationFragment", "S.No.", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_3->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("PublicationFragment", "Publication", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_3->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("PublicationFragment", "Creation Date", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_3->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("PublicationFragment", "Updation Date", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_3->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("PublicationFragment", "Action", nullptr));
        label_14->setText(QCoreApplication::translate("PublicationFragment", "Showing", nullptr));
        pushButton_5->setText(QCoreApplication::translate("PublicationFragment", "Previous", nullptr));
        label_15->setText(QCoreApplication::translate("PublicationFragment", "1", nullptr));
        pushButton_6->setText(QCoreApplication::translate("PublicationFragment", "Next", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PublicationFragment: public Ui_PublicationFragment {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PUBLICATIONFORM_H
