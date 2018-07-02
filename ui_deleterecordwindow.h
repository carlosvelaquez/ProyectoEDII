/********************************************************************************
** Form generated from reading UI file 'deleterecordwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
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
    QLabel *label_2;
    QLabel *label;
    QSpinBox *spinBox;
    QPushButton *pushButton;

    void setupUi(QWidget *deleteRecordWindow)
    {
        if (deleteRecordWindow->objectName().isEmpty())
            deleteRecordWindow->setObjectName(QStringLiteral("deleteRecordWindow"));
        deleteRecordWindow->resize(417, 177);
        verticalLayout = new QVBoxLayout(deleteRecordWindow);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_2 = new QLabel(deleteRecordWindow);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font;
        font.setFamily(QStringLiteral("FreeSans"));
        font.setPointSize(24);
        font.setBold(false);
        font.setWeight(50);
        label_2->setFont(font);

        verticalLayout->addWidget(label_2);

        label = new QLabel(deleteRecordWindow);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        spinBox = new QSpinBox(deleteRecordWindow);
        spinBox->setObjectName(QStringLiteral("spinBox"));

        verticalLayout->addWidget(spinBox);

        pushButton = new QPushButton(deleteRecordWindow);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);


        retranslateUi(deleteRecordWindow);

        QMetaObject::connectSlotsByName(deleteRecordWindow);
    } // setupUi

    void retranslateUi(QWidget *deleteRecordWindow)
    {
        deleteRecordWindow->setWindowTitle(QApplication::translate("deleteRecordWindow", "Form", 0));
        label_2->setText(QApplication::translate("deleteRecordWindow", "Eliminar Registros", 0));
        label->setText(QApplication::translate("deleteRecordWindow", "Numero de registro a eliminar:", 0));
        pushButton->setText(QApplication::translate("deleteRecordWindow", "Eliminar", 0));
    } // retranslateUi

};

namespace Ui {
    class deleteRecordWindow: public Ui_deleteRecordWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETERECORDWINDOW_H
