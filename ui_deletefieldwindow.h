/********************************************************************************
** Form generated from reading UI file 'deletefieldwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETEFIELDWINDOW_H
#define UI_DELETEFIELDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_deletefieldwindow
{
public:
    QComboBox *comboBox_deletefield;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton_deletefield;

    void setupUi(QWidget *deletefieldwindow)
    {
        if (deletefieldwindow->objectName().isEmpty())
            deletefieldwindow->setObjectName(QStringLiteral("deletefieldwindow"));
        deletefieldwindow->resize(392, 200);
        deletefieldwindow->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        comboBox_deletefield = new QComboBox(deletefieldwindow);
        comboBox_deletefield->setObjectName(QStringLiteral("comboBox_deletefield"));
        comboBox_deletefield->setGeometry(QRect(60, 110, 261, 25));
        label = new QLabel(deletefieldwindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(13, 16, 151, 31));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label_2 = new QLabel(deletefieldwindow);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 70, 341, 21));
        pushButton_deletefield = new QPushButton(deletefieldwindow);
        pushButton_deletefield->setObjectName(QStringLiteral("pushButton_deletefield"));
        pushButton_deletefield->setGeometry(QRect(139, 150, 111, 25));

        retranslateUi(deletefieldwindow);

        QMetaObject::connectSlotsByName(deletefieldwindow);
    } // setupUi

    void retranslateUi(QWidget *deletefieldwindow)
    {
        deletefieldwindow->setWindowTitle(QApplication::translate("deletefieldwindow", "Form", 0));
        label->setText(QApplication::translate("deletefieldwindow", "Delete Record", 0));
        label_2->setText(QApplication::translate("deletefieldwindow", "Choose the field.", 0));
        pushButton_deletefield->setText(QApplication::translate("deletefieldwindow", "Delete", 0));
    } // retranslateUi

};

namespace Ui {
    class deletefieldwindow: public Ui_deletefieldwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETEFIELDWINDOW_H
