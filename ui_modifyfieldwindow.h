/********************************************************************************
** Form generated from reading UI file 'modifyfieldwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYFIELDWINDOW_H
#define UI_MODIFYFIELDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_modifyfieldwindow
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QComboBox *comboBox_campos;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLabel *label_4;
    QSpinBox *spinBox;
    QLabel *label_5;
    QComboBox *comboBox_2;
    QRadioButton *radioButton;
    QPushButton *pushButton;

    void setupUi(QWidget *modifyfieldwindow)
    {
        if (modifyfieldwindow->objectName().isEmpty())
            modifyfieldwindow->setObjectName(QStringLiteral("modifyfieldwindow"));
        modifyfieldwindow->resize(345, 404);
        modifyfieldwindow->setStyleSheet(QStringLiteral("background-color: white;"));
        verticalLayout = new QVBoxLayout(modifyfieldwindow);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(modifyfieldwindow);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);

        verticalLayout->addWidget(label);

        label_2 = new QLabel(modifyfieldwindow);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        comboBox_campos = new QComboBox(modifyfieldwindow);
        comboBox_campos->setObjectName(QStringLiteral("comboBox_campos"));

        verticalLayout->addWidget(comboBox_campos);

        label_3 = new QLabel(modifyfieldwindow);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        lineEdit = new QLineEdit(modifyfieldwindow);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        verticalLayout->addWidget(lineEdit);

        label_4 = new QLabel(modifyfieldwindow);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout->addWidget(label_4);

        spinBox = new QSpinBox(modifyfieldwindow);
        spinBox->setObjectName(QStringLiteral("spinBox"));

        verticalLayout->addWidget(spinBox);

        label_5 = new QLabel(modifyfieldwindow);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout->addWidget(label_5);

        comboBox_2 = new QComboBox(modifyfieldwindow);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));

        verticalLayout->addWidget(comboBox_2);

        radioButton = new QRadioButton(modifyfieldwindow);
        radioButton->setObjectName(QStringLiteral("radioButton"));

        verticalLayout->addWidget(radioButton);

        pushButton = new QPushButton(modifyfieldwindow);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);


        retranslateUi(modifyfieldwindow);

        QMetaObject::connectSlotsByName(modifyfieldwindow);
    } // setupUi

    void retranslateUi(QWidget *modifyfieldwindow)
    {
        modifyfieldwindow->setWindowTitle(QApplication::translate("modifyfieldwindow", "Form", nullptr));
        label->setText(QApplication::translate("modifyfieldwindow", "Modificar Campos", nullptr));
        label_2->setText(QApplication::translate("modifyfieldwindow", "Elegir campo:", nullptr));
        label_3->setText(QApplication::translate("modifyfieldwindow", "Nombre:", nullptr));
        label_4->setText(QApplication::translate("modifyfieldwindow", "Tama\303\261o:", nullptr));
        label_5->setText(QApplication::translate("modifyfieldwindow", "Tipo:", nullptr));
        comboBox_2->setItemText(0, QApplication::translate("modifyfieldwindow", "Entero", nullptr));
        comboBox_2->setItemText(1, QApplication::translate("modifyfieldwindow", "Caracter", nullptr));
        comboBox_2->setItemText(2, QApplication::translate("modifyfieldwindow", "Cadena de caracteres", nullptr));

        radioButton->setText(QApplication::translate("modifyfieldwindow", "Es llave primaria", nullptr));
        pushButton->setText(QApplication::translate("modifyfieldwindow", "Aplicar cambios", nullptr));
    } // retranslateUi

};

namespace Ui {
    class modifyfieldwindow: public Ui_modifyfieldwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYFIELDWINDOW_H
