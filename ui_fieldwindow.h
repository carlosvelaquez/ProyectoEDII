/********************************************************************************
** Form generated from reading UI file 'fieldwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIELDWINDOW_H
#define UI_FIELDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FieldWindow
{
public:
    QLineEdit *lineEdit_field;
    QPushButton *pushButton_CrearCampo;
    QLabel *label;

    void setupUi(QWidget *FieldWindow)
    {
        if (FieldWindow->objectName().isEmpty())
            FieldWindow->setObjectName(QStringLiteral("FieldWindow"));
        FieldWindow->resize(408, 152);
        lineEdit_field = new QLineEdit(FieldWindow);
        lineEdit_field->setObjectName(QStringLiteral("lineEdit_field"));
        lineEdit_field->setGeometry(QRect(90, 50, 291, 25));
        pushButton_CrearCampo = new QPushButton(FieldWindow);
        pushButton_CrearCampo->setObjectName(QStringLiteral("pushButton_CrearCampo"));
        pushButton_CrearCampo->setGeometry(QRect(160, 100, 80, 25));
        label = new QLabel(FieldWindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 50, 51, 21));

        retranslateUi(FieldWindow);

        QMetaObject::connectSlotsByName(FieldWindow);
    } // setupUi

    void retranslateUi(QWidget *FieldWindow)
    {
        FieldWindow->setWindowTitle(QApplication::translate("FieldWindow", "Form", 0));
        pushButton_CrearCampo->setText(QApplication::translate("FieldWindow", "Crear Campo", 0));
        label->setText(QApplication::translate("FieldWindow", "Campo:", 0));
    } // retranslateUi

};

namespace Ui {
    class FieldWindow: public Ui_FieldWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIELDWINDOW_H
