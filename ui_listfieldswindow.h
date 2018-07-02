/********************************************************************************
** Form generated from reading UI file 'listfieldswindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTFIELDSWINDOW_H
#define UI_LISTFIELDSWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_listfieldswindow
{
public:
    QTableWidget *tableWidget;
    QFrame *frame_3;
    QLabel *label_3;

    void setupUi(QWidget *listfieldswindow)
    {
        if (listfieldswindow->objectName().isEmpty())
            listfieldswindow->setObjectName(QStringLiteral("listfieldswindow"));
        listfieldswindow->resize(730, 430);
        listfieldswindow->setStyleSheet(QLatin1String("QWidget{\n"
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
        tableWidget = new QTableWidget(listfieldswindow);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(10, 60, 711, 361));
        tableWidget->setStyleSheet(QLatin1String("QFrame{\n"
"	border: 1px solid #E0E0E0;\n"
"	border-radius: 5px;\n"
"	background-color: white;\n"
"}\n"
"\n"
"QLabel{\n"
"	border: 0px;\n"
"}"));
        tableWidget->setDragDropOverwriteMode(false);
        tableWidget->setColumnCount(4);
        tableWidget->horizontalHeader()->setDefaultSectionSize(170);
        frame_3 = new QFrame(listfieldswindow);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setGeometry(QRect(0, 0, 741, 51));
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

        retranslateUi(listfieldswindow);

        QMetaObject::connectSlotsByName(listfieldswindow);
    } // setupUi

    void retranslateUi(QWidget *listfieldswindow)
    {
        listfieldswindow->setWindowTitle(QApplication::translate("listfieldswindow", "Form", nullptr));
        label_3->setText(QApplication::translate("listfieldswindow", "Lista de Campos", nullptr));
    } // retranslateUi

};

namespace Ui {
    class listfieldswindow: public Ui_listfieldswindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTFIELDSWINDOW_H
