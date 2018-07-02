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
#include <QtWidgets/QFrame>
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
    QPushButton *pushButton_send;
    QTableWidget *tableWidget;
    QPushButton *pushButton_find;
    QFrame *frame;
    QLabel *label_2;
    QComboBox *comboBox_file1;
    QPushButton *pushButton_add1;
    QLabel *label_3;
    QComboBox *comboBox_file2;
    QPushButton *pushButton_add2;

    void setupUi(QWidget *linkedFilesWindow)
    {
        if (linkedFilesWindow->objectName().isEmpty())
            linkedFilesWindow->setObjectName(QStringLiteral("linkedFilesWindow"));
        linkedFilesWindow->resize(443, 530);
        label = new QLabel(linkedFilesWindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 441, 61));
        QFont font;
        font.setFamily(QStringLiteral("FreeSans"));
        font.setPointSize(24);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        pushButton_send = new QPushButton(linkedFilesWindow);
        pushButton_send->setObjectName(QStringLiteral("pushButton_send"));
        pushButton_send->setGeometry(QRect(9, 500, 421, 25));
        tableWidget = new QTableWidget(linkedFilesWindow);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(10, 250, 421, 241));
        pushButton_find = new QPushButton(linkedFilesWindow);
        pushButton_find->setObjectName(QStringLiteral("pushButton_find"));
        pushButton_find->setGeometry(QRect(10, 70, 101, 25));
        frame = new QFrame(linkedFilesWindow);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(10, 100, 421, 151));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label_2 = new QLabel(frame);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 20, 121, 17));
        comboBox_file1 = new QComboBox(frame);
        comboBox_file1->setObjectName(QStringLiteral("comboBox_file1"));
        comboBox_file1->setGeometry(QRect(10, 40, 291, 25));
        pushButton_add1 = new QPushButton(frame);
        pushButton_add1->setObjectName(QStringLiteral("pushButton_add1"));
        pushButton_add1->setGeometry(QRect(310, 40, 101, 25));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 80, 141, 17));
        comboBox_file2 = new QComboBox(frame);
        comboBox_file2->setObjectName(QStringLiteral("comboBox_file2"));
        comboBox_file2->setGeometry(QRect(10, 100, 291, 25));
        pushButton_add2 = new QPushButton(frame);
        pushButton_add2->setObjectName(QStringLiteral("pushButton_add2"));
        pushButton_add2->setGeometry(QRect(310, 100, 101, 25));

        retranslateUi(linkedFilesWindow);

        QMetaObject::connectSlotsByName(linkedFilesWindow);
    } // setupUi

    void retranslateUi(QWidget *linkedFilesWindow)
    {
        linkedFilesWindow->setWindowTitle(QApplication::translate("linkedFilesWindow", "Form", 0));
        label->setText(QApplication::translate("linkedFilesWindow", "Cruzar archivos", 0));
        pushButton_send->setText(QApplication::translate("linkedFilesWindow", "Agregar", 0));
        pushButton_find->setText(QApplication::translate("linkedFilesWindow", "Buscar archivo...", 0));
        label_2->setText(QApplication::translate("linkedFilesWindow", "Campos del archivo 1", 0));
        pushButton_add1->setText(QApplication::translate("linkedFilesWindow", "A\303\261adir campo", 0));
        label_3->setText(QApplication::translate("linkedFilesWindow", "Campos del archivo 2", 0));
        pushButton_add2->setText(QApplication::translate("linkedFilesWindow", "A\303\261adir campo", 0));
    } // retranslateUi

};

namespace Ui {
    class linkedFilesWindow: public Ui_linkedFilesWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LINKEDFILESWINDOW_H
