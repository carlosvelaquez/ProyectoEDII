/********************************************************************************
** Form generated from reading UI file 'deletefieldwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETEFIELDWINDOW_H
#define UI_DELETEFIELDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_deletefieldwindow
{
public:
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QComboBox *comboBox_deletefield;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_delete;
    QFrame *frame_3;
    QLabel *label_3;

    void setupUi(QWidget *deletefieldwindow)
    {
        if (deletefieldwindow->objectName().isEmpty())
            deletefieldwindow->setObjectName(QStringLiteral("deletefieldwindow"));
        deletefieldwindow->resize(340, 111);
        deletefieldwindow->setStyleSheet(QLatin1String("QWidget{\n"
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
        frame = new QFrame(deletefieldwindow);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(10, 60, 321, 41));
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

        comboBox_deletefield = new QComboBox(frame);
        comboBox_deletefield->setObjectName(QStringLiteral("comboBox_deletefield"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comboBox_deletefield->sizePolicy().hasHeightForWidth());
        comboBox_deletefield->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(comboBox_deletefield);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_delete = new QPushButton(frame);
        pushButton_delete->setObjectName(QStringLiteral("pushButton_delete"));
        sizePolicy.setHeightForWidth(pushButton_delete->sizePolicy().hasHeightForWidth());
        pushButton_delete->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(pushButton_delete);

        frame_3 = new QFrame(deletefieldwindow);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setGeometry(QRect(0, 0, 341, 51));
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

        retranslateUi(deletefieldwindow);

        QMetaObject::connectSlotsByName(deletefieldwindow);
    } // setupUi

    void retranslateUi(QWidget *deletefieldwindow)
    {
        deletefieldwindow->setWindowTitle(QApplication::translate("deletefieldwindow", "Form", nullptr));
        label_2->setText(QApplication::translate("deletefieldwindow", "\302\277Que campo eliminar\303\241?", nullptr));
        pushButton_delete->setText(QApplication::translate("deletefieldwindow", "Eliminar", nullptr));
        label_3->setText(QApplication::translate("deletefieldwindow", "Eliminar Campo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class deletefieldwindow: public Ui_deletefieldwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETEFIELDWINDOW_H
