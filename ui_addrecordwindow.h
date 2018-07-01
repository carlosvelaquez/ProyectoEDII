/********************************************************************************
** Form generated from reading UI file 'addrecordwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
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
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addRecordWindow
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTableWidget *tableWidget;
    QPushButton *pushButton_send;

    void setupUi(QWidget *addRecordWindow)
    {
        if (addRecordWindow->objectName().isEmpty())
            addRecordWindow->setObjectName(QStringLiteral("addRecordWindow"));
        addRecordWindow->resize(730, 430);
        addRecordWindow->setStyleSheet(QLatin1String("background-color: white;\n"
""));
        verticalLayout = new QVBoxLayout(addRecordWindow);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(addRecordWindow);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QStringLiteral("FreeSans"));
        font.setPointSize(24);
        label->setFont(font);
        label->setStyleSheet(QLatin1String("background-color:#3F51B5;\n"
"color: white;"));

        verticalLayout->addWidget(label);

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
        addRecordWindow->setWindowTitle(QApplication::translate("addRecordWindow", "Form", nullptr));
        label->setText(QApplication::translate("addRecordWindow", "Ingresar Registros", nullptr));
        pushButton_send->setText(QApplication::translate("addRecordWindow", "Enviar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addRecordWindow: public Ui_addRecordWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDRECORDWINDOW_H
