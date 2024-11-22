#ifndef DASHBOARDFRAGMENT_H
#define DASHBOARDFRAGMENT_H
#include "insightframe.h"

#include <QWidget>

namespace Ui {
class DashboardFragment;
}

class DashboardFragment : public QWidget
{
    Q_OBJECT

public:
    explicit DashboardFragment(QWidget *parent = nullptr);
    ~DashboardFragment();

    InsightFrame *w1;
    InsightFrame *w2;
    InsightFrame *w3;
    InsightFrame *w4;

    void loadData();

private:
    Ui::DashboardFragment *ui;
};

#endif // DASHBOARDFRAGMENT_H
