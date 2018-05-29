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
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FieldWindow
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *TabCreateFIeld;
    QLineEdit *LineEdit_field;
    QPushButton *pushButton;
    QLabel *label;
    QWidget *TabModifyField;

    void setupUi(QWidget *FieldWindow)
    {
        if (FieldWindow->objectName().isEmpty())
            FieldWindow->setObjectName(QStringLiteral("FieldWindow"));
        FieldWindow->resize(607, 390);
        verticalLayout = new QVBoxLayout(FieldWindow);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tabWidget = new QTabWidget(FieldWindow);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        TabCreateFIeld = new QWidget();
        TabCreateFIeld->setObjectName(QStringLiteral("TabCreateFIeld"));
        LineEdit_field = new QLineEdit(TabCreateFIeld);
        LineEdit_field->setObjectName(QStringLiteral("LineEdit_field"));
        LineEdit_field->setGeometry(QRect(120, 80, 441, 25));
        pushButton = new QPushButton(TabCreateFIeld);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(220, 130, 121, 31));
        label = new QLabel(TabCreateFIeld);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 80, 51, 21));
        tabWidget->addTab(TabCreateFIeld, QString());
        TabModifyField = new QWidget();
        TabModifyField->setObjectName(QStringLiteral("TabModifyField"));
        tabWidget->addTab(TabModifyField, QString());

        verticalLayout->addWidget(tabWidget);


        retranslateUi(FieldWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(FieldWindow);
    } // setupUi

    void retranslateUi(QWidget *FieldWindow)
    {
        FieldWindow->setWindowTitle(QApplication::translate("FieldWindow", "Form", 0));
        pushButton->setText(QApplication::translate("FieldWindow", "Crear Campo", 0));
        label->setText(QApplication::translate("FieldWindow", "Campo:", 0));
        tabWidget->setTabText(tabWidget->indexOf(TabCreateFIeld), QApplication::translate("FieldWindow", "Crear Campos", 0));
        tabWidget->setTabText(tabWidget->indexOf(TabModifyField), QApplication::translate("FieldWindow", "Modificar Campos", 0));
    } // retranslateUi

};

namespace Ui {
    class FieldWindow: public Ui_FieldWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIELDWINDOW_H
