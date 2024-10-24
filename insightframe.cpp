#include "insightframe.h"
#include "ui_insightframe.h"
#include <QGraphicsDropShadowEffect>

InsightFrame::InsightFrame(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::InsightFrame)
{
    ui->setupUi(this);

    applyDropShadow(ui->outerWidget);
}

InsightFrame::~InsightFrame()
{
    delete ui;
}

void InsightFrame::setHeaderText(QString txt){
    ui->header->setText(txt);
}

void InsightFrame::applyDropShadow(QWidget* widget){
    QGraphicsDropShadowEffect *shadow = new QGraphicsDropShadowEffect;
    shadow->setBlurRadius(4);
    shadow->setOffset(0, 1);
    shadow->setColor(Qt::lightGray);
    widget->setGraphicsEffect(shadow);
}
