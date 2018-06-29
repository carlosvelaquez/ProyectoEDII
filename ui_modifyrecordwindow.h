/********************************************************************************
** Form generated from reading UI file 'modifyrecordwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYRECORDWINDOW_H
#define UI_MODIFYRECORDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_modifyrecordwindow
{
public:
    QLabel *label;
    QLabel *label_2;
    QSpinBox *spinBox;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QTableWidget *tableWidget;

    void setupUi(QWidget *modifyrecordwindow)
    {
        if (modifyrecordwindow->objectName().isEmpty())
            modifyrecordwindow->setObjectName(QStringLiteral("modifyrecordwindow"));
        modifyrecordwindow->resize(551, 318);
        label = new QLabel(modifyrecordwindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 711, 37));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        label_2 = new QLabel(modifyrecordwindow);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 70, 101, 17));
        spinBox = new QSpinBox(modifyrecordwindow);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(140, 70, 101, 26));
        pushButton = new QPushButton(modifyrecordwindow);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(30, 120, 80, 25));
        pushButton_2 = new QPushButton(modifyrecordwindow);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(30, 260, 80, 25));
        tableWidget = new QTableWidget(modifyrecordwindow);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(30, 170, 511, 61));

        retranslateUi(modifyrecordwindow);

        QMetaObject::connectSlotsByName(modifyrecordwindow);
    } // setupUi

    void retranslateUi(QWidget *modifyrecordwindow)
    {
        modifyrecordwindow->setWindowTitle(QApplication::translate("modifyrecordwindow", "Form", 0));
        label->setText(QApplication::translate("modifyrecordwindow", "Modificar Registros", 0));
        label_2->setText(QApplication::translate("modifyrecordwindow", "Index del registro: ", 0));
        pushButton->setText(QApplication::translate("modifyrecordwindow", "Eliminar", 0));
        pushButton_2->setText(QApplication::translate("modifyrecordwindow", "A\303\261adir", 0));
    } // retranslateUi

};

namespace Ui {
    class modifyrecordwindow: public Ui_modifyrecordwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYRECORDWINDOW_H
