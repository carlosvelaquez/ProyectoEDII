/********************************************************************************
** Form generated from reading UI file 'joinfilewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JOINFILEWINDOW_H
#define UI_JOINFILEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_joinFileWindow
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QTableWidget *tableWidget;
    QTableWidget *tableWidget_2;
    QTableWidget *tableWidget_3;
    QPushButton *pushButton;

    void setupUi(QWidget *joinFileWindow)
    {
        if (joinFileWindow->objectName().isEmpty())
            joinFileWindow->setObjectName(QStringLiteral("joinFileWindow"));
        joinFileWindow->resize(698, 539);
        joinFileWindow->setStyleSheet(QStringLiteral("background-color: white;"));
        verticalLayout = new QVBoxLayout(joinFileWindow);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(joinFileWindow);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QStringLiteral("FreeSans"));
        font.setPointSize(24);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        verticalLayout->addWidget(label);

        frame = new QFrame(joinFileWindow);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        tableWidget = new QTableWidget(frame);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        horizontalLayout->addWidget(tableWidget);

        tableWidget_2 = new QTableWidget(frame);
        tableWidget_2->setObjectName(QStringLiteral("tableWidget_2"));

        horizontalLayout->addWidget(tableWidget_2);


        verticalLayout->addWidget(frame);

        tableWidget_3 = new QTableWidget(joinFileWindow);
        tableWidget_3->setObjectName(QStringLiteral("tableWidget_3"));

        verticalLayout->addWidget(tableWidget_3);

        pushButton = new QPushButton(joinFileWindow);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);


        retranslateUi(joinFileWindow);

        QMetaObject::connectSlotsByName(joinFileWindow);
    } // setupUi

    void retranslateUi(QWidget *joinFileWindow)
    {
        joinFileWindow->setWindowTitle(QApplication::translate("joinFileWindow", "Form", 0));
        label->setText(QApplication::translate("joinFileWindow", "Cruzar archivos", 0));
        pushButton->setText(QApplication::translate("joinFileWindow", "Unir archivos", 0));
    } // retranslateUi

};

namespace Ui {
    class joinFileWindow: public Ui_joinFileWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JOINFILEWINDOW_H
