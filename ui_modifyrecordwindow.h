/********************************************************************************
** Form generated from reading UI file 'modifyrecordwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYRECORDWINDOW_H
#define UI_MODIFYRECORDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_modifyrecordwindow
{
public:
    QTableWidget *tableWidget;
    QFrame *frame_3;
    QLabel *label_3;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QSpinBox *spinBox;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_2;
    QPushButton *pushButton;

    void setupUi(QWidget *modifyrecordwindow)
    {
        if (modifyrecordwindow->objectName().isEmpty())
            modifyrecordwindow->setObjectName(QStringLiteral("modifyrecordwindow"));
        modifyrecordwindow->resize(551, 201);
        modifyrecordwindow->setStyleSheet(QLatin1String("QWidget{\n"
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
        tableWidget = new QTableWidget(modifyrecordwindow);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(10, 60, 531, 81));
        tableWidget->setStyleSheet(QLatin1String("QFrame{\n"
"	border: 1px solid #E0E0E0;\n"
"	border-radius: 5px;\n"
"	background-color: white;\n"
"}\n"
"\n"
"QLabel{\n"
"	border: 0px;\n"
"}"));
        tableWidget->horizontalHeader()->setStretchLastSection(true);
        tableWidget->verticalHeader()->setStretchLastSection(true);
        frame_3 = new QFrame(modifyrecordwindow);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setGeometry(QRect(0, 0, 551, 51));
        frame_3->setStyleSheet(QLatin1String("background-color:#3F51B5;\n"
"color: white;"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        label_3 = new QLabel(frame_3);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 0, 241, 51));
        QFont font;
        font.setFamily(QStringLiteral("Montserrat"));
        font.setPointSize(18);
        font.setBold(true);
        font.setWeight(75);
        label_3->setFont(font);
        frame = new QFrame(modifyrecordwindow);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(240, 150, 301, 41));
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
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        spinBox = new QSpinBox(frame);
        spinBox->setObjectName(QStringLiteral("spinBox"));

        horizontalLayout->addWidget(spinBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);


        retranslateUi(modifyrecordwindow);

        QMetaObject::connectSlotsByName(modifyrecordwindow);
    } // setupUi

    void retranslateUi(QWidget *modifyrecordwindow)
    {
        modifyrecordwindow->setWindowTitle(QApplication::translate("modifyrecordwindow", "Form", nullptr));
        label_3->setText(QApplication::translate("modifyrecordwindow", "Modificar Registro", nullptr));
        label_2->setText(QApplication::translate("modifyrecordwindow", "\303\215ndice del registro: ", nullptr));
        pushButton_2->setText(QApplication::translate("modifyrecordwindow", "Cargar", nullptr));
        pushButton->setText(QApplication::translate("modifyrecordwindow", "Modificar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class modifyrecordwindow: public Ui_modifyrecordwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYRECORDWINDOW_H
