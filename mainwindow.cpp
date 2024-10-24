#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QPushButton>
#include <QDebug>
#include <QGraphicsDropShadowEffect>
#include <QFrame>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // QPushButton *dashboardBtn = createMenuButton(":/icons/res/icon/dashboard2-black.png", "Dashboard", 0);
    // QPushButton *categoryBtn = createMenuButton(":/icons/res/icon/category-black.png", "Categories", 1);
    // QPushButton *publicationBtn = createMenuButton(":/icons/res/icon/publication-black.png", "Publications", 2);
    // QPushButton *bookBtn = createMenuButton(":/icons/res/icon/book2-black.png", "Books", 3);
    // QPushButton *issueBtn = createMenuButton(":/icons/res/icon/book-issue-black.png", "Book Issue", 4);
    // QPushButton *requestBtn = createMenuButton(":/icons/res/icon/book-request-black.png", "Book Request", 5);
    // QPushButton *regBtn = createMenuButton(":/icons/res/icon/reg-student-black.png", "Reg Student", 6);
    // QPushButton *reportBtn = createMenuButton(":/icons/res/icon/report-black.png", "Report", 7);

    // dashboardBtn->setChecked(true);

    // ui->sidebar_vlayout->addWidget(dashboardBtn);
    // ui->sidebar_vlayout->addWidget(categoryBtn);
    // ui->sidebar_vlayout->addWidget(publicationBtn);
    // ui->sidebar_vlayout->addWidget(bookBtn);
    // ui->sidebar_vlayout->addWidget(issueBtn);
    // ui->sidebar_vlayout->addWidget(requestBtn);
    // ui->sidebar_vlayout->addWidget(regBtn);
    // ui->sidebar_vlayout->addWidget(reportBtn);

    // ui->sidebar_vlayout->addStretch();
    // ui->sidebar_vlayout_1->setAlignment(ui->dashboardBtn_1,Qt::AlignHCenter);
    // ui->sidebar_vlayout_1->setAlignment(ui->categoryBtn_1,Qt::AlignHCenter);
    // ui->sidebar_vlayout_1->setAlignment(ui->publicationBtn_1,Qt::AlignHCenter);
    // ui->sidebar_vlayout_1->setAlignment(ui->bookBtn_1,Qt::AlignHCenter);
    // ui->sidebar_vlayout_1->setAlignment(ui->issueBtn_1,Qt::AlignHCenter);
    // ui->sidebar_vlayout_1->setAlignment(ui->requestBtn_1,Qt::AlignHCenter);
    // ui->sidebar_vlayout_1->setAlignment(ui->regBtn_1,Qt::AlignHCenter);
    // ui->sidebar_vlayout_1->setAlignment(ui->reportBtn_1,Qt::AlignHCenter);
    ui->sidebar_vlayout_1->setAlignment(ui->logo_label_1,Qt::AlignHCenter);
    ui->sidebar_vlayout_2->setAlignment(ui->logo_label_2,Qt::AlignHCenter);
    ui->sidebar_2->setVisible(0);

    applyDropShadow(ui->top_bar);

    ui->stackedWidget->setCurrentIndex(0);

    dashboardWidget = new DashboardFragment(this);
    categoryWidget = new CategoryFragment(this);
    publicationWidget = new PublicationFragment(this);
    bookWidget = new BookFragment(this);

    ui->dashboardVL->addWidget(dashboardWidget);
    ui->categoryVL->addWidget(categoryWidget);
    ui->publicationGL->addWidget(publicationWidget);
    ui->booksGL->addWidget(bookWidget);


    connect(ui->dashboardBtn_1, &QPushButton::clicked,this, [this]() {
        onMenuButtonClicked(0);
    });
    connect(ui->dashboardBtn_2, &QPushButton::clicked,this, [this]() {
        onMenuButtonClicked(0);
    });
    connect(ui->categoryBtn_1, &QPushButton::clicked,this, [this]() {
        onMenuButtonClicked(1);
    });
    connect(ui->categoryBtn_2, &QPushButton::clicked,this, [this]() {
        onMenuButtonClicked(1);
    });
    connect(ui->publicationBtn_1, &QPushButton::clicked,this, [this]() {
        onMenuButtonClicked(2);
    });
    connect(ui->publicationBtn_2, &QPushButton::clicked,this, [this]() {
        onMenuButtonClicked(2);
    });
    connect(ui->bookBtn_1, &QPushButton::clicked,this, [this]() {
        onMenuButtonClicked(3);
    });
    connect(ui->bookBtn_2, &QPushButton::clicked,this, [this]() {
        onMenuButtonClicked(3);
    });
    connect(ui->issueBtn_1, &QPushButton::clicked,this, [this]() {
        onMenuButtonClicked(4);
    });
    connect(ui->issueBtn_2, &QPushButton::clicked,this, [this]() {
        onMenuButtonClicked(4);
    });
    connect(ui->requestBtn_1, &QPushButton::clicked,this, [this]() {
        onMenuButtonClicked(5);
    });
    connect(ui->requestBtn_2, &QPushButton::clicked,this, [this]() {
        onMenuButtonClicked(5);
    });
    connect(ui->regBtn_1, &QPushButton::clicked,this, [this]() {
        onMenuButtonClicked(6);
    });
    connect(ui->regBtn_2, &QPushButton::clicked,this, [this]() {
        onMenuButtonClicked(6);
    });
    connect(ui->reportBtn_1, &QPushButton::clicked,this, [this]() {
        onMenuButtonClicked(7);
    });
    connect(ui->reportBtn_2, &QPushButton::clicked,this, [this]() {
        onMenuButtonClicked(7);
    });

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onMenuButtonClicked(int index) {
    qDebug() << "Menu button clicked:" << index;
    ui->stackedWidget->setCurrentIndex(index);
}

// QPushButton* MainWindow::createMenuButton(const QString &iconPath, const QString &text, int index) {
//     QPushButton *button = new QPushButton();
//     button->setIcon(QIcon(iconPath));
//     button->setIconSize(QSize(24, 24));
//     button->setFixedHeight(48);
//     button->setFixedWidth(48);
//     button->setCheckable(true);
//     button->setAutoExclusive(true);
//     button->setStyleSheet(R"(
//         QPushButton {
//             color: white;
//             background-color: white;
//             border: none;
//             border-radius: 12px;
//         }
//         QPushButton:hover {
//             background-color: #efefef;
//         }
//         QPushButton:checked{
//              background-color: #ebebeb;
//         }
//     )");
//     // #fbe7e3
//     connect(button, &QPushButton::clicked, [this, index]() {
//         onMenuButtonClicked(index);
//     });

//     return button;
// }

void MainWindow::applyDropShadow(QWidget* widget){
    QGraphicsDropShadowEffect *shadow = new QGraphicsDropShadowEffect;
    shadow->setBlurRadius(8);
    shadow->setOffset(0, 1);
    shadow->setColor(Qt::lightGray);
    widget->setGraphicsEffect(shadow);
}



