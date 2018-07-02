/********************************************************************************
** Form generated from reading UI file 'linkedfileswindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LINKEDFILESWINDOW_H
#define UI_LINKEDFILESWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_linkedFilesWindow
{
public:
    QLabel *label;
    QTableWidget *tableWidget;
    QTableWidget *tableWidget_2;
    QTableWidget *tableWidget_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *linkedFilesWindow)
    {
        if (linkedFilesWindow->objectName().isEmpty())
            linkedFilesWindow->setObjectName(QStringLiteral("linkedFilesWindow"));
        linkedFilesWindow->resize(771, 502);
        label = new QLabel(linkedFilesWindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 20, 91, 17));
        tableWidget = new QTableWidget(linkedFilesWindow);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(20, 50, 361, 192));
        tableWidget_2 = new QTableWidget(linkedFilesWindow);
        tableWidget_2->setObjectName(QStringLiteral("tableWidget_2"));
        tableWidget_2->setGeometry(QRect(390, 50, 361, 192));
        tableWidget_3 = new QTableWidget(linkedFilesWindow);
        tableWidget_3->setObjectName(QStringLiteral("tableWidget_3"));
        tableWidget_3->setGeometry(QRect(20, 260, 411, 231));
        pushButton = new QPushButton(linkedFilesWindow);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(500, 300, 80, 25));
        pushButton_2 = new QPushButton(linkedFilesWindow);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(500, 340, 80, 25));

        retranslateUi(linkedFilesWindow);

        QMetaObject::connectSlotsByName(linkedFilesWindow);
    } // setupUi

    void retranslateUi(QWidget *linkedFilesWindow)
    {
        linkedFilesWindow->setWindowTitle(QApplication::translate("linkedFilesWindow", "Form", 0));
        label->setText(QApplication::translate("linkedFilesWindow", "Cruzar archivos", 0));
        pushButton->setText(QApplication::translate("linkedFilesWindow", "Buscar...", 0));
        pushButton_2->setText(QApplication::translate("linkedFilesWindow", "Unir", 0));
    } // retranslateUi

};

namespace Ui {
    class linkedFilesWindow: public Ui_linkedFilesWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LINKEDFILESWINDOW_H
