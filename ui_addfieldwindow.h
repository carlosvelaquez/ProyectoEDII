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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addfieldwindow
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit_name;
    QSpinBox *spinBox_size;
    QLabel *label_3;
    QComboBox *comboBox_type;
    QRadioButton *radioButton_isPK;
    QPushButton *pushButton_addField;

    void setupUi(QWidget *addfieldwindow)
    {
        if (addfieldwindow->objectName().isEmpty())
            addfieldwindow->setObjectName(QStringLiteral("addfieldwindow"));
        addfieldwindow->resize(518, 311);
        verticalLayout = new QVBoxLayout(addfieldwindow);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        frame = new QFrame(addfieldwindow);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 40, 51, 21));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 80, 41, 21));
        lineEdit_name = new QLineEdit(frame);
        lineEdit_name->setObjectName(QStringLiteral("lineEdit_name"));
        lineEdit_name->setGeometry(QRect(130, 40, 351, 25));
        spinBox_size = new QSpinBox(frame);
        spinBox_size->setObjectName(QStringLiteral("spinBox_size"));
        spinBox_size->setGeometry(QRect(130, 80, 91, 26));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(50, 130, 41, 21));
        comboBox_type = new QComboBox(frame);
        comboBox_type->setObjectName(QStringLiteral("comboBox_type"));
        comboBox_type->setGeometry(QRect(130, 130, 72, 25));
        radioButton_isPK = new QRadioButton(frame);
        radioButton_isPK->setObjectName(QStringLiteral("radioButton_isPK"));
        radioButton_isPK->setGeometry(QRect(50, 170, 101, 23));
        pushButton_addField = new QPushButton(frame);
        pushButton_addField->setObjectName(QStringLiteral("pushButton_addField"));
        pushButton_addField->setGeometry(QRect(200, 230, 80, 25));

        verticalLayout->addWidget(frame);


        retranslateUi(addfieldwindow);

        QMetaObject::connectSlotsByName(addfieldwindow);
    } // setupUi

    void retranslateUi(QWidget *addfieldwindow)
    {
        addfieldwindow->setWindowTitle(QApplication::translate("addfieldwindow", "Form", 0));
        label->setText(QApplication::translate("addfieldwindow", "Name:", 0));
        label_2->setText(QApplication::translate("addfieldwindow", "Size:", 0));
        label_3->setText(QApplication::translate("addfieldwindow", "Type: ", 0));
        radioButton_isPK->setText(QApplication::translate("addfieldwindow", "Is Primary key", 0));
        pushButton_addField->setText(QApplication::translate("addfieldwindow", "Add field", 0));
    } // retranslateUi

};

namespace Ui {
    class addfieldwindow: public Ui_addfieldwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDFIELDWINDOW_H
