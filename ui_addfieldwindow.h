/********************************************************************************
** Form generated from reading UI file 'addfieldwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDFIELDWINDOW_H
#define UI_ADDFIELDWINDOW_H

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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addfieldwindow
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_4;
    QLabel *label;
    QLineEdit *lineEdit_name;
    QSpacerItem *verticalSpacer;
    QLabel *label_2;
    QSpinBox *spinBox_size;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_3;
    QComboBox *comboBox_type;
    QRadioButton *radioButton_ispk;
    QPushButton *pushButton_addfield;

    void setupUi(QWidget *addfieldwindow)
    {
        if (addfieldwindow->objectName().isEmpty())
            addfieldwindow->setObjectName(QStringLiteral("addfieldwindow"));
        addfieldwindow->resize(287, 287);
        addfieldwindow->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        verticalLayout = new QVBoxLayout(addfieldwindow);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_4 = new QLabel(addfieldwindow);
        label_4->setObjectName(QStringLiteral("label_4"));
        QFont font;
        font.setFamily(QStringLiteral("FreeSans"));
        font.setPointSize(24);
        font.setBold(true);
        font.setWeight(75);
        label_4->setFont(font);
        label_4->setStyleSheet(QLatin1String("background-color:#3F51B5;\n"
"color: white;"));

        verticalLayout->addWidget(label_4);

        label = new QLabel(addfieldwindow);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        lineEdit_name = new QLineEdit(addfieldwindow);
        lineEdit_name->setObjectName(QStringLiteral("lineEdit_name"));

        verticalLayout->addWidget(lineEdit_name);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        label_2 = new QLabel(addfieldwindow);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        spinBox_size = new QSpinBox(addfieldwindow);
        spinBox_size->setObjectName(QStringLiteral("spinBox_size"));

        verticalLayout->addWidget(spinBox_size);

        verticalSpacer_2 = new QSpacerItem(20, 1, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        label_3 = new QLabel(addfieldwindow);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        comboBox_type = new QComboBox(addfieldwindow);
        comboBox_type->setObjectName(QStringLiteral("comboBox_type"));

        verticalLayout->addWidget(comboBox_type);

        radioButton_ispk = new QRadioButton(addfieldwindow);
        radioButton_ispk->setObjectName(QStringLiteral("radioButton_ispk"));

        verticalLayout->addWidget(radioButton_ispk);

        pushButton_addfield = new QPushButton(addfieldwindow);
        pushButton_addfield->setObjectName(QStringLiteral("pushButton_addfield"));

        verticalLayout->addWidget(pushButton_addfield);


        retranslateUi(addfieldwindow);

        QMetaObject::connectSlotsByName(addfieldwindow);
    } // setupUi

    void retranslateUi(QWidget *addfieldwindow)
    {
        addfieldwindow->setWindowTitle(QApplication::translate("addfieldwindow", "Form", nullptr));
        label_4->setText(QApplication::translate("addfieldwindow", "  A\303\261adir campos", nullptr));
        label->setText(QApplication::translate("addfieldwindow", "Nombre:", nullptr));
        label_2->setText(QApplication::translate("addfieldwindow", "Tama\303\261o:", nullptr));
        label_3->setText(QApplication::translate("addfieldwindow", "Tipo de dato:", nullptr));
        radioButton_ispk->setText(QApplication::translate("addfieldwindow", "Es llave primaria", nullptr));
        pushButton_addfield->setText(QApplication::translate("addfieldwindow", "A\303\261adir campo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addfieldwindow: public Ui_addfieldwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDFIELDWINDOW_H
