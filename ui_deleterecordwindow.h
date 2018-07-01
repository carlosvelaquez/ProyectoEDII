/********************************************************************************
** Form generated from reading UI file 'deleterecordwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETERECORDWINDOW_H
#define UI_DELETERECORDWINDOW_H

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

class Ui_deleteRecordWindow
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QSpinBox *spinBox;
    QPushButton *pushButton_eliminar;

    void setupUi(QWidget *deleteRecordWindow)
    {
        if (deleteRecordWindow->objectName().isEmpty())
            deleteRecordWindow->setObjectName(QStringLiteral("deleteRecordWindow"));
        deleteRecordWindow->resize(397, 210);
        verticalLayout = new QVBoxLayout(deleteRecordWindow);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(deleteRecordWindow);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QStringLiteral("FreeSans"));
        font.setPointSize(24);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        verticalLayout->addWidget(label);

        label_2 = new QLabel(deleteRecordWindow);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        spinBox = new QSpinBox(deleteRecordWindow);
        spinBox->setObjectName(QStringLiteral("spinBox"));

        verticalLayout->addWidget(spinBox);

        pushButton_eliminar = new QPushButton(deleteRecordWindow);
        pushButton_eliminar->setObjectName(QStringLiteral("pushButton_eliminar"));

        verticalLayout->addWidget(pushButton_eliminar);


        retranslateUi(deleteRecordWindow);

        QMetaObject::connectSlotsByName(deleteRecordWindow);
    } // setupUi

    void retranslateUi(QWidget *deleteRecordWindow)
    {
        deleteRecordWindow->setWindowTitle(QApplication::translate("deleteRecordWindow", "Form", nullptr));
        label->setText(QApplication::translate("deleteRecordWindow", "Eliminar Registro", nullptr));
        label_2->setText(QApplication::translate("deleteRecordWindow", "Ingrese indice de registro: ", nullptr));
        pushButton_eliminar->setText(QApplication::translate("deleteRecordWindow", "Eliminar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class deleteRecordWindow: public Ui_deleteRecordWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETERECORDWINDOW_H
