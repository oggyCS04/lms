/********************************************************************************
** Form generated from reading UI file 'usermainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERMAINWINDOW_H
#define UI_USERMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserMainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QWidget *topBar;
    QHBoxLayout *horizontalLayout;
    QLabel *userTitleLabel;
    QSpacerItem *horizontalSpacer;
    QPushButton *dashboardBtn;
    QPushButton *issuedBooksBtn;
    QPushButton *requestBookBtn;
    QPushButton *accountBtn;
    QWidget *body;
    QVBoxLayout *verticalLayout_2;
    QStackedWidget *userStackedWidget;
    QWidget *userDashboardWidget;
    QHBoxLayout *userDashHL;
    QFrame *bookIssueFrame;
    QVBoxLayout *bookIssueFrameVL;
    QLabel *bookIcon;
    QLabel *issuedNum;
    QLabel *bookIssuedLabel;
    QFrame *notReturnedFrame;
    QVBoxLayout *notReturnedFrameVL;
    QLabel *notReturnIcon;
    QLabel *notReturnedNum;
    QLabel *notReturnLabel;
    QSpacerItem *horizontalSpacer_2;
    QWidget *issuedBooksWidget;
    QGridLayout *gridLayout;
    QScrollArea *issuedBooksScrollArea;
    QWidget *issuedBooksContent;
    QGridLayout *gridLayout_4;
    QWidget *issuedContentWidget;
    QVBoxLayout *verticalLayout_6;
    QLabel *issuedBooksLabel;
    QHBoxLayout *horizontalLayout_9;
    QSpinBox *spinBox_2;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer_7;
    QLabel *label_8;
    QLineEdit *lineEdit_2;
    QTableWidget *issuedBooksTableWidget;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_9;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *pushButton_3;
    QLabel *label_10;
    QPushButton *pushButton_4;
    QWidget *requestBooksWidget;
    QGridLayout *gridLayout_2;
    QScrollArea *requestBooksScrollArea;
    QWidget *requestBooksContent;
    QGridLayout *gridLayout_5;
    QWidget *requestBooksContentWidget;
    QVBoxLayout *verticalLayout_7;
    QLabel *requestBooksTitleLabel;
    QHBoxLayout *horizontalLayout_11;
    QSpinBox *spinBox_3;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_9;
    QLabel *label_11;
    QLineEdit *lineEdit_3;
    QTableWidget *requestBooksTableWidget;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_12;
    QSpacerItem *horizontalSpacer_10;
    QPushButton *pushButton_5;
    QLabel *label_13;
    QPushButton *pushButton_6;
    QWidget *accountWidget;
    QHBoxLayout *accountWidgetHL;
    QFrame *profileFrame;
    QVBoxLayout *profileFrameVL;
    QLabel *myProfileLabel;
    QHBoxLayout *studentIdHL;
    QLabel *studentIdLabel;
    QLabel *studentIdValue;
    QHBoxLayout *studentNameHL;
    QLabel *studentNameLabel;
    QLabel *studentNameValue;
    QPushButton *logoutBtn;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QMainWindow *UserMainWindow)
    {
        if (UserMainWindow->objectName().isEmpty())
            UserMainWindow->setObjectName("UserMainWindow");
        UserMainWindow->resize(800, 600);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/res/image/e-library.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        UserMainWindow->setWindowIcon(icon);
        UserMainWindow->setIconSize(QSize(24, 24));
        centralwidget = new QWidget(UserMainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        topBar = new QWidget(centralwidget);
        topBar->setObjectName("topBar");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(topBar->sizePolicy().hasHeightForWidth());
        topBar->setSizePolicy(sizePolicy);
        topBar->setMinimumSize(QSize(0, 72));
        topBar->setMaximumSize(QSize(16777215, 72));
        topBar->setStyleSheet(QString::fromUtf8("QWidget{\n"
"background-color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"QLabel{\n"
"color: rgb(0, 0, 0);\n"
"}\n"
"\n"
"QPushButton{\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(10, 36, 86);\n"
"border: 1px solid rgb(10, 36, 86);\n"
"border-radius: 4px;\n"
"padding-left: 12px;\n"
"padding-right: 12px;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(8, 29, 69);\n"
"border: 1px solid rgb(8, 29, 69);\n"
"border-radius: 4px;\n"
"}\n"
"\n"
"QPushButton:checked{\n"
"color: rgb(255, 255, 255);\n"
"background-color: red;\n"
"border: 1px solid rgb(8, 29, 69);\n"
"border-radius: 4px;\n"
"}"));
        horizontalLayout = new QHBoxLayout(topBar);
        horizontalLayout->setSpacing(16);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(24, 0, 24, 0);
        userTitleLabel = new QLabel(topBar);
        userTitleLabel->setObjectName("userTitleLabel");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(userTitleLabel->sizePolicy().hasHeightForWidth());
        userTitleLabel->setSizePolicy(sizePolicy1);
        QFont font;
        font.setFamilies({QString::fromUtf8("Poppins")});
        font.setPointSize(16);
        font.setWeight(QFont::DemiBold);
        userTitleLabel->setFont(font);

        horizontalLayout->addWidget(userTitleLabel);

        horizontalSpacer = new QSpacerItem(25, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        dashboardBtn = new QPushButton(topBar);
        dashboardBtn->setObjectName("dashboardBtn");
        dashboardBtn->setMinimumSize(QSize(0, 36));
        dashboardBtn->setMaximumSize(QSize(16777215, 36));
        QFont font1;
        font1.setPointSize(11);
        font1.setWeight(QFont::DemiBold);
        dashboardBtn->setFont(font1);
        dashboardBtn->setCheckable(true);
        dashboardBtn->setChecked(true);
        dashboardBtn->setAutoExclusive(true);

        horizontalLayout->addWidget(dashboardBtn);

        issuedBooksBtn = new QPushButton(topBar);
        issuedBooksBtn->setObjectName("issuedBooksBtn");
        issuedBooksBtn->setMinimumSize(QSize(0, 36));
        issuedBooksBtn->setMaximumSize(QSize(16777215, 36));
        issuedBooksBtn->setFont(font1);
        issuedBooksBtn->setCheckable(true);
        issuedBooksBtn->setAutoExclusive(true);

        horizontalLayout->addWidget(issuedBooksBtn);

        requestBookBtn = new QPushButton(topBar);
        requestBookBtn->setObjectName("requestBookBtn");
        requestBookBtn->setMinimumSize(QSize(0, 36));
        requestBookBtn->setMaximumSize(QSize(16777215, 36));
        requestBookBtn->setFont(font1);
        requestBookBtn->setCheckable(true);
        requestBookBtn->setAutoExclusive(true);

        horizontalLayout->addWidget(requestBookBtn);

        accountBtn = new QPushButton(topBar);
        accountBtn->setObjectName("accountBtn");
        accountBtn->setMinimumSize(QSize(0, 36));
        accountBtn->setMaximumSize(QSize(16777215, 36));
        accountBtn->setFont(font1);
        accountBtn->setCheckable(true);
        accountBtn->setAutoExclusive(true);

        horizontalLayout->addWidget(accountBtn);


        verticalLayout->addWidget(topBar);

        body = new QWidget(centralwidget);
        body->setObjectName("body");
        body->setStyleSheet(QString::fromUtf8("background-color: rgb(243, 244, 248);\n"
"color: rgb(0, 0, 0);"));
        verticalLayout_2 = new QVBoxLayout(body);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        userStackedWidget = new QStackedWidget(body);
        userStackedWidget->setObjectName("userStackedWidget");
        userDashboardWidget = new QWidget();
        userDashboardWidget->setObjectName("userDashboardWidget");
        userDashboardWidget->setStyleSheet(QString::fromUtf8("QFrame{\n"
"border: 1px solid rgb(10, 36, 86);\n"
"border-radius: 4px;\n"
"}"));
        userDashHL = new QHBoxLayout(userDashboardWidget);
        userDashHL->setSpacing(48);
        userDashHL->setObjectName("userDashHL");
        userDashHL->setContentsMargins(48, 48, 48, 48);
        bookIssueFrame = new QFrame(userDashboardWidget);
        bookIssueFrame->setObjectName("bookIssueFrame");
        sizePolicy1.setHeightForWidth(bookIssueFrame->sizePolicy().hasHeightForWidth());
        bookIssueFrame->setSizePolicy(sizePolicy1);
        bookIssueFrame->setMinimumSize(QSize(250, 180));
        bookIssueFrame->setMaximumSize(QSize(250, 180));
        bookIssueFrame->setFrameShape(QFrame::Shape::StyledPanel);
        bookIssueFrame->setFrameShadow(QFrame::Shadow::Raised);
        bookIssueFrameVL = new QVBoxLayout(bookIssueFrame);
        bookIssueFrameVL->setSpacing(8);
        bookIssueFrameVL->setObjectName("bookIssueFrameVL");
        bookIssueFrameVL->setContentsMargins(12, 12, 12, 12);
        bookIcon = new QLabel(bookIssueFrame);
        bookIcon->setObjectName("bookIcon");
        sizePolicy1.setHeightForWidth(bookIcon->sizePolicy().hasHeightForWidth());
        bookIcon->setSizePolicy(sizePolicy1);
        bookIcon->setMinimumSize(QSize(64, 64));
        bookIcon->setMaximumSize(QSize(64, 64));
        bookIcon->setStyleSheet(QString::fromUtf8("QLabel{\n"
"border-image: url(:/icons/res/icon/book-issue.png) 0 0 0 0 stretch stretch;\n"
"}"));

        bookIssueFrameVL->addWidget(bookIcon);

        issuedNum = new QLabel(bookIssueFrame);
        issuedNum->setObjectName("issuedNum");
        sizePolicy1.setHeightForWidth(issuedNum->sizePolicy().hasHeightForWidth());
        issuedNum->setSizePolicy(sizePolicy1);
        QFont font2;
        font2.setPointSize(16);
        font2.setWeight(QFont::DemiBold);
        issuedNum->setFont(font2);
        issuedNum->setStyleSheet(QString::fromUtf8("border:none;"));

        bookIssueFrameVL->addWidget(issuedNum);

        bookIssuedLabel = new QLabel(bookIssueFrame);
        bookIssuedLabel->setObjectName("bookIssuedLabel");
        sizePolicy1.setHeightForWidth(bookIssuedLabel->sizePolicy().hasHeightForWidth());
        bookIssuedLabel->setSizePolicy(sizePolicy1);
        QFont font3;
        font3.setPointSize(12);
        font3.setWeight(QFont::DemiBold);
        bookIssuedLabel->setFont(font3);
        bookIssuedLabel->setStyleSheet(QString::fromUtf8("border:none;"));

        bookIssueFrameVL->addWidget(bookIssuedLabel);


        userDashHL->addWidget(bookIssueFrame);

        notReturnedFrame = new QFrame(userDashboardWidget);
        notReturnedFrame->setObjectName("notReturnedFrame");
        sizePolicy1.setHeightForWidth(notReturnedFrame->sizePolicy().hasHeightForWidth());
        notReturnedFrame->setSizePolicy(sizePolicy1);
        notReturnedFrame->setMinimumSize(QSize(250, 180));
        notReturnedFrame->setMaximumSize(QSize(250, 180));
        notReturnedFrame->setFrameShape(QFrame::Shape::StyledPanel);
        notReturnedFrame->setFrameShadow(QFrame::Shadow::Raised);
        notReturnedFrameVL = new QVBoxLayout(notReturnedFrame);
        notReturnedFrameVL->setSpacing(8);
        notReturnedFrameVL->setObjectName("notReturnedFrameVL");
        notReturnedFrameVL->setContentsMargins(12, 12, 12, 12);
        notReturnIcon = new QLabel(notReturnedFrame);
        notReturnIcon->setObjectName("notReturnIcon");
        sizePolicy1.setHeightForWidth(notReturnIcon->sizePolicy().hasHeightForWidth());
        notReturnIcon->setSizePolicy(sizePolicy1);
        notReturnIcon->setMinimumSize(QSize(64, 64));
        notReturnIcon->setMaximumSize(QSize(64, 64));
        notReturnIcon->setStyleSheet(QString::fromUtf8("QLabel{\n"
"border-image: url(:/icons/res/icon/book-request.png) 0 0 0 0 stretch stretch;\n"
"}"));

        notReturnedFrameVL->addWidget(notReturnIcon);

        notReturnedNum = new QLabel(notReturnedFrame);
        notReturnedNum->setObjectName("notReturnedNum");
        sizePolicy1.setHeightForWidth(notReturnedNum->sizePolicy().hasHeightForWidth());
        notReturnedNum->setSizePolicy(sizePolicy1);
        notReturnedNum->setFont(font2);
        notReturnedNum->setStyleSheet(QString::fromUtf8("border:none;"));

        notReturnedFrameVL->addWidget(notReturnedNum);

        notReturnLabel = new QLabel(notReturnedFrame);
        notReturnLabel->setObjectName("notReturnLabel");
        sizePolicy1.setHeightForWidth(notReturnLabel->sizePolicy().hasHeightForWidth());
        notReturnLabel->setSizePolicy(sizePolicy1);
        notReturnLabel->setFont(font3);
        notReturnLabel->setStyleSheet(QString::fromUtf8("border:none;"));

        notReturnedFrameVL->addWidget(notReturnLabel);


        userDashHL->addWidget(notReturnedFrame);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        userDashHL->addItem(horizontalSpacer_2);

        userStackedWidget->addWidget(userDashboardWidget);
        issuedBooksWidget = new QWidget();
        issuedBooksWidget->setObjectName("issuedBooksWidget");
        gridLayout = new QGridLayout(issuedBooksWidget);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        issuedBooksScrollArea = new QScrollArea(issuedBooksWidget);
        issuedBooksScrollArea->setObjectName("issuedBooksScrollArea");
        issuedBooksScrollArea->setStyleSheet(QString::fromUtf8(""));
        issuedBooksScrollArea->setWidgetResizable(true);
        issuedBooksContent = new QWidget();
        issuedBooksContent->setObjectName("issuedBooksContent");
        issuedBooksContent->setGeometry(QRect(0, 0, 618, 293));
        issuedBooksContent->setStyleSheet(QString::fromUtf8(""));
        gridLayout_4 = new QGridLayout(issuedBooksContent);
        gridLayout_4->setSpacing(0);
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_4->setContentsMargins(48, 8, 48, 48);
        issuedContentWidget = new QWidget(issuedBooksContent);
        issuedContentWidget->setObjectName("issuedContentWidget");
        issuedContentWidget->setStyleSheet(QString::fromUtf8("QWidget{\n"
"color: rgb(0, 0, 0);\n"
"\n"
"background-color: rgb(255, 255, 255);\n"
"border: 1px solid lightgray;\n"
"border-radius: 12px;\n"
"}\n"
"\n"
""));
        verticalLayout_6 = new QVBoxLayout(issuedContentWidget);
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        issuedBooksLabel = new QLabel(issuedContentWidget);
        issuedBooksLabel->setObjectName("issuedBooksLabel");
        sizePolicy.setHeightForWidth(issuedBooksLabel->sizePolicy().hasHeightForWidth());
        issuedBooksLabel->setSizePolicy(sizePolicy);
        issuedBooksLabel->setMinimumSize(QSize(0, 48));
        issuedBooksLabel->setMaximumSize(QSize(16777215, 48));
        issuedBooksLabel->setFont(font1);
        issuedBooksLabel->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: black;\n"
"background-color: rgb(243, 244, 248);\n"
"border: 1px solid lightgray;\n"
"padding-left: 12px;\n"
"border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;\n"
"}"));

        verticalLayout_6->addWidget(issuedBooksLabel);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(8);
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        horizontalLayout_9->setContentsMargins(8, 8, 8, 8);
        spinBox_2 = new QSpinBox(issuedContentWidget);
        spinBox_2->setObjectName("spinBox_2");
        sizePolicy.setHeightForWidth(spinBox_2->sizePolicy().hasHeightForWidth());
        spinBox_2->setSizePolicy(sizePolicy);
        spinBox_2->setMinimumSize(QSize(0, 36));
        spinBox_2->setMaximumSize(QSize(16777215, 36));
        QFont font4;
        font4.setPointSize(11);
        spinBox_2->setFont(font4);
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

        label_6 = new QLabel(issuedContentWidget);
        label_6->setObjectName("label_6");
        label_6->setFont(font4);
        label_6->setStyleSheet(QString::fromUtf8("border:none;"));

        horizontalLayout_9->addWidget(label_6);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_7);

        label_8 = new QLabel(issuedContentWidget);
        label_8->setObjectName("label_8");
        label_8->setFont(font4);
        label_8->setStyleSheet(QString::fromUtf8("border:none;"));

        horizontalLayout_9->addWidget(label_8);

        lineEdit_2 = new QLineEdit(issuedContentWidget);
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

        issuedBooksTableWidget = new QTableWidget(issuedContentWidget);
        if (issuedBooksTableWidget->columnCount() < 6)
            issuedBooksTableWidget->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font1);
        issuedBooksTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font1);
        issuedBooksTableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setFont(font1);
        issuedBooksTableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setFont(font1);
        issuedBooksTableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setFont(font1);
        issuedBooksTableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        __qtablewidgetitem5->setFont(font1);
        issuedBooksTableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        issuedBooksTableWidget->setObjectName("issuedBooksTableWidget");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(issuedBooksTableWidget->sizePolicy().hasHeightForWidth());
        issuedBooksTableWidget->setSizePolicy(sizePolicy2);
        issuedBooksTableWidget->setFont(font4);
        issuedBooksTableWidget->setStyleSheet(QString::fromUtf8("QHeaderView{\n"
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
        issuedBooksTableWidget->setLineWidth(1);
        issuedBooksTableWidget->setMidLineWidth(0);
        issuedBooksTableWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAsNeeded);
        issuedBooksTableWidget->setEditTriggers(QAbstractItemView::EditTrigger::NoEditTriggers);
        issuedBooksTableWidget->setAlternatingRowColors(true);
        issuedBooksTableWidget->setSelectionMode(QAbstractItemView::SelectionMode::ExtendedSelection);
        issuedBooksTableWidget->setTextElideMode(Qt::TextElideMode::ElideRight);
        issuedBooksTableWidget->setShowGrid(true);
        issuedBooksTableWidget->setGridStyle(Qt::PenStyle::SolidLine);
        issuedBooksTableWidget->setWordWrap(true);
        issuedBooksTableWidget->setCornerButtonEnabled(true);
        issuedBooksTableWidget->horizontalHeader()->setVisible(true);
        issuedBooksTableWidget->horizontalHeader()->setCascadingSectionResizes(true);
        issuedBooksTableWidget->horizontalHeader()->setMinimumSectionSize(200);
        issuedBooksTableWidget->horizontalHeader()->setDefaultSectionSize(200);
        issuedBooksTableWidget->horizontalHeader()->setHighlightSections(false);
        issuedBooksTableWidget->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        issuedBooksTableWidget->horizontalHeader()->setStretchLastSection(true);
        issuedBooksTableWidget->verticalHeader()->setVisible(false);
        issuedBooksTableWidget->verticalHeader()->setCascadingSectionResizes(false);
        issuedBooksTableWidget->verticalHeader()->setMinimumSectionSize(48);
        issuedBooksTableWidget->verticalHeader()->setDefaultSectionSize(48);
        issuedBooksTableWidget->verticalHeader()->setStretchLastSection(false);

        verticalLayout_6->addWidget(issuedBooksTableWidget);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(0);
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        horizontalLayout_10->setContentsMargins(8, 8, 8, 8);
        label_9 = new QLabel(issuedContentWidget);
        label_9->setObjectName("label_9");
        sizePolicy.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy);
        label_9->setMinimumSize(QSize(0, 36));
        label_9->setMaximumSize(QSize(16777215, 36));
        label_9->setFont(font4);
        label_9->setStyleSheet(QString::fromUtf8("border:none;"));

        horizontalLayout_10->addWidget(label_9);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_8);

        pushButton_3 = new QPushButton(issuedContentWidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setMinimumSize(QSize(0, 36));
        pushButton_3->setMaximumSize(QSize(16777215, 36));
        pushButton_3->setFont(font4);
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

        label_10 = new QLabel(issuedContentWidget);
        label_10->setObjectName("label_10");
        sizePolicy1.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy1);
        label_10->setMinimumSize(QSize(32, 36));
        label_10->setMaximumSize(QSize(32, 36));
        label_10->setFont(font4);
        label_10->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(10, 37, 88);\n"
"border: 1px solid rgb(10, 37, 88);\n"
"border-radius: 0px;\n"
"}"));
        label_10->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_10->addWidget(label_10);

        pushButton_4 = new QPushButton(issuedContentWidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setMinimumSize(QSize(0, 36));
        pushButton_4->setMaximumSize(QSize(16777215, 36));
        pushButton_4->setFont(font4);
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


        gridLayout_4->addWidget(issuedContentWidget, 0, 0, 1, 1);

        issuedBooksScrollArea->setWidget(issuedBooksContent);

        gridLayout->addWidget(issuedBooksScrollArea, 0, 0, 1, 1);

        userStackedWidget->addWidget(issuedBooksWidget);
        requestBooksWidget = new QWidget();
        requestBooksWidget->setObjectName("requestBooksWidget");
        gridLayout_2 = new QGridLayout(requestBooksWidget);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        requestBooksScrollArea = new QScrollArea(requestBooksWidget);
        requestBooksScrollArea->setObjectName("requestBooksScrollArea");
        requestBooksScrollArea->setStyleSheet(QString::fromUtf8(""));
        requestBooksScrollArea->setWidgetResizable(true);
        requestBooksContent = new QWidget();
        requestBooksContent->setObjectName("requestBooksContent");
        requestBooksContent->setGeometry(QRect(0, 0, 798, 519));
        requestBooksContent->setStyleSheet(QString::fromUtf8(""));
        gridLayout_5 = new QGridLayout(requestBooksContent);
        gridLayout_5->setSpacing(0);
        gridLayout_5->setObjectName("gridLayout_5");
        gridLayout_5->setContentsMargins(48, 8, 48, 48);
        requestBooksContentWidget = new QWidget(requestBooksContent);
        requestBooksContentWidget->setObjectName("requestBooksContentWidget");
        requestBooksContentWidget->setStyleSheet(QString::fromUtf8("QWidget{\n"
"color: rgb(0, 0, 0);\n"
"\n"
"background-color: rgb(255, 255, 255);\n"
"border: 1px solid lightgray;\n"
"border-radius: 12px;\n"
"}\n"
"\n"
""));
        verticalLayout_7 = new QVBoxLayout(requestBooksContentWidget);
        verticalLayout_7->setSpacing(0);
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        requestBooksTitleLabel = new QLabel(requestBooksContentWidget);
        requestBooksTitleLabel->setObjectName("requestBooksTitleLabel");
        sizePolicy.setHeightForWidth(requestBooksTitleLabel->sizePolicy().hasHeightForWidth());
        requestBooksTitleLabel->setSizePolicy(sizePolicy);
        requestBooksTitleLabel->setMinimumSize(QSize(0, 48));
        requestBooksTitleLabel->setMaximumSize(QSize(16777215, 48));
        requestBooksTitleLabel->setFont(font1);
        requestBooksTitleLabel->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: black;\n"
"background-color: rgb(243, 244, 248);\n"
"border: 1px solid lightgray;\n"
"padding-left: 12px;\n"
"border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;\n"
"}"));

        verticalLayout_7->addWidget(requestBooksTitleLabel);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(8);
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        horizontalLayout_11->setContentsMargins(8, 8, 8, 8);
        spinBox_3 = new QSpinBox(requestBooksContentWidget);
        spinBox_3->setObjectName("spinBox_3");
        sizePolicy.setHeightForWidth(spinBox_3->sizePolicy().hasHeightForWidth());
        spinBox_3->setSizePolicy(sizePolicy);
        spinBox_3->setMinimumSize(QSize(0, 36));
        spinBox_3->setMaximumSize(QSize(16777215, 36));
        spinBox_3->setFont(font4);
        spinBox_3->setStyleSheet(QString::fromUtf8("QSpinBox {\n"
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
        spinBox_3->setAlignment(Qt::AlignmentFlag::AlignCenter);
        spinBox_3->setReadOnly(false);
        spinBox_3->setMinimum(25);
        spinBox_3->setMaximum(100);
        spinBox_3->setSingleStep(25);

        horizontalLayout_11->addWidget(spinBox_3);

        label_5 = new QLabel(requestBooksContentWidget);
        label_5->setObjectName("label_5");
        label_5->setFont(font4);
        label_5->setStyleSheet(QString::fromUtf8("border:none;"));

        horizontalLayout_11->addWidget(label_5);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_9);

        label_11 = new QLabel(requestBooksContentWidget);
        label_11->setObjectName("label_11");
        label_11->setFont(font4);
        label_11->setStyleSheet(QString::fromUtf8("border:none;"));

        horizontalLayout_11->addWidget(label_11);

        lineEdit_3 = new QLineEdit(requestBooksContentWidget);
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

        requestBooksTableWidget = new QTableWidget(requestBooksContentWidget);
        if (requestBooksTableWidget->columnCount() < 7)
            requestBooksTableWidget->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        __qtablewidgetitem6->setFont(font1);
        requestBooksTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        __qtablewidgetitem7->setFont(font1);
        requestBooksTableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        __qtablewidgetitem8->setFont(font1);
        requestBooksTableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        __qtablewidgetitem9->setFont(font1);
        requestBooksTableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        __qtablewidgetitem10->setFont(font1);
        requestBooksTableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        __qtablewidgetitem11->setFont(font1);
        requestBooksTableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        __qtablewidgetitem12->setFont(font1);
        requestBooksTableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem12);
        requestBooksTableWidget->setObjectName("requestBooksTableWidget");
        sizePolicy2.setHeightForWidth(requestBooksTableWidget->sizePolicy().hasHeightForWidth());
        requestBooksTableWidget->setSizePolicy(sizePolicy2);
        requestBooksTableWidget->setFont(font4);
        requestBooksTableWidget->setStyleSheet(QString::fromUtf8("QHeaderView{\n"
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
        requestBooksTableWidget->setLineWidth(1);
        requestBooksTableWidget->setMidLineWidth(0);
        requestBooksTableWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAsNeeded);
        requestBooksTableWidget->setEditTriggers(QAbstractItemView::EditTrigger::NoEditTriggers);
        requestBooksTableWidget->setAlternatingRowColors(true);
        requestBooksTableWidget->setSelectionMode(QAbstractItemView::SelectionMode::ExtendedSelection);
        requestBooksTableWidget->setTextElideMode(Qt::TextElideMode::ElideRight);
        requestBooksTableWidget->setShowGrid(true);
        requestBooksTableWidget->setGridStyle(Qt::PenStyle::SolidLine);
        requestBooksTableWidget->setWordWrap(true);
        requestBooksTableWidget->setCornerButtonEnabled(true);
        requestBooksTableWidget->horizontalHeader()->setVisible(true);
        requestBooksTableWidget->horizontalHeader()->setCascadingSectionResizes(true);
        requestBooksTableWidget->horizontalHeader()->setMinimumSectionSize(200);
        requestBooksTableWidget->horizontalHeader()->setDefaultSectionSize(200);
        requestBooksTableWidget->horizontalHeader()->setHighlightSections(false);
        requestBooksTableWidget->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        requestBooksTableWidget->horizontalHeader()->setStretchLastSection(true);
        requestBooksTableWidget->verticalHeader()->setVisible(false);
        requestBooksTableWidget->verticalHeader()->setCascadingSectionResizes(false);
        requestBooksTableWidget->verticalHeader()->setMinimumSectionSize(48);
        requestBooksTableWidget->verticalHeader()->setDefaultSectionSize(48);
        requestBooksTableWidget->verticalHeader()->setStretchLastSection(false);

        verticalLayout_7->addWidget(requestBooksTableWidget);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(0);
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        horizontalLayout_12->setContentsMargins(8, 8, 8, 8);
        label_12 = new QLabel(requestBooksContentWidget);
        label_12->setObjectName("label_12");
        sizePolicy.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy);
        label_12->setMinimumSize(QSize(0, 36));
        label_12->setMaximumSize(QSize(16777215, 36));
        label_12->setFont(font4);
        label_12->setStyleSheet(QString::fromUtf8("border:none;"));

        horizontalLayout_12->addWidget(label_12);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_10);

        pushButton_5 = new QPushButton(requestBooksContentWidget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setMinimumSize(QSize(0, 36));
        pushButton_5->setMaximumSize(QSize(16777215, 36));
        pushButton_5->setFont(font4);
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
"background-color: rgb(10, 37, 88);\n"
"border: 1px solid rgb(10, 37, 88);\n"
"}"));

        horizontalLayout_12->addWidget(pushButton_5);

        label_13 = new QLabel(requestBooksContentWidget);
        label_13->setObjectName("label_13");
        sizePolicy1.setHeightForWidth(label_13->sizePolicy().hasHeightForWidth());
        label_13->setSizePolicy(sizePolicy1);
        label_13->setMinimumSize(QSize(32, 36));
        label_13->setMaximumSize(QSize(32, 36));
        label_13->setFont(font4);
        label_13->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(10, 37, 88);\n"
"border: 1px solid rgb(10, 37, 88);\n"
"border-radius: 0px;\n"
"}"));
        label_13->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_12->addWidget(label_13);

        pushButton_6 = new QPushButton(requestBooksContentWidget);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setMinimumSize(QSize(0, 36));
        pushButton_6->setMaximumSize(QSize(16777215, 36));
        pushButton_6->setFont(font4);
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
"background-color: rgb(10, 37, 88);\n"
"border: 1px solid rgb(10, 37, 88);\n"
"}"));

        horizontalLayout_12->addWidget(pushButton_6);


        verticalLayout_7->addLayout(horizontalLayout_12);


        gridLayout_5->addWidget(requestBooksContentWidget, 0, 0, 1, 1);

        requestBooksScrollArea->setWidget(requestBooksContent);

        gridLayout_2->addWidget(requestBooksScrollArea, 0, 0, 1, 1);

        userStackedWidget->addWidget(requestBooksWidget);
        accountWidget = new QWidget();
        accountWidget->setObjectName("accountWidget");
        accountWidgetHL = new QHBoxLayout(accountWidget);
        accountWidgetHL->setSpacing(12);
        accountWidgetHL->setObjectName("accountWidgetHL");
        accountWidgetHL->setContentsMargins(48, 48, 48, 48);
        profileFrame = new QFrame(accountWidget);
        profileFrame->setObjectName("profileFrame");
        sizePolicy1.setHeightForWidth(profileFrame->sizePolicy().hasHeightForWidth());
        profileFrame->setSizePolicy(sizePolicy1);
        profileFrame->setMinimumSize(QSize(320, 230));
        profileFrame->setMaximumSize(QSize(320, 230));
        profileFrame->setStyleSheet(QString::fromUtf8("QFrame{\n"
"border: 1px solid rgb(10, 36, 86);\n"
"border-radius: 4px;\n"
"}"));
        profileFrame->setFrameShape(QFrame::Shape::StyledPanel);
        profileFrame->setFrameShadow(QFrame::Shadow::Raised);
        profileFrameVL = new QVBoxLayout(profileFrame);
        profileFrameVL->setSpacing(12);
        profileFrameVL->setObjectName("profileFrameVL");
        profileFrameVL->setContentsMargins(12, 12, 12, 12);
        myProfileLabel = new QLabel(profileFrame);
        myProfileLabel->setObjectName("myProfileLabel");
        sizePolicy.setHeightForWidth(myProfileLabel->sizePolicy().hasHeightForWidth());
        myProfileLabel->setSizePolicy(sizePolicy);
        myProfileLabel->setMinimumSize(QSize(0, 36));
        myProfileLabel->setMaximumSize(QSize(16777215, 36));

        profileFrameVL->addWidget(myProfileLabel);

        studentIdHL = new QHBoxLayout();
        studentIdHL->setObjectName("studentIdHL");
        studentIdLabel = new QLabel(profileFrame);
        studentIdLabel->setObjectName("studentIdLabel");
        sizePolicy.setHeightForWidth(studentIdLabel->sizePolicy().hasHeightForWidth());
        studentIdLabel->setSizePolicy(sizePolicy);
        studentIdLabel->setMinimumSize(QSize(0, 36));
        studentIdLabel->setMaximumSize(QSize(16777215, 36));

        studentIdHL->addWidget(studentIdLabel);

        studentIdValue = new QLabel(profileFrame);
        studentIdValue->setObjectName("studentIdValue");
        sizePolicy.setHeightForWidth(studentIdValue->sizePolicy().hasHeightForWidth());
        studentIdValue->setSizePolicy(sizePolicy);
        studentIdValue->setMinimumSize(QSize(0, 36));
        studentIdValue->setMaximumSize(QSize(16777215, 36));

        studentIdHL->addWidget(studentIdValue);


        profileFrameVL->addLayout(studentIdHL);

        studentNameHL = new QHBoxLayout();
        studentNameHL->setObjectName("studentNameHL");
        studentNameLabel = new QLabel(profileFrame);
        studentNameLabel->setObjectName("studentNameLabel");
        sizePolicy.setHeightForWidth(studentNameLabel->sizePolicy().hasHeightForWidth());
        studentNameLabel->setSizePolicy(sizePolicy);
        studentNameLabel->setMinimumSize(QSize(0, 36));
        studentNameLabel->setMaximumSize(QSize(16777215, 36));

        studentNameHL->addWidget(studentNameLabel);

        studentNameValue = new QLabel(profileFrame);
        studentNameValue->setObjectName("studentNameValue");
        sizePolicy.setHeightForWidth(studentNameValue->sizePolicy().hasHeightForWidth());
        studentNameValue->setSizePolicy(sizePolicy);
        studentNameValue->setMinimumSize(QSize(0, 36));
        studentNameValue->setMaximumSize(QSize(16777215, 36));

        studentNameHL->addWidget(studentNameValue);


        profileFrameVL->addLayout(studentNameHL);

        logoutBtn = new QPushButton(profileFrame);
        logoutBtn->setObjectName("logoutBtn");
        logoutBtn->setMinimumSize(QSize(132, 36));
        logoutBtn->setMaximumSize(QSize(132, 36));
        logoutBtn->setFont(font1);
        logoutBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(10, 36, 86);\n"
"border: 1px solid rgb(10, 36, 86);\n"
"border-radius: 4px;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(8, 29, 69);\n"
"border: 1px solid rgb(8, 29, 69);\n"
"border-radius: 4px;\n"
"}"));

        profileFrameVL->addWidget(logoutBtn);


        accountWidgetHL->addWidget(profileFrame);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        accountWidgetHL->addItem(horizontalSpacer_3);

        userStackedWidget->addWidget(accountWidget);

        verticalLayout_2->addWidget(userStackedWidget);


        verticalLayout->addWidget(body);

        UserMainWindow->setCentralWidget(centralwidget);

        retranslateUi(UserMainWindow);

        QMetaObject::connectSlotsByName(UserMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *UserMainWindow)
    {
        UserMainWindow->setWindowTitle(QCoreApplication::translate("UserMainWindow", "Library Management System", nullptr));
        userTitleLabel->setText(QCoreApplication::translate("UserMainWindow", "User Panel", nullptr));
        dashboardBtn->setText(QCoreApplication::translate("UserMainWindow", "Dashboard", nullptr));
        issuedBooksBtn->setText(QCoreApplication::translate("UserMainWindow", "Issued Books", nullptr));
        requestBookBtn->setText(QCoreApplication::translate("UserMainWindow", "Request a Book", nullptr));
        accountBtn->setText(QCoreApplication::translate("UserMainWindow", "Account", nullptr));
        bookIcon->setText(QString());
        issuedNum->setText(QCoreApplication::translate("UserMainWindow", "1", nullptr));
        bookIssuedLabel->setText(QCoreApplication::translate("UserMainWindow", "Book Issued", nullptr));
        notReturnIcon->setText(QString());
        notReturnedNum->setText(QCoreApplication::translate("UserMainWindow", "1", nullptr));
        notReturnLabel->setText(QCoreApplication::translate("UserMainWindow", "Books Not Returned Yet", nullptr));
        issuedBooksLabel->setText(QCoreApplication::translate("UserMainWindow", "Issued Books", nullptr));
        label_6->setText(QCoreApplication::translate("UserMainWindow", "records per page", nullptr));
        label_8->setText(QCoreApplication::translate("UserMainWindow", "Search :", nullptr));
        QTableWidgetItem *___qtablewidgetitem = issuedBooksTableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("UserMainWindow", "#", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = issuedBooksTableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("UserMainWindow", "Book Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = issuedBooksTableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("UserMainWindow", "ISBN", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = issuedBooksTableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("UserMainWindow", "Issued Date", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = issuedBooksTableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("UserMainWindow", "Return Date", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = issuedBooksTableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("UserMainWindow", "Fine", nullptr));
        label_9->setText(QCoreApplication::translate("UserMainWindow", "Showing", nullptr));
        pushButton_3->setText(QCoreApplication::translate("UserMainWindow", "Previous", nullptr));
        label_10->setText(QCoreApplication::translate("UserMainWindow", "1", nullptr));
        pushButton_4->setText(QCoreApplication::translate("UserMainWindow", "Next", nullptr));
        requestBooksTitleLabel->setText(QCoreApplication::translate("UserMainWindow", "Available Books", nullptr));
        label_5->setText(QCoreApplication::translate("UserMainWindow", "records per page", nullptr));
        label_11->setText(QCoreApplication::translate("UserMainWindow", "Search :", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = requestBooksTableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("UserMainWindow", "#", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = requestBooksTableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("UserMainWindow", "Book Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = requestBooksTableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("UserMainWindow", "Category", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = requestBooksTableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("UserMainWindow", "Publication Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = requestBooksTableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("UserMainWindow", "ISBN", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = requestBooksTableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("UserMainWindow", "Price", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = requestBooksTableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("UserMainWindow", "Action", nullptr));
        label_12->setText(QCoreApplication::translate("UserMainWindow", "Showing", nullptr));
        pushButton_5->setText(QCoreApplication::translate("UserMainWindow", "Previous", nullptr));
        label_13->setText(QCoreApplication::translate("UserMainWindow", "1", nullptr));
        pushButton_6->setText(QCoreApplication::translate("UserMainWindow", "Next", nullptr));
        myProfileLabel->setText(QCoreApplication::translate("UserMainWindow", "My Profile", nullptr));
        studentIdLabel->setText(QCoreApplication::translate("UserMainWindow", "Student ID:", nullptr));
        studentIdValue->setText(QCoreApplication::translate("UserMainWindow", "SID001", nullptr));
        studentNameLabel->setText(QCoreApplication::translate("UserMainWindow", "Student Name:", nullptr));
        studentNameValue->setText(QCoreApplication::translate("UserMainWindow", "Sagar Gupta", nullptr));
        logoutBtn->setText(QCoreApplication::translate("UserMainWindow", "Logout", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserMainWindow: public Ui_UserMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERMAINWINDOW_H
