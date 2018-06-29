/********************************************************************************
** Form generated from reading UI file 'modifyfieldwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYFIELDWINDOW_H
#define UI_MODIFYFIELDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_modifyfieldwindow
{
public:

    void setupUi(QWidget *modifyfieldwindow)
    {
        if (modifyfieldwindow->objectName().isEmpty())
            modifyfieldwindow->setObjectName(QStringLiteral("modifyfieldwindow"));
        modifyfieldwindow->resize(400, 300);

        retranslateUi(modifyfieldwindow);

        QMetaObject::connectSlotsByName(modifyfieldwindow);
    } // setupUi

    void retranslateUi(QWidget *modifyfieldwindow)
    {
        modifyfieldwindow->setWindowTitle(QApplication::translate("modifyfieldwindow", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class modifyfieldwindow: public Ui_modifyfieldwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYFIELDWINDOW_H
