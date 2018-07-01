/********************************************************************************
** Form generated from reading UI file 'deleterecordwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETERECORDWINDOW_H
#define UI_DELETERECORDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_deleteRecordWIndow
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTableWidget *tableWidget;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QSpinBox *spinBox;
    QPushButton *pushButton_2;
    QLabel *label_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton;

    void setupUi(QWidget *deleteRecordWIndow)
    {
        if (deleteRecordWIndow->objectName().isEmpty())
            deleteRecordWIndow->setObjectName(QStringLiteral("deleteRecordWIndow"));
        deleteRecordWIndow->resize(665, 469);
        deleteRecordWIndow->setStyleSheet(QStringLiteral("background-color: white;"));
        verticalLayout = new QVBoxLayout(deleteRecordWIndow);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(deleteRecordWIndow);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QStringLiteral("FreeSans"));
        font.setPointSize(24);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QLatin1String("background-color:#3F51B5;\n"
"color: white;"));

        verticalLayout->addWidget(label);

        tableWidget = new QTableWidget(deleteRecordWIndow);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        verticalLayout->addWidget(tableWidget);

        frame = new QFrame(deleteRecordWIndow);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        spinBox = new QSpinBox(frame);
        spinBox->setObjectName(QStringLiteral("spinBox"));

        horizontalLayout->addWidget(spinBox);

        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        label_2 = new QLabel(frame);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        pushButton_3 = new QPushButton(frame);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        horizontalLayout->addWidget(pushButton_3);


        verticalLayout->addWidget(frame);

        pushButton = new QPushButton(deleteRecordWIndow);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);


        retranslateUi(deleteRecordWIndow);

        QMetaObject::connectSlotsByName(deleteRecordWIndow);
    } // setupUi

    void retranslateUi(QWidget *deleteRecordWIndow)
    {
        deleteRecordWIndow->setWindowTitle(QApplication::translate("deleteRecordWIndow", "Form", 0));
        label->setText(QApplication::translate("deleteRecordWIndow", "Eliminar Registros", 0));
        label_3->setText(QApplication::translate("deleteRecordWIndow", "Ingrese numero:", 0));
        pushButton_2->setText(QApplication::translate("deleteRecordWIndow", "<<", 0));
        label_2->setText(QString());
        pushButton_3->setText(QApplication::translate("deleteRecordWIndow", ">>", 0));
        pushButton->setText(QApplication::translate("deleteRecordWIndow", "Eliminar registro", 0));
    } // retranslateUi

};

namespace Ui {
    class deleteRecordWIndow: public Ui_deleteRecordWIndow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETERECORDWINDOW_H
