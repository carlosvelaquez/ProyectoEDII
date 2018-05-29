/********************************************************************************
** Form generated from reading UI file 'recordwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECORDWINDOW_H
#define UI_RECORDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RecordWindow
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *TabAddRecord;
    QWidget *TabDeleteRecord;

    void setupUi(QWidget *RecordWindow)
    {
        if (RecordWindow->objectName().isEmpty())
            RecordWindow->setObjectName(QStringLiteral("RecordWindow"));
        RecordWindow->resize(378, 276);
        verticalLayout = new QVBoxLayout(RecordWindow);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tabWidget = new QTabWidget(RecordWindow);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        TabAddRecord = new QWidget();
        TabAddRecord->setObjectName(QStringLiteral("TabAddRecord"));
        tabWidget->addTab(TabAddRecord, QString());
        TabDeleteRecord = new QWidget();
        TabDeleteRecord->setObjectName(QStringLiteral("TabDeleteRecord"));
        tabWidget->addTab(TabDeleteRecord, QString());

        verticalLayout->addWidget(tabWidget);


        retranslateUi(RecordWindow);

        QMetaObject::connectSlotsByName(RecordWindow);
    } // setupUi

    void retranslateUi(QWidget *RecordWindow)
    {
        RecordWindow->setWindowTitle(QApplication::translate("RecordWindow", "Form", 0));
        tabWidget->setTabText(tabWidget->indexOf(TabAddRecord), QApplication::translate("RecordWindow", "Tab 1", 0));
        tabWidget->setTabText(tabWidget->indexOf(TabDeleteRecord), QApplication::translate("RecordWindow", "Tab 2", 0));
    } // retranslateUi

};

namespace Ui {
    class RecordWindow: public Ui_RecordWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECORDWINDOW_H
