/********************************************************************************
** Form generated from reading UI file 'deletewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETEWINDOW_H
#define UI_DELETEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_deletewindow
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QSpinBox *spinBox_delete;
    QPushButton *pushButton_delete;

    void setupUi(QWidget *deletewindow)
    {
        if (deletewindow->objectName().isEmpty())
            deletewindow->setObjectName(QStringLiteral("deletewindow"));
        deletewindow->resize(400, 116);
        verticalLayout = new QVBoxLayout(deletewindow);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(deletewindow);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        spinBox_delete = new QSpinBox(deletewindow);
        spinBox_delete->setObjectName(QStringLiteral("spinBox_delete"));

        verticalLayout->addWidget(spinBox_delete);

        pushButton_delete = new QPushButton(deletewindow);
        pushButton_delete->setObjectName(QStringLiteral("pushButton_delete"));

        verticalLayout->addWidget(pushButton_delete);


        retranslateUi(deletewindow);

        QMetaObject::connectSlotsByName(deletewindow);
    } // setupUi

    void retranslateUi(QWidget *deletewindow)
    {
        deletewindow->setWindowTitle(QApplication::translate("deletewindow", "Form", 0));
        label->setText(QApplication::translate("deletewindow", "Escoger N\303\272mero", 0));
        pushButton_delete->setText(QApplication::translate("deletewindow", "Eliminar", 0));
    } // retranslateUi

};

namespace Ui {
    class deletewindow: public Ui_deletewindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETEWINDOW_H
