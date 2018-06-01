/********************************************************************************
** Form generated from reading UI file 'addrecordwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDRECORDWINDOW_H
#define UI_ADDRECORDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addRecordWindow
{
public:
    QVBoxLayout *verticalLayout;
    QTableWidget *tableWidget;
    QPushButton *pushButton_send;

    void setupUi(QWidget *addRecordWindow)
    {
        if (addRecordWindow->objectName().isEmpty())
            addRecordWindow->setObjectName(QStringLiteral("addRecordWindow"));
        addRecordWindow->resize(630, 405);
        verticalLayout = new QVBoxLayout(addRecordWindow);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tableWidget = new QTableWidget(addRecordWindow);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setRowCount(0);
        tableWidget->setColumnCount(4);
        tableWidget->horizontalHeader()->setDefaultSectionSize(151);
        tableWidget->horizontalHeader()->setMinimumSectionSize(20);

        verticalLayout->addWidget(tableWidget);

        pushButton_send = new QPushButton(addRecordWindow);
        pushButton_send->setObjectName(QStringLiteral("pushButton_send"));

        verticalLayout->addWidget(pushButton_send);


        retranslateUi(addRecordWindow);

        QMetaObject::connectSlotsByName(addRecordWindow);
    } // setupUi

    void retranslateUi(QWidget *addRecordWindow)
    {
        addRecordWindow->setWindowTitle(QApplication::translate("addRecordWindow", "Form", 0));
        pushButton_send->setText(QApplication::translate("addRecordWindow", "Enviar", 0));
    } // retranslateUi

};

namespace Ui {
    class addRecordWindow: public Ui_addRecordWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDRECORDWINDOW_H
