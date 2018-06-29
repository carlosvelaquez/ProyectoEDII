/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNuevo_Archivo;
    QAction *actionGuardar_Archivo;
    QAction *actionCerrar_Archivo;
    QAction *actionSalir;
    QAction *actionA_adir_Persona;
    QAction *actionEliminar_Persona;
    QAction *actionCrear_Campos;
    QAction *actionListar_Campos;
    QAction *actionModificar_Campos;
    QAction *actionEliminar_Campos;
    QAction *actionIntroducir_Registros;
    QAction *actionBuscar_Registros;
    QAction *actionModificar_Registros;
    QAction *actionBorrar_Registros;
    QAction *actionListar_Registros;
    QAction *actionCrear_Indices;
    QAction *actionReindexar_Archivos;
    QAction *actionExportar_a_Excel;
    QAction *actionExportar_a_XML_con_Schem;
    QAction *actionCargar_Archivo;
    QWidget *centralwidget;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_atras;
    QLabel *label_pagina;
    QPushButton *pushButton_adelante;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_adelante_2;
    QSpinBox *spinBox;
    QTableWidget *tableWidget;
    QFrame *frame_3;
    QLabel *label;
    QFrame *frame_4;
    QLabel *label_ruta;
    QMenuBar *menubar;
    QMenu *menuArchivo;
    QMenu *menuRegistros;
    QMenu *menuCampos;
    QMenu *menu_ndices;
    QMenu *menuEstadarizaci_n;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(641, 512);
        MainWindow->setStyleSheet(QLatin1String("QWidget{\n"
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
        actionNuevo_Archivo = new QAction(MainWindow);
        actionNuevo_Archivo->setObjectName(QStringLiteral("actionNuevo_Archivo"));
        actionGuardar_Archivo = new QAction(MainWindow);
        actionGuardar_Archivo->setObjectName(QStringLiteral("actionGuardar_Archivo"));
        actionCerrar_Archivo = new QAction(MainWindow);
        actionCerrar_Archivo->setObjectName(QStringLiteral("actionCerrar_Archivo"));
        actionSalir = new QAction(MainWindow);
        actionSalir->setObjectName(QStringLiteral("actionSalir"));
        actionA_adir_Persona = new QAction(MainWindow);
        actionA_adir_Persona->setObjectName(QStringLiteral("actionA_adir_Persona"));
        actionEliminar_Persona = new QAction(MainWindow);
        actionEliminar_Persona->setObjectName(QStringLiteral("actionEliminar_Persona"));
        actionCrear_Campos = new QAction(MainWindow);
        actionCrear_Campos->setObjectName(QStringLiteral("actionCrear_Campos"));
        actionListar_Campos = new QAction(MainWindow);
        actionListar_Campos->setObjectName(QStringLiteral("actionListar_Campos"));
        actionModificar_Campos = new QAction(MainWindow);
        actionModificar_Campos->setObjectName(QStringLiteral("actionModificar_Campos"));
        actionEliminar_Campos = new QAction(MainWindow);
        actionEliminar_Campos->setObjectName(QStringLiteral("actionEliminar_Campos"));
        actionIntroducir_Registros = new QAction(MainWindow);
        actionIntroducir_Registros->setObjectName(QStringLiteral("actionIntroducir_Registros"));
        actionBuscar_Registros = new QAction(MainWindow);
        actionBuscar_Registros->setObjectName(QStringLiteral("actionBuscar_Registros"));
        actionModificar_Registros = new QAction(MainWindow);
        actionModificar_Registros->setObjectName(QStringLiteral("actionModificar_Registros"));
        actionBorrar_Registros = new QAction(MainWindow);
        actionBorrar_Registros->setObjectName(QStringLiteral("actionBorrar_Registros"));
        actionListar_Registros = new QAction(MainWindow);
        actionListar_Registros->setObjectName(QStringLiteral("actionListar_Registros"));
        actionCrear_Indices = new QAction(MainWindow);
        actionCrear_Indices->setObjectName(QStringLiteral("actionCrear_Indices"));
        actionReindexar_Archivos = new QAction(MainWindow);
        actionReindexar_Archivos->setObjectName(QStringLiteral("actionReindexar_Archivos"));
        actionExportar_a_Excel = new QAction(MainWindow);
        actionExportar_a_Excel->setObjectName(QStringLiteral("actionExportar_a_Excel"));
        actionExportar_a_XML_con_Schem = new QAction(MainWindow);
        actionExportar_a_XML_con_Schem->setObjectName(QStringLiteral("actionExportar_a_XML_con_Schem"));
        actionCargar_Archivo = new QAction(MainWindow);
        actionCargar_Archivo->setObjectName(QStringLiteral("actionCargar_Archivo"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(290, 440, 171, 41));
        frame->setStyleSheet(QLatin1String("QFrame{\n"
"	border: 1px solid #E0E0E0;\n"
"	border-radius: 5px;\n"
"	background-color: white;\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton_atras = new QPushButton(frame);
        pushButton_atras->setObjectName(QStringLiteral("pushButton_atras"));

        horizontalLayout->addWidget(pushButton_atras);

        label_pagina = new QLabel(frame);
        label_pagina->setObjectName(QStringLiteral("label_pagina"));
        label_pagina->setStyleSheet(QLatin1String("QFrame{\n"
"	border: 0px;\n"
"}"));
        label_pagina->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_pagina);

        pushButton_adelante = new QPushButton(frame);
        pushButton_adelante->setObjectName(QStringLiteral("pushButton_adelante"));

        horizontalLayout->addWidget(pushButton_adelante);

        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(470, 440, 161, 41));
        frame_2->setStyleSheet(QLatin1String("QFrame{\n"
"	border: 1px solid #E0E0E0;\n"
"	border-radius: 5px;\n"
"	background-color: white;\n"
"}"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButton_adelante_2 = new QPushButton(frame_2);
        pushButton_adelante_2->setObjectName(QStringLiteral("pushButton_adelante_2"));

        horizontalLayout_2->addWidget(pushButton_adelante_2);

        spinBox = new QSpinBox(frame_2);
        spinBox->setObjectName(QStringLiteral("spinBox"));

        horizontalLayout_2->addWidget(spinBox);

        tableWidget = new QTableWidget(centralwidget);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(10, 80, 621, 351));
        tableWidget->setStyleSheet(QLatin1String("QFrame{\n"
"	border: 1px solid #E0E0E0;\n"
"	border-radius: 5px;\n"
"	background-color: white;\n"
"}\n"
"\n"
"color: black;"));
        tableWidget->setFrameShape(QFrame::NoFrame);
        tableWidget->setFrameShadow(QFrame::Plain);
        tableWidget->setLineWidth(1);
        frame_3 = new QFrame(centralwidget);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setGeometry(QRect(0, 0, 641, 61));
        frame_3->setStyleSheet(QLatin1String("background-color:#3F51B5;\n"
"color: white;"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame_3);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 0, 331, 51));
        QFont font;
        font.setFamily(QStringLiteral("Montserrat"));
        font.setPointSize(24);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        frame_4 = new QFrame(centralwidget);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        frame_4->setGeometry(QRect(10, 440, 261, 41));
        frame_4->setStyleSheet(QLatin1String("QFrame{\n"
"	border: 1px solid #E0E0E0;\n"
"	border-radius: 5px;\n"
"	background-color: white;\n"
"}"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        label_ruta = new QLabel(frame_4);
        label_ruta->setObjectName(QStringLiteral("label_ruta"));
        label_ruta->setGeometry(QRect(10, 5, 241, 31));
        label_ruta->setStyleSheet(QLatin1String("QFrame{\n"
"	border: 0px;\n"
"}"));
        label_ruta->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 641, 21));
        menubar->setStyleSheet(QLatin1String("background-color: #283593;\n"
"color: white;"));
        menuArchivo = new QMenu(menubar);
        menuArchivo->setObjectName(QStringLiteral("menuArchivo"));
        menuRegistros = new QMenu(menubar);
        menuRegistros->setObjectName(QStringLiteral("menuRegistros"));
        menuCampos = new QMenu(menubar);
        menuCampos->setObjectName(QStringLiteral("menuCampos"));
        menu_ndices = new QMenu(menubar);
        menu_ndices->setObjectName(QStringLiteral("menu_ndices"));
        menuEstadarizaci_n = new QMenu(menubar);
        menuEstadarizaci_n->setObjectName(QStringLiteral("menuEstadarizaci_n"));
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menuArchivo->menuAction());
        menubar->addAction(menuCampos->menuAction());
        menubar->addAction(menuRegistros->menuAction());
        menubar->addAction(menu_ndices->menuAction());
        menubar->addAction(menuEstadarizaci_n->menuAction());
        menuArchivo->addAction(actionNuevo_Archivo);
        menuArchivo->addAction(actionGuardar_Archivo);
        menuArchivo->addAction(actionCargar_Archivo);
        menuArchivo->addAction(actionCerrar_Archivo);
        menuArchivo->addSeparator();
        menuRegistros->addAction(actionIntroducir_Registros);
        menuRegistros->addAction(actionModificar_Registros);
        menuRegistros->addAction(actionBuscar_Registros);
        menuRegistros->addAction(actionBorrar_Registros);
        menuCampos->addAction(actionCrear_Campos);
        menuCampos->addAction(actionListar_Campos);
        menuCampos->addAction(actionModificar_Campos);
        menuCampos->addAction(actionEliminar_Campos);
        menu_ndices->addAction(actionCrear_Indices);
        menu_ndices->addAction(actionReindexar_Archivos);
        menuEstadarizaci_n->addAction(actionExportar_a_Excel);
        menuEstadarizaci_n->addAction(actionExportar_a_XML_con_Schem);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "File Manager", nullptr));
        actionNuevo_Archivo->setText(QApplication::translate("MainWindow", "Nuevo Archivo", nullptr));
        actionGuardar_Archivo->setText(QApplication::translate("MainWindow", "Salvar Archivo", nullptr));
        actionCerrar_Archivo->setText(QApplication::translate("MainWindow", "Cerrar Archivo", nullptr));
        actionSalir->setText(QApplication::translate("MainWindow", "Salir", nullptr));
        actionA_adir_Persona->setText(QApplication::translate("MainWindow", "A\303\261adir Persona", nullptr));
        actionEliminar_Persona->setText(QApplication::translate("MainWindow", "Eliminar Persona", nullptr));
        actionCrear_Campos->setText(QApplication::translate("MainWindow", "Crear Campos", nullptr));
        actionListar_Campos->setText(QApplication::translate("MainWindow", "Listar Campos", nullptr));
        actionModificar_Campos->setText(QApplication::translate("MainWindow", "Modificar Campos", nullptr));
        actionEliminar_Campos->setText(QApplication::translate("MainWindow", "Eliminar Campos", nullptr));
        actionIntroducir_Registros->setText(QApplication::translate("MainWindow", "Introducir Registros", nullptr));
        actionBuscar_Registros->setText(QApplication::translate("MainWindow", "Buscar Registros", nullptr));
        actionModificar_Registros->setText(QApplication::translate("MainWindow", "Modificar Registros", nullptr));
        actionBorrar_Registros->setText(QApplication::translate("MainWindow", "Borrar Registros", nullptr));
        actionListar_Registros->setText(QApplication::translate("MainWindow", "Listar Registros", nullptr));
        actionCrear_Indices->setText(QApplication::translate("MainWindow", "Crear \303\215ndices", nullptr));
        actionReindexar_Archivos->setText(QApplication::translate("MainWindow", "Re-indexar Archivos", nullptr));
        actionExportar_a_Excel->setText(QApplication::translate("MainWindow", "Exportar a Excel", nullptr));
        actionExportar_a_XML_con_Schem->setText(QApplication::translate("MainWindow", "Exportar a XML con Schema", nullptr));
        actionCargar_Archivo->setText(QApplication::translate("MainWindow", "Cargar Archivo", nullptr));
        pushButton_atras->setText(QApplication::translate("MainWindow", "<<", nullptr));
        label_pagina->setText(QApplication::translate("MainWindow", "x de x", nullptr));
        pushButton_adelante->setText(QApplication::translate("MainWindow", ">>", nullptr));
        pushButton_adelante_2->setText(QApplication::translate("MainWindow", "Ir a P\303\241gina", nullptr));
        label->setText(QApplication::translate("MainWindow", "File Manager", nullptr));
        label_ruta->setText(QApplication::translate("MainWindow", "No se ha cargado un archivo.", nullptr));
        menuArchivo->setTitle(QApplication::translate("MainWindow", "Archivo", nullptr));
        menuRegistros->setTitle(QApplication::translate("MainWindow", "Registros", nullptr));
        menuCampos->setTitle(QApplication::translate("MainWindow", "Campos", nullptr));
        menu_ndices->setTitle(QApplication::translate("MainWindow", "\303\215ndices", nullptr));
        menuEstadarizaci_n->setTitle(QApplication::translate("MainWindow", "Estandarizaci\303\263n", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
