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
#include <QtWidgets/QComboBox>
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
    QPushButton *pushButton_add1;
    QComboBox *comboBox_file1;
    QLabel *label_2;
    QLabel *label_3;
    QComboBox *comboBox_file2;
    QPushButton *pushButton_add2;
    QPushButton *pushButton_send;
    QTableWidget *tableWidget;
    QLabel *label_4;
    QPushButton *pushButton_find;

    void setupUi(QWidget *linkedFilesWindow)
    {
        if (linkedFilesWindow->objectName().isEmpty())
            linkedFilesWindow->setObjectName(QStringLiteral("linkedFilesWindow"));
        linkedFilesWindow->resize(443, 555);
        label = new QLabel(linkedFilesWindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 20, 91, 17));
        pushButton_add1 = new QPushButton(linkedFilesWindow);
        pushButton_add1->setObjectName(QStringLiteral("pushButton_add1"));
        pushButton_add1->setGeometry(QRect(330, 140, 101, 25));
        comboBox_file1 = new QComboBox(linkedFilesWindow);
        comboBox_file1->setObjectName(QStringLiteral("comboBox_file1"));
        comboBox_file1->setGeometry(QRect(20, 140, 291, 25));
        label_2 = new QLabel(linkedFilesWindow);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 110, 121, 17));
        label_3 = new QLabel(linkedFilesWindow);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 170, 141, 17));
        comboBox_file2 = new QComboBox(linkedFilesWindow);
        comboBox_file2->setObjectName(QStringLiteral("comboBox_file2"));
        comboBox_file2->setGeometry(QRect(20, 200, 291, 25));
        pushButton_add2 = new QPushButton(linkedFilesWindow);
        pushButton_add2->setObjectName(QStringLiteral("pushButton_add2"));
        pushButton_add2->setGeometry(QRect(330, 200, 101, 25));
        pushButton_send = new QPushButton(linkedFilesWindow);
        pushButton_send->setObjectName(QStringLiteral("pushButton_send"));
        pushButton_send->setGeometry(QRect(180, 500, 80, 25));
        tableWidget = new QTableWidget(linkedFilesWindow);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(10, 280, 421, 211));
        label_4 = new QLabel(linkedFilesWindow);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(150, 250, 121, 17));
        pushButton_find = new QPushButton(linkedFilesWindow);
        pushButton_find->setObjectName(QStringLiteral("pushButton_find"));
        pushButton_find->setGeometry(QRect(20, 70, 101, 25));

        retranslateUi(linkedFilesWindow);

        QMetaObject::connectSlotsByName(linkedFilesWindow);
    } // setupUi

    void retranslateUi(QWidget *linkedFilesWindow)
    {
        linkedFilesWindow->setWindowTitle(QApplication::translate("linkedFilesWindow", "Form", 0));
        label->setText(QApplication::translate("linkedFilesWindow", "Cruzar archivos", 0));
        pushButton_add1->setText(QApplication::translate("linkedFilesWindow", "A\303\261adir campo", 0));
        label_2->setText(QApplication::translate("linkedFilesWindow", "Campos del archivo 1", 0));
        label_3->setText(QApplication::translate("linkedFilesWindow", "Campos del archivo 2", 0));
        pushButton_add2->setText(QApplication::translate("linkedFilesWindow", "A\303\261adir campo", 0));
        pushButton_send->setText(QApplication::translate("linkedFilesWindow", "Agregar", 0));
        label_4->setText(QApplication::translate("linkedFilesWindow", "Campos del archivo 3", 0));
        pushButton_find->setText(QApplication::translate("linkedFilesWindow", "Buscar archivo...", 0));
    } // retranslateUi

};

namespace Ui {
    class linkedFilesWindow: public Ui_linkedFilesWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LINKEDFILESWINDOW_H
