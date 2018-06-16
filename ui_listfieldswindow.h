/********************************************************************************
** Form generated from reading UI file 'listfieldswindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTFIELDSWINDOW_H
#define UI_LISTFIELDSWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_listfieldswindow
{
public:
    QTableWidget *tableWidget;
    QLabel *label;

    void setupUi(QWidget *listfieldswindow)
    {
        if (listfieldswindow->objectName().isEmpty())
            listfieldswindow->setObjectName(QStringLiteral("listfieldswindow"));
        listfieldswindow->resize(716, 411);
        listfieldswindow->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        tableWidget = new QTableWidget(listfieldswindow);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(15, 71, 691, 331));
        tableWidget->setDragDropOverwriteMode(false);
        tableWidget->setColumnCount(4);
        tableWidget->horizontalHeader()->setDefaultSectionSize(170);
        label = new QLabel(listfieldswindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(23, 26, 241, 41));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        retranslateUi(listfieldswindow);

        QMetaObject::connectSlotsByName(listfieldswindow);
    } // setupUi

    void retranslateUi(QWidget *listfieldswindow)
    {
        listfieldswindow->setWindowTitle(QApplication::translate("listfieldswindow", "Form", 0));
        label->setText(QApplication::translate("listfieldswindow", "Fields", 0));
    } // retranslateUi

};

namespace Ui {
    class listfieldswindow: public Ui_listfieldswindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTFIELDSWINDOW_H
