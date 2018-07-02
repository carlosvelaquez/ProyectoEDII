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
    QFrame *frame_3;
    QLabel *label_4;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *lineEdit_name;
    QLabel *label_2;
    QSpinBox *spinBox_size;
    QLabel *label_3;
    QComboBox *comboBox_type;
    QSpacerItem *verticalSpacer_3;
    QRadioButton *radioButton_ispk;
    QPushButton *pushButton_addfield;

    void setupUi(QWidget *addfieldwindow)
    {
        if (addfieldwindow->objectName().isEmpty())
            addfieldwindow->setObjectName(QStringLiteral("addfieldwindow"));
        addfieldwindow->resize(240, 300);
        addfieldwindow->setStyleSheet(QLatin1String("QWidget{\n"
"	background-color: #F5F5F5;\n"
"}\n"
"\n"
"\n"
"QPushButton{\n"
"	background-color: #3F51B5;\n"
"	color: white;\n"
"	border-radius: 5px;\n"
"	border-width: 5px;\n"
"	border-style: solid;\n"
"	border-color: #3F51B5;\n"
"}"));
        frame_3 = new QFrame(addfieldwindow);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setGeometry(QRect(0, 0, 241, 51));
        frame_3->setStyleSheet(QLatin1String("background-color:#3F51B5;\n"
"color: white;"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        label_4 = new QLabel(frame_3);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 0, 221, 51));
        QFont font;
        font.setFamily(QStringLiteral("Montserrat"));
        font.setPointSize(18);
        font.setBold(true);
        font.setWeight(75);
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignCenter);
        frame = new QFrame(addfieldwindow);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(10, 60, 221, 231));
        frame->setStyleSheet(QLatin1String("QFrame{\n"
"	border: 1px solid #E0E0E0;\n"
"	border-radius: 5px;\n"
"	background-color: white;\n"
"}\n"
"\n"
"QLabel{\n"
"	border: 0px;\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        lineEdit_name = new QLineEdit(frame);
        lineEdit_name->setObjectName(QStringLiteral("lineEdit_name"));

        verticalLayout->addWidget(lineEdit_name);

        label_2 = new QLabel(frame);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        spinBox_size = new QSpinBox(frame);
        spinBox_size->setObjectName(QStringLiteral("spinBox_size"));

        verticalLayout->addWidget(spinBox_size);

        label_3 = new QLabel(frame);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        comboBox_type = new QComboBox(frame);
        comboBox_type->setObjectName(QStringLiteral("comboBox_type"));

        verticalLayout->addWidget(comboBox_type);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout->addItem(verticalSpacer_3);

        radioButton_ispk = new QRadioButton(frame);
        radioButton_ispk->setObjectName(QStringLiteral("radioButton_ispk"));

        verticalLayout->addWidget(radioButton_ispk);

        pushButton_addfield = new QPushButton(frame);
        pushButton_addfield->setObjectName(QStringLiteral("pushButton_addfield"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_addfield->sizePolicy().hasHeightForWidth());
        pushButton_addfield->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(pushButton_addfield);


        retranslateUi(addfieldwindow);

        QMetaObject::connectSlotsByName(addfieldwindow);
    } // setupUi

    void retranslateUi(QWidget *addfieldwindow)
    {
        addfieldwindow->setWindowTitle(QApplication::translate("addfieldwindow", "Form", nullptr));
        label_4->setText(QApplication::translate("addfieldwindow", "A\303\261adir Campos", nullptr));
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
