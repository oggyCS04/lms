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

    QPushButton *dashboardBtn = createMenuButton(":/icons/res/icon/dashboard.png", "Dashboard", 0);
    QPushButton *categoryBtn = createMenuButton(":/icons/res/icon/category.png", "Categories", 1);
    QPushButton *publicationBtn = createMenuButton(":/icons/res/icon/publication.png", "Publications", 2);
    QPushButton *bookBtn = createMenuButton(":/icons/res/icon/books.png", "Books", 3);
    QPushButton *issueBtn = createMenuButton(":/icons/res/icon/book-issue.png", "Book Issue", 4);
    QPushButton *requestBtn = createMenuButton(":/icons/res/icon/book-request.png", "Book Request", 5);
    QPushButton *regBtn = createMenuButton(":/icons/res/icon/reg-student.png", "Reg Student", 6);
    QPushButton *reportBtn = createMenuButton(":/icons/res/icon/report.png", "Report", 7);

    dashboardBtn->setChecked(true);

    ui->sidebar_vlayout->addWidget(dashboardBtn);
    ui->sidebar_vlayout->addWidget(categoryBtn);
    ui->sidebar_vlayout->addWidget(publicationBtn);
    ui->sidebar_vlayout->addWidget(bookBtn);
    ui->sidebar_vlayout->addWidget(issueBtn);
    ui->sidebar_vlayout->addWidget(requestBtn);
    ui->sidebar_vlayout->addWidget(regBtn);
    ui->sidebar_vlayout->addWidget(reportBtn);

    ui->sidebar_vlayout->addStretch();
    ui->sidebar_vlayout->setAlignment(dashboardBtn,Qt::AlignHCenter);
    ui->sidebar_vlayout->setAlignment(categoryBtn,Qt::AlignHCenter);
    ui->sidebar_vlayout->setAlignment(publicationBtn,Qt::AlignHCenter);
    ui->sidebar_vlayout->setAlignment(bookBtn,Qt::AlignHCenter);
    ui->sidebar_vlayout->setAlignment(issueBtn,Qt::AlignHCenter);
    ui->sidebar_vlayout->setAlignment(requestBtn,Qt::AlignHCenter);
    ui->sidebar_vlayout->setAlignment(regBtn,Qt::AlignHCenter);
    ui->sidebar_vlayout->setAlignment(reportBtn,Qt::AlignHCenter);

    ui->stackedWidget->setCurrentIndex(0);

    categoryWidget = new CategoryFragment(this);
    bookWidget = new BookFragment(this);

    ui->categoryGL->addWidget(categoryWidget);
    ui->booksGL->addWidget(bookWidget);

}

MainWindow::~MainWindow()
{
    delete ui;
}

QPushButton* MainWindow::createMenuButton(const QString &iconPath, const QString &text, int index) {
    QPushButton *button = new QPushButton();
    button->setIcon(QIcon(iconPath));
    button->setIconSize(QSize(24, 24));
    button->setFixedHeight(48);
    button->setFixedWidth(48);
    button->setCheckable(true);
    button->setAutoExclusive(true);
    button->setStyleSheet(R"(
        QPushButton {
            color: white;
            background-color: white;
            border: none;
            border-radius: 12px;
        }
        QPushButton:hover {
            background-color: #ebebeb;
        }
        QPushButton:checked{
            background-color: #fbe7e3;
        }
    )");
    connect(button, &QPushButton::clicked, [this, index]() {
        onMenuButtonClicked(index);
    });

    return button;
}

void MainWindow::onMenuButtonClicked(int index) {
    qDebug() << "Menu button clicked:" << index;
    ui->stackedWidget->setCurrentIndex(index);
}

// void MainWindow::applyDropShadow(QFrame* frame){
//     QGraphicsDropShadowEffect *shadow = new QGraphicsDropShadowEffect;
//     shadow->setBlurRadius(20);
//     shadow->setOffset(0, 0);
//     shadow->setColor(Qt::lightGray);
//     frame->setGraphicsEffect(shadow);
// }
