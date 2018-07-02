/********************************************************************************
** Form generated from reading UI file 'addrecordwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDRECORDWINDOW_H
#define UI_ADDRECORDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addRecordWindow
{
public:
    QTableWidget *tableWidget;
    QFrame *frame_3;
    QLabel *label_3;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_send;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;

    void setupUi(QWidget *addRecordWindow)
    {
        if (addRecordWindow->objectName().isEmpty())
            addRecordWindow->setObjectName(QStringLiteral("addRecordWindow"));
        addRecordWindow->resize(730, 440);
        addRecordWindow->setStyleSheet(QLatin1String("QWidget{\n"
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
        tableWidget = new QTableWidget(addRecordWindow);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(10, 60, 711, 321));
        tableWidget->setStyleSheet(QLatin1String("QFrame{\n"
"	border: 1px solid #E0E0E0;\n"
"	border-radius: 5px;\n"
"	background-color: white;\n"
"}\n"
"\n"
"QLabel{\n"
"	border: 0px;\n"
"}"));
        tableWidget->setRowCount(0);
        tableWidget->setColumnCount(4);
        tableWidget->horizontalHeader()->setDefaultSectionSize(151);
        tableWidget->horizontalHeader()->setMinimumSectionSize(20);
        frame_3 = new QFrame(addRecordWindow);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setGeometry(QRect(0, 0, 731, 51));
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
        frame = new QFrame(addRecordWindow);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(590, 390, 131, 41));
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
        pushButton_send = new QPushButton(frame);
        pushButton_send->setObjectName(QStringLiteral("pushButton_send"));

        horizontalLayout->addWidget(pushButton_send);

        frame_2 = new QFrame(addRecordWindow);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(10, 390, 401, 41));
        frame_2->setStyleSheet(QLatin1String("QFrame{\n"
"	border: 1px solid #E0E0E0;\n"
"	border-radius: 5px;\n"
"	background-color: white;\n"
"}\n"
"\n"
"QLabel{\n"
"	border: 0px;\n"
"}"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(frame_2);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);


        retranslateUi(addRecordWindow);

        QMetaObject::connectSlotsByName(addRecordWindow);
    } // setupUi

    void retranslateUi(QWidget *addRecordWindow)
    {
        addRecordWindow->setWindowTitle(QApplication::translate("addRecordWindow", "Form", nullptr));
        label_3->setText(QApplication::translate("addRecordWindow", "A\303\261adir Registros", nullptr));
        pushButton_send->setText(QApplication::translate("addRecordWindow", "A\303\261adir Registro", nullptr));
        label->setText(QApplication::translate("addRecordWindow", "Llene la cuarta columna de la tabla con los valores que desea para cada campo.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addRecordWindow: public Ui_addRecordWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDRECORDWINDOW_H
