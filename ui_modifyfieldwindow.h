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

class Ui_modifyfieldwindow
{
public:
    QFrame *frame_3;
    QLabel *label_6;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QComboBox *comboBox_campos;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLabel *label_4;
    QSpinBox *spinBox;
    QLabel *label_5;
    QComboBox *comboBox_2;
    QSpacerItem *verticalSpacer;
    QRadioButton *radioButton;
    QPushButton *pushButton;

    void setupUi(QWidget *modifyfieldwindow)
    {
        if (modifyfieldwindow->objectName().isEmpty())
            modifyfieldwindow->setObjectName(QStringLiteral("modifyfieldwindow"));
        modifyfieldwindow->resize(260, 370);
        modifyfieldwindow->setStyleSheet(QLatin1String("QWidget{\n"
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
        frame_3 = new QFrame(modifyfieldwindow);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setGeometry(QRect(0, 0, 261, 51));
        frame_3->setStyleSheet(QLatin1String("background-color:#3F51B5;\n"
"color: white;"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        label_6 = new QLabel(frame_3);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 0, 241, 51));
        QFont font;
        font.setFamily(QStringLiteral("Montserrat"));
        font.setPointSize(18);
        font.setBold(true);
        font.setWeight(75);
        label_6->setFont(font);
        label_6->setAlignment(Qt::AlignCenter);
        frame = new QFrame(modifyfieldwindow);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(10, 60, 241, 301));
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
        label_2 = new QLabel(frame);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        comboBox_campos = new QComboBox(frame);
        comboBox_campos->setObjectName(QStringLiteral("comboBox_campos"));

        verticalLayout->addWidget(comboBox_campos);

        label_3 = new QLabel(frame);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        verticalLayout->addWidget(lineEdit);

        label_4 = new QLabel(frame);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout->addWidget(label_4);

        spinBox = new QSpinBox(frame);
        spinBox->setObjectName(QStringLiteral("spinBox"));

        verticalLayout->addWidget(spinBox);

        label_5 = new QLabel(frame);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout->addWidget(label_5);

        comboBox_2 = new QComboBox(frame);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));

        verticalLayout->addWidget(comboBox_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout->addItem(verticalSpacer);

        radioButton = new QRadioButton(frame);
        radioButton->setObjectName(QStringLiteral("radioButton"));

        verticalLayout->addWidget(radioButton);

        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(pushButton);


        retranslateUi(modifyfieldwindow);

        QMetaObject::connectSlotsByName(modifyfieldwindow);
    } // setupUi

    void retranslateUi(QWidget *modifyfieldwindow)
    {
        modifyfieldwindow->setWindowTitle(QApplication::translate("modifyfieldwindow", "Form", nullptr));
        label_6->setText(QApplication::translate("modifyfieldwindow", "Modificar Campos", nullptr));
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
