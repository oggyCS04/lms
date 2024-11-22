/********************************************************************************
** Form generated from reading UI file 'bookissueform.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOKISSUEFORM_H
#define UI_BOOKISSUEFORM_H

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

class Ui_BookIssueFragment
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *bookIssueHeader;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *addBookIssueBtn;
    QSpacerItem *bookIssueSpacer;
    QScrollArea *bookIssueScrollArea;
    QWidget *bookIssueScrollContents;
    QGridLayout *gridLayout_4;
    QWidget *manageBookIssueWidget;
    QVBoxLayout *verticalLayout_6;
    QLabel *bookIssueListingLabel;
    QHBoxLayout *horizontalLayout_9;
    QSpinBox *spinBox_2;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_7;
    QLabel *label_8;
    QLineEdit *lineEdit_2;
    QTableWidget *bookIssueTableWidget;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_9;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *pushButton_3;
    QLabel *label_10;
    QPushButton *pushButton_4;

    void setupUi(QWidget *BookIssueFragment)
    {
        if (BookIssueFragment->objectName().isEmpty())
            BookIssueFragment->setObjectName("BookIssueFragment");
        BookIssueFragment->resize(722, 720);
        verticalLayout = new QVBoxLayout(BookIssueFragment);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        bookIssueHeader = new QWidget(BookIssueFragment);
        bookIssueHeader->setObjectName("bookIssueHeader");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(bookIssueHeader->sizePolicy().hasHeightForWidth());
        bookIssueHeader->setSizePolicy(sizePolicy);
        bookIssueHeader->setMinimumSize(QSize(0, 0));
        bookIssueHeader->setMaximumSize(QSize(16777215, 16777215));
        bookIssueHeader->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout_3 = new QHBoxLayout(bookIssueHeader);
        horizontalLayout_3->setSpacing(7);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(48, 8, 0, 8);
        addBookIssueBtn = new QPushButton(bookIssueHeader);
        addBookIssueBtn->setObjectName("addBookIssueBtn");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(addBookIssueBtn->sizePolicy().hasHeightForWidth());
        addBookIssueBtn->setSizePolicy(sizePolicy1);
        QFont font;
        font.setPointSize(11);
        font.setWeight(QFont::DemiBold);
        addBookIssueBtn->setFont(font);
        addBookIssueBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color: white;\n"
"background-color: rgb(6, 106, 254);\n"
"border: 1px solid rgb(6, 106, 254);\n"
"padding: 10px;\n"
"border-radius: 12px;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background-color: rgb(0, 105, 217);\n"
"border: 1px solid rgb(0, 105, 217);\n"
"}\n"
""));
        addBookIssueBtn->setCheckable(false);
        addBookIssueBtn->setChecked(false);
        addBookIssueBtn->setAutoExclusive(false);

        horizontalLayout_3->addWidget(addBookIssueBtn);

        bookIssueSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(bookIssueSpacer);


        verticalLayout->addWidget(bookIssueHeader);

        bookIssueScrollArea = new QScrollArea(BookIssueFragment);
        bookIssueScrollArea->setObjectName("bookIssueScrollArea");
        bookIssueScrollArea->setStyleSheet(QString::fromUtf8(""));
        bookIssueScrollArea->setWidgetResizable(true);
        bookIssueScrollContents = new QWidget();
        bookIssueScrollContents->setObjectName("bookIssueScrollContents");
        bookIssueScrollContents->setGeometry(QRect(0, 0, 720, 656));
        bookIssueScrollContents->setStyleSheet(QString::fromUtf8(""));
        gridLayout_4 = new QGridLayout(bookIssueScrollContents);
        gridLayout_4->setSpacing(0);
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_4->setContentsMargins(48, 8, 48, 48);
        manageBookIssueWidget = new QWidget(bookIssueScrollContents);
        manageBookIssueWidget->setObjectName("manageBookIssueWidget");
        manageBookIssueWidget->setStyleSheet(QString::fromUtf8("QWidget{\n"
"color: rgb(0, 0, 0);\n"
"\n"
"background-color: rgb(255, 255, 255);\n"
"border: 1px solid lightgray;\n"
"border-radius: 12px;\n"
"}\n"
"\n"
""));
        verticalLayout_6 = new QVBoxLayout(manageBookIssueWidget);
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        bookIssueListingLabel = new QLabel(manageBookIssueWidget);
        bookIssueListingLabel->setObjectName("bookIssueListingLabel");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(bookIssueListingLabel->sizePolicy().hasHeightForWidth());
        bookIssueListingLabel->setSizePolicy(sizePolicy2);
        bookIssueListingLabel->setMinimumSize(QSize(0, 48));
        bookIssueListingLabel->setMaximumSize(QSize(16777215, 48));
        bookIssueListingLabel->setFont(font);
        bookIssueListingLabel->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: black;\n"
"background-color: rgb(243, 244, 248);\n"
"border: 1px solid lightgray;\n"
"padding-left: 12px;\n"
"border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;\n"
"}"));

        verticalLayout_6->addWidget(bookIssueListingLabel);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(8);
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        horizontalLayout_9->setContentsMargins(8, 8, 8, 8);
        spinBox_2 = new QSpinBox(manageBookIssueWidget);
        spinBox_2->setObjectName("spinBox_2");
        sizePolicy2.setHeightForWidth(spinBox_2->sizePolicy().hasHeightForWidth());
        spinBox_2->setSizePolicy(sizePolicy2);
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

        label_4 = new QLabel(manageBookIssueWidget);
        label_4->setObjectName("label_4");
        label_4->setFont(font1);
        label_4->setStyleSheet(QString::fromUtf8("border:none;"));

        horizontalLayout_9->addWidget(label_4);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_7);

        label_8 = new QLabel(manageBookIssueWidget);
        label_8->setObjectName("label_8");
        label_8->setFont(font1);
        label_8->setStyleSheet(QString::fromUtf8("border:none;"));

        horizontalLayout_9->addWidget(label_8);

        lineEdit_2 = new QLineEdit(manageBookIssueWidget);
        lineEdit_2->setObjectName("lineEdit_2");
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

        bookIssueTableWidget = new QTableWidget(manageBookIssueWidget);
        if (bookIssueTableWidget->columnCount() < 8)
            bookIssueTableWidget->setColumnCount(8);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font);
        bookIssueTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font);
        bookIssueTableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setFont(font);
        bookIssueTableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setFont(font);
        bookIssueTableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setFont(font);
        bookIssueTableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        __qtablewidgetitem5->setFont(font);
        bookIssueTableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        __qtablewidgetitem6->setFont(font);
        bookIssueTableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        __qtablewidgetitem7->setFont(font);
        bookIssueTableWidget->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        bookIssueTableWidget->setObjectName("bookIssueTableWidget");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(bookIssueTableWidget->sizePolicy().hasHeightForWidth());
        bookIssueTableWidget->setSizePolicy(sizePolicy3);
        bookIssueTableWidget->setFont(font1);
        bookIssueTableWidget->setStyleSheet(QString::fromUtf8("QHeaderView{\n"
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
        bookIssueTableWidget->setLineWidth(1);
        bookIssueTableWidget->setMidLineWidth(0);
        bookIssueTableWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAsNeeded);
        bookIssueTableWidget->setEditTriggers(QAbstractItemView::EditTrigger::NoEditTriggers);
        bookIssueTableWidget->setAlternatingRowColors(true);
        bookIssueTableWidget->setSelectionMode(QAbstractItemView::SelectionMode::ExtendedSelection);
        bookIssueTableWidget->setTextElideMode(Qt::TextElideMode::ElideRight);
        bookIssueTableWidget->setShowGrid(true);
        bookIssueTableWidget->setGridStyle(Qt::PenStyle::SolidLine);
        bookIssueTableWidget->setWordWrap(true);
        bookIssueTableWidget->setCornerButtonEnabled(true);
        bookIssueTableWidget->horizontalHeader()->setVisible(true);
        bookIssueTableWidget->horizontalHeader()->setCascadingSectionResizes(true);
        bookIssueTableWidget->horizontalHeader()->setMinimumSectionSize(148);
        bookIssueTableWidget->horizontalHeader()->setDefaultSectionSize(148);
        bookIssueTableWidget->horizontalHeader()->setHighlightSections(false);
        bookIssueTableWidget->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        bookIssueTableWidget->horizontalHeader()->setStretchLastSection(true);
        bookIssueTableWidget->verticalHeader()->setVisible(false);
        bookIssueTableWidget->verticalHeader()->setCascadingSectionResizes(false);
        bookIssueTableWidget->verticalHeader()->setMinimumSectionSize(48);
        bookIssueTableWidget->verticalHeader()->setDefaultSectionSize(48);
        bookIssueTableWidget->verticalHeader()->setStretchLastSection(false);

        verticalLayout_6->addWidget(bookIssueTableWidget);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(0);
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        horizontalLayout_10->setContentsMargins(8, 8, 8, 8);
        label_9 = new QLabel(manageBookIssueWidget);
        label_9->setObjectName("label_9");
        sizePolicy2.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy2);
        label_9->setMinimumSize(QSize(0, 36));
        label_9->setMaximumSize(QSize(16777215, 36));
        label_9->setFont(font1);
        label_9->setStyleSheet(QString::fromUtf8("border:none;"));

        horizontalLayout_10->addWidget(label_9);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_8);

        pushButton_3 = new QPushButton(manageBookIssueWidget);
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

        label_10 = new QLabel(manageBookIssueWidget);
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

        pushButton_4 = new QPushButton(manageBookIssueWidget);
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


        gridLayout_4->addWidget(manageBookIssueWidget, 0, 0, 1, 1);

        bookIssueScrollArea->setWidget(bookIssueScrollContents);

        verticalLayout->addWidget(bookIssueScrollArea);


        retranslateUi(BookIssueFragment);

        QMetaObject::connectSlotsByName(BookIssueFragment);
    } // setupUi

    void retranslateUi(QWidget *BookIssueFragment)
    {
        BookIssueFragment->setWindowTitle(QCoreApplication::translate("BookIssueFragment", "Form", nullptr));
        addBookIssueBtn->setText(QCoreApplication::translate("BookIssueFragment", "Issue New Book", nullptr));
        bookIssueListingLabel->setText(QCoreApplication::translate("BookIssueFragment", "Issued Books", nullptr));
        label_4->setText(QCoreApplication::translate("BookIssueFragment", "records per page", nullptr));
        label_8->setText(QCoreApplication::translate("BookIssueFragment", "Search :", nullptr));
        QTableWidgetItem *___qtablewidgetitem = bookIssueTableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("BookIssueFragment", "#", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = bookIssueTableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("BookIssueFragment", "Student Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = bookIssueTableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("BookIssueFragment", "Book Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = bookIssueTableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("BookIssueFragment", "Book ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = bookIssueTableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("BookIssueFragment", "ISBN", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = bookIssueTableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("BookIssueFragment", "Issued Date", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = bookIssueTableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("BookIssueFragment", "Return Date", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = bookIssueTableWidget->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("BookIssueFragment", "Action", nullptr));
        label_9->setText(QCoreApplication::translate("BookIssueFragment", "Showing", nullptr));
        pushButton_3->setText(QCoreApplication::translate("BookIssueFragment", "Previous", nullptr));
        label_10->setText(QCoreApplication::translate("BookIssueFragment", "1", nullptr));
        pushButton_4->setText(QCoreApplication::translate("BookIssueFragment", "Next", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BookIssueFragment: public Ui_BookIssueFragment {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOKISSUEFORM_H
