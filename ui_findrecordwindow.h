/********************************************************************************
** Form generated from reading UI file 'findrecordwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINDRECORDWINDOW_H
#define UI_FINDRECORDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FindRecordWindow
{
public:
    QFrame *frame_3;
    QLabel *label_3;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;

    void setupUi(QWidget *FindRecordWindow)
    {
        if (FindRecordWindow->objectName().isEmpty())
            FindRecordWindow->setObjectName(QStringLiteral("FindRecordWindow"));
        FindRecordWindow->resize(386, 113);
        FindRecordWindow->setStyleSheet(QLatin1String("QWidget{\n"
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
        frame_3 = new QFrame(FindRecordWindow);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setGeometry(QRect(0, 0, 391, 51));
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
        frame = new QFrame(FindRecordWindow);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(10, 60, 361, 41));
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
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(pushButton);


        retranslateUi(FindRecordWindow);

        QMetaObject::connectSlotsByName(FindRecordWindow);
    } // setupUi

    void retranslateUi(QWidget *FindRecordWindow)
    {
        FindRecordWindow->setWindowTitle(QApplication::translate("FindRecordWindow", "Buscar Registros", nullptr));
        label_3->setText(QApplication::translate("FindRecordWindow", "Buscar Registros", nullptr));
        label->setText(QApplication::translate("FindRecordWindow", "Llave Primaria a Buscar:", nullptr));
        pushButton->setText(QApplication::translate("FindRecordWindow", "Buscar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FindRecordWindow: public Ui_FindRecordWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDRECORDWINDOW_H
