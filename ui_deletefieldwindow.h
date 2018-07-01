/********************************************************************************
** Form generated from reading UI file 'deletefieldwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_deletefieldwindow
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QComboBox *comboBox_deletefield;
    QPushButton *pushButton_delete;

    void setupUi(QWidget *deletefieldwindow)
    {
        if (deletefieldwindow->objectName().isEmpty())
            deletefieldwindow->setObjectName(QStringLiteral("deletefieldwindow"));
        deletefieldwindow->resize(330, 159);
        deletefieldwindow->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        verticalLayout_2 = new QVBoxLayout(deletefieldwindow);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label = new QLabel(deletefieldwindow);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QStringLiteral("FreeSans"));
        font.setPointSize(24);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QLatin1String("background-color:#3F51B5;\n"
"color: white;"));

        verticalLayout_2->addWidget(label);

        frame = new QFrame(deletefieldwindow);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        comboBox_deletefield = new QComboBox(frame);
        comboBox_deletefield->setObjectName(QStringLiteral("comboBox_deletefield"));

        verticalLayout->addWidget(comboBox_deletefield);

        pushButton_delete = new QPushButton(frame);
        pushButton_delete->setObjectName(QStringLiteral("pushButton_delete"));

        verticalLayout->addWidget(pushButton_delete);


        verticalLayout_2->addWidget(frame);


        retranslateUi(deletefieldwindow);

        QMetaObject::connectSlotsByName(deletefieldwindow);
    } // setupUi

    void retranslateUi(QWidget *deletefieldwindow)
    {
        deletefieldwindow->setWindowTitle(QApplication::translate("deletefieldwindow", "Form", 0));
        label->setText(QApplication::translate("deletefieldwindow", "Eliminar Campo", 0));
        label_2->setText(QApplication::translate("deletefieldwindow", "Elija campo:", 0));
        pushButton_delete->setText(QApplication::translate("deletefieldwindow", "Eliminar", 0));
    } // retranslateUi

};

namespace Ui {
    class deletefieldwindow: public Ui_deletefieldwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETEFIELDWINDOW_H
