/********************************************************************************
** Form generated from reading UI file 'categoryform.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CATEGORYFORM_H
#define UI_CATEGORYFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CategoryFragment
{
public:
    QVBoxLayout *categoryFragmentVL;
    QWidget *category_header;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *addCategoryBtn;
    QPushButton *manageCategoryBtn;
    QSpacerItem *categorySpacer;
    QStackedWidget *category_stackedWidget;
    QWidget *addCategoryWidget;
    QGridLayout *gridLayout;
    QFrame *categoryFrame;
    QVBoxLayout *verticalLayout_4;
    QLabel *categoryInfoQL;
    QLabel *categoryNameQL;
    QLineEdit *categoryLE;
    QLabel *categoryStatusQL;
    QRadioButton *activeRadioBtn;
    QRadioButton *InactiveRadioBtn;
    QPushButton *categoryDataBtn;
    QWidget *manageCategoryWidget;
    QGridLayout *gridLayout_2;
    QScrollArea *manageCatScrollArea;
    QWidget *manageCatContents;
    QGridLayout *gridLayout_3;
    QWidget *manageCatWidget;
    QVBoxLayout *verticalLayout_5;
    QLabel *label;
    QHBoxLayout *horizontalLayout_7;
    QSpinBox *spinBox;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_5;
    QLineEdit *lineEdit;
    QTableWidget *tableWidget;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *pushButton;
    QLabel *label_7;
    QPushButton *pushButton_2;

    void setupUi(QWidget *CategoryFragment)
    {
        if (CategoryFragment->objectName().isEmpty())
            CategoryFragment->setObjectName("CategoryFragment");
        CategoryFragment->resize(1008, 667);
        CategoryFragment->setStyleSheet(QString::fromUtf8("QWidget{\n"
"background-color: rgb(243, 244, 248);\n"
"}"));
        categoryFragmentVL = new QVBoxLayout(CategoryFragment);
        categoryFragmentVL->setSpacing(0);
        categoryFragmentVL->setObjectName("categoryFragmentVL");
        categoryFragmentVL->setContentsMargins(0, 0, 0, 0);
        category_header = new QWidget(CategoryFragment);
        category_header->setObjectName("category_header");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(category_header->sizePolicy().hasHeightForWidth());
        category_header->setSizePolicy(sizePolicy);
        category_header->setMinimumSize(QSize(0, 64));
        category_header->setMaximumSize(QSize(16777215, 64));
        category_header->setStyleSheet(QString::fromUtf8("QWidget{\n"
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
        horizontalLayout_3 = new QHBoxLayout(category_header);
        horizontalLayout_3->setSpacing(11);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        addCategoryBtn = new QPushButton(category_header);
        addCategoryBtn->setObjectName("addCategoryBtn");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(addCategoryBtn->sizePolicy().hasHeightForWidth());
        addCategoryBtn->setSizePolicy(sizePolicy1);
        QFont font;
        font.setPointSize(11);
        font.setWeight(QFont::DemiBold);
        addCategoryBtn->setFont(font);
        addCategoryBtn->setCheckable(true);
        addCategoryBtn->setChecked(true);
        addCategoryBtn->setAutoExclusive(true);

        horizontalLayout_3->addWidget(addCategoryBtn);

        manageCategoryBtn = new QPushButton(category_header);
        manageCategoryBtn->setObjectName("manageCategoryBtn");
        sizePolicy1.setHeightForWidth(manageCategoryBtn->sizePolicy().hasHeightForWidth());
        manageCategoryBtn->setSizePolicy(sizePolicy1);
        manageCategoryBtn->setFont(font);
        manageCategoryBtn->setCheckable(true);
        manageCategoryBtn->setChecked(false);
        manageCategoryBtn->setAutoExclusive(true);

        horizontalLayout_3->addWidget(manageCategoryBtn);

        categorySpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(categorySpacer);


        categoryFragmentVL->addWidget(category_header);

        category_stackedWidget = new QStackedWidget(CategoryFragment);
        category_stackedWidget->setObjectName("category_stackedWidget");
        category_stackedWidget->setStyleSheet(QString::fromUtf8(""));
        addCategoryWidget = new QWidget();
        addCategoryWidget->setObjectName("addCategoryWidget");
        gridLayout = new QGridLayout(addCategoryWidget);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        categoryFrame = new QFrame(addCategoryWidget);
        categoryFrame->setObjectName("categoryFrame");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(categoryFrame->sizePolicy().hasHeightForWidth());
        categoryFrame->setSizePolicy(sizePolicy2);
        categoryFrame->setMinimumSize(QSize(500, 0));
        categoryFrame->setMaximumSize(QSize(500, 16777215));
        categoryFrame->setStyleSheet(QString::fromUtf8("\n"
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
"QRadioButton{\n"
"color: black;\n"
"margin-left: 12px;\n"
"}\n"
"\n"
"\n"
""));
        verticalLayout_4 = new QVBoxLayout(categoryFrame);
        verticalLayout_4->setSpacing(8);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        categoryInfoQL = new QLabel(categoryFrame);
        categoryInfoQL->setObjectName("categoryInfoQL");
        sizePolicy.setHeightForWidth(categoryInfoQL->sizePolicy().hasHeightForWidth());
        categoryInfoQL->setSizePolicy(sizePolicy);
        categoryInfoQL->setMinimumSize(QSize(0, 52));
        categoryInfoQL->setMaximumSize(QSize(16777215, 52));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI")});
        font1.setPointSize(11);
        font1.setWeight(QFont::DemiBold);
        categoryInfoQL->setFont(font1);
        categoryInfoQL->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: rgb(49, 112, 143);\n"
"background-color: rgb(214, 234, 244);\n"
"border-bottom: 1px solid  rgb(188, 232, 241);\n"
"\n"
"}"));
        categoryInfoQL->setMargin(3);
        categoryInfoQL->setIndent(0);

        verticalLayout_4->addWidget(categoryInfoQL);

        categoryNameQL = new QLabel(categoryFrame);
        categoryNameQL->setObjectName("categoryNameQL");
        sizePolicy.setHeightForWidth(categoryNameQL->sizePolicy().hasHeightForWidth());
        categoryNameQL->setSizePolicy(sizePolicy);
        categoryNameQL->setMinimumSize(QSize(0, 36));
        categoryNameQL->setMaximumSize(QSize(16777215, 36));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Segoe UI Semibold")});
        font2.setPointSize(11);
        font2.setBold(false);
        categoryNameQL->setFont(font2);
        categoryNameQL->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        verticalLayout_4->addWidget(categoryNameQL);

        categoryLE = new QLineEdit(categoryFrame);
        categoryLE->setObjectName("categoryLE");
        categoryLE->setMinimumSize(QSize(0, 36));
        categoryLE->setMaximumSize(QSize(16777215, 36));
        QFont font3;
        font3.setPointSize(10);
        categoryLE->setFont(font3);
        categoryLE->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"color: black;\n"
"border: 1px solid rgb(172, 172, 172);\n"
"border-radius: 16px;\n"
"margin-left: 12px;\n"
"margin-right: 12px;\n"
"padding-left: 12px;\n"
"}\n"
"\n"
"QLineEdit:hover{\n"
"border-color: rgb(91, 192, 222);\n"
"}"));

        verticalLayout_4->addWidget(categoryLE);

        categoryStatusQL = new QLabel(categoryFrame);
        categoryStatusQL->setObjectName("categoryStatusQL");
        sizePolicy.setHeightForWidth(categoryStatusQL->sizePolicy().hasHeightForWidth());
        categoryStatusQL->setSizePolicy(sizePolicy);
        categoryStatusQL->setMinimumSize(QSize(0, 36));
        categoryStatusQL->setMaximumSize(QSize(16777215, 36));
        categoryStatusQL->setFont(font2);
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
        QBrush brush1(QColor(243, 244, 248, 255));
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
        QFont font4;
        font4.setPointSize(10);
        font4.setBold(false);
        activeRadioBtn->setFont(font4);
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
        InactiveRadioBtn->setFont(font4);

        verticalLayout_4->addWidget(InactiveRadioBtn);

        categoryDataBtn = new QPushButton(categoryFrame);
        categoryDataBtn->setObjectName("categoryDataBtn");
        sizePolicy1.setHeightForWidth(categoryDataBtn->sizePolicy().hasHeightForWidth());
        categoryDataBtn->setSizePolicy(sizePolicy1);
        categoryDataBtn->setMinimumSize(QSize(120, 48));
        categoryDataBtn->setMaximumSize(QSize(120, 48));
        QFont font5;
        font5.setPointSize(10);
        font5.setWeight(QFont::DemiBold);
        categoryDataBtn->setFont(font5);
        categoryDataBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(91, 192, 222);\n"
"border: 1px solid rgb(91, 192, 222);\n"
"border-radius: 16px;\n"
"margin-left: 12px;\n"
"margin-bottom: 12px;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 0, 0);\n"
"border: 1px solid black;\n"
"border-radius: 16px;\n"
"}"));

        verticalLayout_4->addWidget(categoryDataBtn);


        gridLayout->addWidget(categoryFrame, 0, 0, 1, 1);

        category_stackedWidget->addWidget(addCategoryWidget);
        manageCategoryWidget = new QWidget();
        manageCategoryWidget->setObjectName("manageCategoryWidget");
        gridLayout_2 = new QGridLayout(manageCategoryWidget);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        manageCatScrollArea = new QScrollArea(manageCategoryWidget);
        manageCatScrollArea->setObjectName("manageCatScrollArea");
        manageCatScrollArea->setStyleSheet(QString::fromUtf8(""));
        manageCatScrollArea->setWidgetResizable(true);
        manageCatContents = new QWidget();
        manageCatContents->setObjectName("manageCatContents");
        manageCatContents->setGeometry(QRect(0, 0, 1006, 601));
        manageCatContents->setStyleSheet(QString::fromUtf8(""));
        gridLayout_3 = new QGridLayout(manageCatContents);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(48, 48, 48, 48);
        manageCatWidget = new QWidget(manageCatContents);
        manageCatWidget->setObjectName("manageCatWidget");
        manageCatWidget->setStyleSheet(QString::fromUtf8("QWidget{\n"
"color: rgb(0, 0, 0);\n"
"border: 1px solid lightgray;\n"
"border-radius: 12px;\n"
"}\n"
"\n"
""));
        verticalLayout_5 = new QVBoxLayout(manageCatWidget);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(manageCatWidget);
        label->setObjectName("label");
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(0, 48));
        label->setMaximumSize(QSize(16777215, 48));
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: black;\n"
"background-color: rgb(230, 230, 230);\n"
"border: 1px solid lightgray;\n"
"padding-left: 12px;\n"
"border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;\n"
"}"));

        verticalLayout_5->addWidget(label);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(8);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_7->setContentsMargins(8, 8, 8, 8);
        spinBox = new QSpinBox(manageCatWidget);
        spinBox->setObjectName("spinBox");
        sizePolicy1.setHeightForWidth(spinBox->sizePolicy().hasHeightForWidth());
        spinBox->setSizePolicy(sizePolicy1);
        spinBox->setMinimumSize(QSize(72, 36));
        spinBox->setMaximumSize(QSize(72, 36));
        QFont font6;
        font6.setPointSize(11);
        spinBox->setFont(font6);
        spinBox->setStyleSheet(QString::fromUtf8("\n"
"border: 1px solid lightgray;\n"
"border-radius: 8px;\n"
""));
        spinBox->setAlignment(Qt::AlignmentFlag::AlignCenter);
        spinBox->setMinimum(25);
        spinBox->setMaximum(100);
        spinBox->setSingleStep(25);

        horizontalLayout_7->addWidget(spinBox);

        label_2 = new QLabel(manageCatWidget);
        label_2->setObjectName("label_2");
        label_2->setFont(font6);
        label_2->setStyleSheet(QString::fromUtf8("border:none;"));

        horizontalLayout_7->addWidget(label_2);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_5);

        label_5 = new QLabel(manageCatWidget);
        label_5->setObjectName("label_5");
        label_5->setFont(font6);
        label_5->setStyleSheet(QString::fromUtf8("border:none;"));

        horizontalLayout_7->addWidget(label_5);

        lineEdit = new QLineEdit(manageCatWidget);
        lineEdit->setObjectName("lineEdit");
        sizePolicy1.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy1);
        lineEdit->setMinimumSize(QSize(200, 36));
        lineEdit->setMaximumSize(QSize(200, 36));
        lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"border: 1px solid lightgray;\n"
"border-radius: 8px;\n"
"padding-left: 12px;\n"
"color: rgb(79, 79, 79);\n"
"}"));

        horizontalLayout_7->addWidget(lineEdit);


        verticalLayout_5->addLayout(horizontalLayout_7);

        tableWidget = new QTableWidget(manageCatWidget);
        if (tableWidget->columnCount() < 6)
            tableWidget->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font);
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font);
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setFont(font);
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setFont(font);
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setFont(font);
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        __qtablewidgetitem5->setFont(font);
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        tableWidget->setObjectName("tableWidget");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(tableWidget->sizePolicy().hasHeightForWidth());
        tableWidget->setSizePolicy(sizePolicy3);
        tableWidget->setFont(font6);
        tableWidget->setStyleSheet(QString::fromUtf8("QHeaderView{\n"
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
        tableWidget->setLineWidth(1);
        tableWidget->setMidLineWidth(0);
        tableWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAsNeeded);
        tableWidget->setEditTriggers(QAbstractItemView::EditTrigger::NoEditTriggers);
        tableWidget->setTextElideMode(Qt::TextElideMode::ElideRight);
        tableWidget->setShowGrid(true);
        tableWidget->setGridStyle(Qt::PenStyle::SolidLine);
        tableWidget->setWordWrap(true);
        tableWidget->setCornerButtonEnabled(true);
        tableWidget->horizontalHeader()->setVisible(true);
        tableWidget->horizontalHeader()->setCascadingSectionResizes(false);
        tableWidget->horizontalHeader()->setMinimumSectionSize(200);
        tableWidget->horizontalHeader()->setDefaultSectionSize(200);
        tableWidget->horizontalHeader()->setHighlightSections(false);
        tableWidget->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableWidget->horizontalHeader()->setStretchLastSection(true);
        tableWidget->verticalHeader()->setVisible(false);
        tableWidget->verticalHeader()->setMinimumSectionSize(36);
        tableWidget->verticalHeader()->setDefaultSectionSize(36);
        tableWidget->verticalHeader()->setStretchLastSection(false);

        verticalLayout_5->addWidget(tableWidget);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(0);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalLayout_8->setContentsMargins(8, 8, 8, 8);
        label_6 = new QLabel(manageCatWidget);
        label_6->setObjectName("label_6");
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);
        label_6->setMinimumSize(QSize(0, 36));
        label_6->setMaximumSize(QSize(16777215, 36));
        label_6->setFont(font6);
        label_6->setStyleSheet(QString::fromUtf8("border:none;"));

        horizontalLayout_8->addWidget(label_6);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_6);

        pushButton = new QPushButton(manageCatWidget);
        pushButton->setObjectName("pushButton");
        pushButton->setMinimumSize(QSize(0, 36));
        pushButton->setMaximumSize(QSize(16777215, 36));
        pushButton->setFont(font6);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        horizontalLayout_8->addWidget(pushButton);

        label_7 = new QLabel(manageCatWidget);
        label_7->setObjectName("label_7");
        sizePolicy1.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy1);
        label_7->setMinimumSize(QSize(32, 36));
        label_7->setMaximumSize(QSize(32, 36));
        label_7->setFont(font6);
        label_7->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 0, 0);\n"
"border: 1px solid black;\n"
"border-radius: 0px;\n"
"}"));
        label_7->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_8->addWidget(label_7);

        pushButton_2 = new QPushButton(manageCatWidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setMinimumSize(QSize(0, 36));
        pushButton_2->setMaximumSize(QSize(16777215, 36));
        pushButton_2->setFont(font6);
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        horizontalLayout_8->addWidget(pushButton_2);


        verticalLayout_5->addLayout(horizontalLayout_8);


        gridLayout_3->addWidget(manageCatWidget, 0, 0, 1, 1);

        manageCatScrollArea->setWidget(manageCatContents);

        gridLayout_2->addWidget(manageCatScrollArea, 0, 0, 1, 1);

        category_stackedWidget->addWidget(manageCategoryWidget);

        categoryFragmentVL->addWidget(category_stackedWidget);


        retranslateUi(CategoryFragment);

        QMetaObject::connectSlotsByName(CategoryFragment);
    } // setupUi

    void retranslateUi(QWidget *CategoryFragment)
    {
        CategoryFragment->setWindowTitle(QCoreApplication::translate("CategoryFragment", "Form", nullptr));
        addCategoryBtn->setText(QCoreApplication::translate("CategoryFragment", "Add Category", nullptr));
        manageCategoryBtn->setText(QCoreApplication::translate("CategoryFragment", "Manage Categories", nullptr));
        categoryInfoQL->setText(QCoreApplication::translate("CategoryFragment", "Category Info", nullptr));
        categoryNameQL->setText(QCoreApplication::translate("CategoryFragment", "Category Name", nullptr));
        categoryStatusQL->setText(QCoreApplication::translate("CategoryFragment", "Status", nullptr));
        activeRadioBtn->setText(QCoreApplication::translate("CategoryFragment", "Active", nullptr));
        InactiveRadioBtn->setText(QCoreApplication::translate("CategoryFragment", "Inactive", nullptr));
        categoryDataBtn->setText(QCoreApplication::translate("CategoryFragment", "Create", nullptr));
        label->setText(QCoreApplication::translate("CategoryFragment", "Categories Listing", nullptr));
        label_2->setText(QCoreApplication::translate("CategoryFragment", "records per page", nullptr));
        label_5->setText(QCoreApplication::translate("CategoryFragment", "Search :", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("CategoryFragment", "S.No.", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("CategoryFragment", "Category", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("CategoryFragment", "Status", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("CategoryFragment", "Creation Date", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("CategoryFragment", "Updation Date", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("CategoryFragment", "Action", nullptr));
        label_6->setText(QCoreApplication::translate("CategoryFragment", "Showing", nullptr));
        pushButton->setText(QCoreApplication::translate("CategoryFragment", "Previous", nullptr));
        label_7->setText(QCoreApplication::translate("CategoryFragment", "1", nullptr));
        pushButton_2->setText(QCoreApplication::translate("CategoryFragment", "Next", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CategoryFragment: public Ui_CategoryFragment {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CATEGORYFORM_H
