#ifndef DASHBOARDFRAGMENT_H
#define DASHBOARDFRAGMENT_H

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

private:
    Ui::DashboardFragment *ui;
};

#endif // DASHBOARDFRAGMENT_H
