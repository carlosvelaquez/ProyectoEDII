/********************************************************************************
** Form generated from reading UI file 'listfieldswindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTFIELDSWINDOW_H
#define UI_LISTFIELDSWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_listfieldswindow
{
public:
    QVBoxLayout *verticalLayout_2;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTableWidget *tableWidget;

    void setupUi(QWidget *listfieldswindow)
    {
        if (listfieldswindow->objectName().isEmpty())
            listfieldswindow->setObjectName(QStringLiteral("listfieldswindow"));
        listfieldswindow->resize(730, 430);
        listfieldswindow->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        verticalLayout_2 = new QVBoxLayout(listfieldswindow);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        frame = new QFrame(listfieldswindow);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        verticalLayout->addWidget(label);

        tableWidget = new QTableWidget(frame);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setDragDropOverwriteMode(false);
        tableWidget->setColumnCount(4);
        tableWidget->horizontalHeader()->setDefaultSectionSize(170);

        verticalLayout->addWidget(tableWidget);


        verticalLayout_2->addWidget(frame);


        retranslateUi(listfieldswindow);

        QMetaObject::connectSlotsByName(listfieldswindow);
    } // setupUi

    void retranslateUi(QWidget *listfieldswindow)
    {
        listfieldswindow->setWindowTitle(QApplication::translate("listfieldswindow", "Form", nullptr));
        label->setText(QApplication::translate("listfieldswindow", "Fields", nullptr));
    } // retranslateUi

};

namespace Ui {
    class listfieldswindow: public Ui_listfieldswindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTFIELDSWINDOW_H
