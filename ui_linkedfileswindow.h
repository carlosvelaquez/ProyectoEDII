/********************************************************************************
** Form generated from reading UI file 'linkedfileswindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LINKEDFILESWINDOW_H
#define UI_LINKEDFILESWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_linkedFilesWindow
{
public:
    QFrame *frame_3;
    QLabel *label_4;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_find;
    QPushButton *pushButton_send;
    QFrame *frame;
    QLabel *label;

    void setupUi(QWidget *linkedFilesWindow)
    {
        if (linkedFilesWindow->objectName().isEmpty())
            linkedFilesWindow->setObjectName(QStringLiteral("linkedFilesWindow"));
        linkedFilesWindow->resize(550, 111);
        linkedFilesWindow->setStyleSheet(QLatin1String("QWidget{\n"
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
        frame_3 = new QFrame(linkedFilesWindow);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setGeometry(QRect(0, 0, 551, 51));
        frame_3->setStyleSheet(QLatin1String("background-color:#3F51B5;\n"
"color: white;"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        label_4 = new QLabel(frame_3);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 0, 241, 51));
        QFont font;
        font.setFamily(QStringLiteral("Montserrat"));
        font.setPointSize(18);
        font.setBold(true);
        font.setWeight(75);
        label_4->setFont(font);
        frame_2 = new QFrame(linkedFilesWindow);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(290, 60, 251, 43));
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
        horizontalLayout = new QHBoxLayout(frame_2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton_find = new QPushButton(frame_2);
        pushButton_find->setObjectName(QStringLiteral("pushButton_find"));

        horizontalLayout->addWidget(pushButton_find);

        pushButton_send = new QPushButton(frame_2);
        pushButton_send->setObjectName(QStringLiteral("pushButton_send"));

        horizontalLayout->addWidget(pushButton_send);

        frame = new QFrame(linkedFilesWindow);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(10, 60, 261, 41));
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
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 12, 241, 21));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        retranslateUi(linkedFilesWindow);

        QMetaObject::connectSlotsByName(linkedFilesWindow);
    } // setupUi

    void retranslateUi(QWidget *linkedFilesWindow)
    {
        linkedFilesWindow->setWindowTitle(QApplication::translate("linkedFilesWindow", "Form", nullptr));
        label_4->setText(QApplication::translate("linkedFilesWindow", "Cruzar Archivos", nullptr));
        pushButton_find->setText(QApplication::translate("linkedFilesWindow", "Buscar archivo...", nullptr));
        pushButton_send->setText(QApplication::translate("linkedFilesWindow", "Cruzar", nullptr));
        label->setText(QApplication::translate("linkedFilesWindow", "Presione \"Buscar Archivo...\" para empezar.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class linkedFilesWindow: public Ui_linkedFilesWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LINKEDFILESWINDOW_H
