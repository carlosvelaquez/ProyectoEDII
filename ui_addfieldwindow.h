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
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
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
        addfieldwindow->resize(341, 310);
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

        frame = new QFrame(addfieldwindow);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_2->addWidget(label);

        lineEdit_name = new QLineEdit(frame);
        lineEdit_name->setObjectName(QStringLiteral("lineEdit_name"));

        verticalLayout_2->addWidget(lineEdit_name);

        verticalSpacer = new QSpacerItem(20, 1, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        label_2 = new QLabel(frame);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);

        spinBox_size = new QSpinBox(frame);
        spinBox_size->setObjectName(QStringLiteral("spinBox_size"));

        verticalLayout_2->addWidget(spinBox_size);

        verticalSpacer_2 = new QSpacerItem(20, 2, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        label_3 = new QLabel(frame);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_2->addWidget(label_3);

        comboBox_type = new QComboBox(frame);
        comboBox_type->setObjectName(QStringLiteral("comboBox_type"));

        verticalLayout_2->addWidget(comboBox_type);

        radioButton_ispk = new QRadioButton(frame);
        radioButton_ispk->setObjectName(QStringLiteral("radioButton_ispk"));

        verticalLayout_2->addWidget(radioButton_ispk);

        pushButton_addfield = new QPushButton(frame);
        pushButton_addfield->setObjectName(QStringLiteral("pushButton_addfield"));

        verticalLayout_2->addWidget(pushButton_addfield);


        verticalLayout->addWidget(frame);


        retranslateUi(addfieldwindow);

        QMetaObject::connectSlotsByName(addfieldwindow);
    } // setupUi

    void retranslateUi(QWidget *addfieldwindow)
    {
        addfieldwindow->setWindowTitle(QApplication::translate("addfieldwindow", "Form", 0));
        label_4->setText(QApplication::translate("addfieldwindow", "  A\303\261adir campos", 0));
        label->setText(QApplication::translate("addfieldwindow", "Nombre:", 0));
        label_2->setText(QApplication::translate("addfieldwindow", "Tama\303\261o:", 0));
        label_3->setText(QApplication::translate("addfieldwindow", "Tipo de dato:", 0));
        radioButton_ispk->setText(QApplication::translate("addfieldwindow", "Es llave primaria", 0));
        pushButton_addfield->setText(QApplication::translate("addfieldwindow", "A\303\261adir campo", 0));
    } // retranslateUi

};

namespace Ui {
    class addfieldwindow: public Ui_addfieldwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDFIELDWINDOW_H
