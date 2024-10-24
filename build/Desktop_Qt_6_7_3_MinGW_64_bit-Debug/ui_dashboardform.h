/********************************************************************************
** Form generated from reading UI file 'dashboardform.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DASHBOARDFORM_H
#define UI_DASHBOARDFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DashboardFragment
{
public:
    QVBoxLayout *dashboardFragmentVL;
    QWidget *topWidget;
    QHBoxLayout *topWidgetHL;

    void setupUi(QWidget *DashboardFragment)
    {
        if (DashboardFragment->objectName().isEmpty())
            DashboardFragment->setObjectName("DashboardFragment");
        DashboardFragment->resize(919, 500);
        DashboardFragment->setStyleSheet(QString::fromUtf8(""));
        dashboardFragmentVL = new QVBoxLayout(DashboardFragment);
        dashboardFragmentVL->setSpacing(0);
        dashboardFragmentVL->setObjectName("dashboardFragmentVL");
        dashboardFragmentVL->setContentsMargins(0, 16, 0, 0);
        topWidget = new QWidget(DashboardFragment);
        topWidget->setObjectName("topWidget");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(topWidget->sizePolicy().hasHeightForWidth());
        topWidget->setSizePolicy(sizePolicy);
        topWidget->setMinimumSize(QSize(0, 150));
        topWidget->setMaximumSize(QSize(16777215, 150));
        topWidget->setStyleSheet(QString::fromUtf8(""));
        topWidgetHL = new QHBoxLayout(topWidget);
        topWidgetHL->setSpacing(24);
        topWidgetHL->setObjectName("topWidgetHL");
        topWidgetHL->setContentsMargins(24, 0, 24, 0);

        dashboardFragmentVL->addWidget(topWidget);


        retranslateUi(DashboardFragment);

        QMetaObject::connectSlotsByName(DashboardFragment);
    } // setupUi

    void retranslateUi(QWidget *DashboardFragment)
    {
        DashboardFragment->setWindowTitle(QCoreApplication::translate("DashboardFragment", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DashboardFragment: public Ui_DashboardFragment {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DASHBOARDFORM_H
