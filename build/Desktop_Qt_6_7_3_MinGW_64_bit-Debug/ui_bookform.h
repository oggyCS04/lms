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

class Ui_BookFragment
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *book_header;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *addBookBtn;
    QSpacerItem *bookSpacer;
    QScrollArea *bookScrollArea;
    QWidget *bookScrollContents;
    QGridLayout *gridLayout_4;
    QWidget *manageBookWidget;
    QVBoxLayout *verticalLayout_6;
    QLabel *bookListingLabel;
    QHBoxLayout *horizontalLayout_9;
    QSpinBox *spinBox_2;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_7;
    QLabel *label_8;
    QLineEdit *lineEdit_2;
    QTableWidget *bookTableWidget;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_9;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *pushButton_3;
    QLabel *label_10;
    QPushButton *pushButton_4;

    void setupUi(QWidget *BookFragment)
    {
        if (BookFragment->objectName().isEmpty())
            BookFragment->setObjectName("BookFragment");
        BookFragment->resize(938, 622);
        verticalLayout = new QVBoxLayout(BookFragment);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        book_header = new QWidget(BookFragment);
        book_header->setObjectName("book_header");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(book_header->sizePolicy().hasHeightForWidth());
        book_header->setSizePolicy(sizePolicy);
        book_header->setMinimumSize(QSize(0, 0));
        book_header->setMaximumSize(QSize(16777215, 16777215));
        book_header->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout_3 = new QHBoxLayout(book_header);
        horizontalLayout_3->setSpacing(7);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(48, 8, 0, 8);
        addBookBtn = new QPushButton(book_header);
        addBookBtn->setObjectName("addBookBtn");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(addBookBtn->sizePolicy().hasHeightForWidth());
        addBookBtn->setSizePolicy(sizePolicy1);
        QFont font;
        font.setPointSize(11);
        font.setWeight(QFont::DemiBold);
        addBookBtn->setFont(font);
        addBookBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        addBookBtn->setCheckable(false);
        addBookBtn->setChecked(false);
        addBookBtn->setAutoExclusive(false);

        horizontalLayout_3->addWidget(addBookBtn);

        bookSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(bookSpacer);


        verticalLayout->addWidget(book_header);

        bookScrollArea = new QScrollArea(BookFragment);
        bookScrollArea->setObjectName("bookScrollArea");
        bookScrollArea->setStyleSheet(QString::fromUtf8(""));
        bookScrollArea->setWidgetResizable(true);
        bookScrollContents = new QWidget();
        bookScrollContents->setObjectName("bookScrollContents");
        bookScrollContents->setGeometry(QRect(0, 0, 936, 558));
        bookScrollContents->setStyleSheet(QString::fromUtf8(""));
        gridLayout_4 = new QGridLayout(bookScrollContents);
        gridLayout_4->setSpacing(0);
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_4->setContentsMargins(48, 8, 48, 48);
        manageBookWidget = new QWidget(bookScrollContents);
        manageBookWidget->setObjectName("manageBookWidget");
        manageBookWidget->setStyleSheet(QString::fromUtf8("QWidget{\n"
"color: rgb(0, 0, 0);\n"
"\n"
"background-color: rgb(255, 255, 255);\n"
"border: 1px solid lightgray;\n"
"border-radius: 12px;\n"
"}\n"
"\n"
""));
        verticalLayout_6 = new QVBoxLayout(manageBookWidget);
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        bookListingLabel = new QLabel(manageBookWidget);
        bookListingLabel->setObjectName("bookListingLabel");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(bookListingLabel->sizePolicy().hasHeightForWidth());
        bookListingLabel->setSizePolicy(sizePolicy2);
        bookListingLabel->setMinimumSize(QSize(0, 48));
        bookListingLabel->setMaximumSize(QSize(16777215, 48));
        bookListingLabel->setFont(font);
        bookListingLabel->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: black;\n"
"background-color: rgb(243, 244, 248);\n"
"border: 1px solid lightgray;\n"
"padding-left: 12px;\n"
"border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;\n"
"}"));

        verticalLayout_6->addWidget(bookListingLabel);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(8);
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        horizontalLayout_9->setContentsMargins(8, 8, 8, 8);
        spinBox_2 = new QSpinBox(manageBookWidget);
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

        label_4 = new QLabel(manageBookWidget);
        label_4->setObjectName("label_4");
        label_4->setFont(font1);
        label_4->setStyleSheet(QString::fromUtf8("border:none;"));

        horizontalLayout_9->addWidget(label_4);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_7);

        label_8 = new QLabel(manageBookWidget);
        label_8->setObjectName("label_8");
        label_8->setFont(font1);
        label_8->setStyleSheet(QString::fromUtf8("border:none;"));

        horizontalLayout_9->addWidget(label_8);

        lineEdit_2 = new QLineEdit(manageBookWidget);
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

        bookTableWidget = new QTableWidget(manageBookWidget);
        if (bookTableWidget->columnCount() < 10)
            bookTableWidget->setColumnCount(10);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font);
        bookTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font);
        bookTableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setFont(font);
        bookTableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setFont(font);
        bookTableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setFont(font);
        bookTableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        __qtablewidgetitem5->setFont(font);
        bookTableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        __qtablewidgetitem6->setFont(font);
        bookTableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        __qtablewidgetitem7->setFont(font);
        bookTableWidget->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        __qtablewidgetitem8->setFont(font);
        bookTableWidget->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        __qtablewidgetitem9->setFont(font);
        bookTableWidget->setHorizontalHeaderItem(9, __qtablewidgetitem9);
        bookTableWidget->setObjectName("bookTableWidget");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(bookTableWidget->sizePolicy().hasHeightForWidth());
        bookTableWidget->setSizePolicy(sizePolicy3);
        bookTableWidget->setFont(font1);
        bookTableWidget->setStyleSheet(QString::fromUtf8("QHeaderView{\n"
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
        bookTableWidget->setLineWidth(1);
        bookTableWidget->setMidLineWidth(0);
        bookTableWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAsNeeded);
        bookTableWidget->setEditTriggers(QAbstractItemView::EditTrigger::NoEditTriggers);
        bookTableWidget->setAlternatingRowColors(true);
        bookTableWidget->setSelectionMode(QAbstractItemView::SelectionMode::ExtendedSelection);
        bookTableWidget->setTextElideMode(Qt::TextElideMode::ElideRight);
        bookTableWidget->setShowGrid(true);
        bookTableWidget->setGridStyle(Qt::PenStyle::SolidLine);
        bookTableWidget->setWordWrap(true);
        bookTableWidget->setCornerButtonEnabled(true);
        bookTableWidget->horizontalHeader()->setVisible(true);
        bookTableWidget->horizontalHeader()->setCascadingSectionResizes(true);
        bookTableWidget->horizontalHeader()->setMinimumSectionSize(100);
        bookTableWidget->horizontalHeader()->setDefaultSectionSize(124);
        bookTableWidget->horizontalHeader()->setHighlightSections(false);
        bookTableWidget->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        bookTableWidget->horizontalHeader()->setStretchLastSection(true);
        bookTableWidget->verticalHeader()->setVisible(false);
        bookTableWidget->verticalHeader()->setCascadingSectionResizes(false);
        bookTableWidget->verticalHeader()->setMinimumSectionSize(48);
        bookTableWidget->verticalHeader()->setDefaultSectionSize(48);
        bookTableWidget->verticalHeader()->setStretchLastSection(false);

        verticalLayout_6->addWidget(bookTableWidget);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(0);
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        horizontalLayout_10->setContentsMargins(8, 8, 8, 8);
        label_9 = new QLabel(manageBookWidget);
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

        pushButton_3 = new QPushButton(manageBookWidget);
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

        label_10 = new QLabel(manageBookWidget);
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

        pushButton_4 = new QPushButton(manageBookWidget);
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


        gridLayout_4->addWidget(manageBookWidget, 0, 0, 1, 1);

        bookScrollArea->setWidget(bookScrollContents);

        verticalLayout->addWidget(bookScrollArea);


        retranslateUi(BookFragment);

        QMetaObject::connectSlotsByName(BookFragment);
    } // setupUi

    void retranslateUi(QWidget *BookFragment)
    {
        BookFragment->setWindowTitle(QCoreApplication::translate("BookFragment", "Form", nullptr));
        addBookBtn->setText(QCoreApplication::translate("BookFragment", "Add New", nullptr));
        bookListingLabel->setText(QCoreApplication::translate("BookFragment", "Books Listing", nullptr));
        label_4->setText(QCoreApplication::translate("BookFragment", "records per page", nullptr));
        label_8->setText(QCoreApplication::translate("BookFragment", "Search :", nullptr));
        QTableWidgetItem *___qtablewidgetitem = bookTableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("BookFragment", "#", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = bookTableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("BookFragment", "Book Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = bookTableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("BookFragment", "Book ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = bookTableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("BookFragment", "Total Copies", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = bookTableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("BookFragment", "Issued Copies", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = bookTableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("BookFragment", "Category", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = bookTableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("BookFragment", "Publication", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = bookTableWidget->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("BookFragment", "ISBN", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = bookTableWidget->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("BookFragment", "Price", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = bookTableWidget->horizontalHeaderItem(9);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("BookFragment", "Action", nullptr));
        label_9->setText(QCoreApplication::translate("BookFragment", "Showing", nullptr));
        pushButton_3->setText(QCoreApplication::translate("BookFragment", "Previous", nullptr));
        label_10->setText(QCoreApplication::translate("BookFragment", "1", nullptr));
        pushButton_4->setText(QCoreApplication::translate("BookFragment", "Next", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BookFragment: public Ui_BookFragment {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOKFORM_H
