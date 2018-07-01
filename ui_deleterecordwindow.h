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
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_deleteRecordWindow
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTableWidget *tableWidget;
    QLabel *label_2;
    QSpinBox *spinBox;
    QPushButton *pushButton;

    void setupUi(QWidget *deleteRecordWindow)
    {
        if (deleteRecordWindow->objectName().isEmpty())
            deleteRecordWindow->setObjectName(QStringLiteral("deleteRecordWindow"));
        deleteRecordWindow->resize(629, 404);
        deleteRecordWindow->setStyleSheet(QStringLiteral("background-color: white;"));
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
        label->setStyleSheet(QLatin1String("background-color:#3F51B5;\n"
"color: white;"));

        verticalLayout->addWidget(label);

        tableWidget = new QTableWidget(deleteRecordWindow);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        verticalLayout->addWidget(tableWidget);

        label_2 = new QLabel(deleteRecordWindow);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        spinBox = new QSpinBox(deleteRecordWindow);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setMaximum(100000);

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
        label->setText(QApplication::translate("deleteRecordWindow", "Eliminar Registros", 0));
        label_2->setText(QApplication::translate("deleteRecordWindow", "Ingrese numero de registro:", 0));
        pushButton->setText(QApplication::translate("deleteRecordWindow", "Eliminar registro", 0));
    } // retranslateUi

};

namespace Ui {
    class deleteRecordWindow: public Ui_deleteRecordWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETERECORDWINDOW_H
