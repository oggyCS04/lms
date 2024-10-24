#ifndef INSIGHTFRAME_H
#define INSIGHTFRAME_H

#include <QWidget>

namespace Ui {
class InsightFrame;
}

class InsightFrame : public QWidget
{
    Q_OBJECT

public:
    explicit InsightFrame(QWidget *parent = nullptr);
    ~InsightFrame();

    void setHeaderText(QString);

private:
    Ui::InsightFrame *ui;

    void applyDropShadow(QWidget*);
};

#endif // INSIGHTFRAME_H
