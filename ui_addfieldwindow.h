/********************************************************************************
** Form generated from reading UI file 'addfieldwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDFIELDWINDOW_H
#define UI_ADDFIELDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addfieldwindow
{
public:

    void setupUi(QWidget *addfieldwindow)
    {
        if (addfieldwindow->objectName().isEmpty())
            addfieldwindow->setObjectName(QStringLiteral("addfieldwindow"));
        addfieldwindow->resize(400, 300);

        retranslateUi(addfieldwindow);

        QMetaObject::connectSlotsByName(addfieldwindow);
    } // setupUi

    void retranslateUi(QWidget *addfieldwindow)
    {
        addfieldwindow->setWindowTitle(QApplication::translate("addfieldwindow", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class addfieldwindow: public Ui_addfieldwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDFIELDWINDOW_H
