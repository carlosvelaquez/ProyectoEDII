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
#include <QtWidgets/QSpacerItem>
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
    QAction *actionGenerar_Registros_de_Prueba;
    QAction *actionSalir_del_Programa;
    QAction *actionCruzar_Archivos;
    QWidget *centralwidget;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_atras;
    QLabel *label_pagina;
    QPushButton *pushButton_adelante;
    QFrame *frame_2;
    QPushButton *pushButton_adelante_2;
    QSpinBox *spinBox;
    QTableWidget *tableWidget;
    QFrame *frame_3;
    QLabel *label;
    QFrame *frame_4;
    QLabel *label_ruta;
    QFrame *frame_5;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_refresh;
    QFrame *frame_Bienvenida;
    QLabel *label_2;
    QLabel *label_3;
    QFrame *frame_6;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_bNuevo;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_bCargar;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_4;
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
        MainWindow->resize(730, 512);
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
        actionGenerar_Registros_de_Prueba = new QAction(MainWindow);
        actionGenerar_Registros_de_Prueba->setObjectName(QStringLiteral("actionGenerar_Registros_de_Prueba"));
        actionSalir_del_Programa = new QAction(MainWindow);
        actionSalir_del_Programa->setObjectName(QStringLiteral("actionSalir_del_Programa"));
        actionCruzar_Archivos = new QAction(MainWindow);
        actionCruzar_Archivos->setObjectName(QStringLiteral("actionCruzar_Archivos"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(200, 440, 171, 41));
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
        frame_2->setGeometry(QRect(380, 440, 161, 41));
        frame_2->setStyleSheet(QLatin1String("QFrame{\n"
"	border: 1px solid #E0E0E0;\n"
"	border-radius: 5px;\n"
"	background-color: white;\n"
"}"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        pushButton_adelante_2 = new QPushButton(frame_2);
        pushButton_adelante_2->setObjectName(QStringLiteral("pushButton_adelante_2"));
        pushButton_adelante_2->setGeometry(QRect(10, 10, 81, 21));
        spinBox = new QSpinBox(frame_2);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(104, 10, 51, 20));
        spinBox->setMaximum(999999);
        tableWidget = new QTableWidget(centralwidget);
        if (tableWidget->columnCount() < 1)
            tableWidget->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(10, 80, 711, 351));
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
        tableWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        tableWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableWidget->setShowGrid(true);
        tableWidget->setWordWrap(false);
        tableWidget->setCornerButtonEnabled(true);
        tableWidget->horizontalHeader()->setStretchLastSection(true);
        tableWidget->verticalHeader()->setStretchLastSection(false);
        frame_3 = new QFrame(centralwidget);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setGeometry(QRect(0, 0, 731, 61));
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
        frame_4->setGeometry(QRect(10, 440, 161, 41));
        frame_4->setStyleSheet(QLatin1String("QFrame{\n"
"	border: 1px solid #E0E0E0;\n"
"	border-radius: 5px;\n"
"	background-color: white;\n"
"}"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        label_ruta = new QLabel(frame_4);
        label_ruta->setObjectName(QStringLiteral("label_ruta"));
        label_ruta->setGeometry(QRect(10, 5, 141, 31));
        label_ruta->setStyleSheet(QLatin1String("QFrame{\n"
"	border: 0px;\n"
"}"));
        label_ruta->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        frame_5 = new QFrame(centralwidget);
        frame_5->setObjectName(QStringLiteral("frame_5"));
        frame_5->setGeometry(QRect(560, 440, 161, 41));
        frame_5->setStyleSheet(QLatin1String("QFrame{\n"
"	border: 1px solid #E0E0E0;\n"
"	border-radius: 5px;\n"
"	background-color: white;\n"
"}"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_5);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButton_refresh = new QPushButton(frame_5);
        pushButton_refresh->setObjectName(QStringLiteral("pushButton_refresh"));
        pushButton_refresh->setStyleSheet(QStringLiteral(""));

        horizontalLayout_2->addWidget(pushButton_refresh);

        frame_Bienvenida = new QFrame(centralwidget);
        frame_Bienvenida->setObjectName(QStringLiteral("frame_Bienvenida"));
        frame_Bienvenida->setGeometry(QRect(10, 70, 711, 361));
        frame_Bienvenida->setStyleSheet(QLatin1String("QFrame{\n"
"	border: 1px solid #E0E0E0;\n"
"	border-radius: 5px;\n"
"	background-color: white;\n"
"}\n"
"\n"
"QLabel{\n"
"	border: 0px;\n"
"}"));
        frame_Bienvenida->setFrameShape(QFrame::StyledPanel);
        frame_Bienvenida->setFrameShadow(QFrame::Raised);
        label_2 = new QLabel(frame_Bienvenida);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 80, 691, 51));
        QFont font1;
        font1.setFamily(QStringLiteral("Open Sans"));
        font1.setPointSize(26);
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);
        label_2->setStyleSheet(QStringLiteral(""));
        label_2->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(frame_Bienvenida);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 130, 691, 41));
        QFont font2;
        font2.setFamily(QStringLiteral("Open Sans"));
        font2.setPointSize(20);
        font2.setBold(false);
        font2.setWeight(50);
        label_3->setFont(font2);
        label_3->setAlignment(Qt::AlignCenter);
        frame_6 = new QFrame(frame_Bienvenida);
        frame_6->setObjectName(QStringLiteral("frame_6"));
        frame_6->setGeometry(QRect(10, 190, 691, 61));
        frame_6->setStyleSheet(QLatin1String("QFrame{\n"
"	border: 0px;\n"
"}"));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame_6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        pushButton_bNuevo = new QPushButton(frame_6);
        pushButton_bNuevo->setObjectName(QStringLiteral("pushButton_bNuevo"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_bNuevo->sizePolicy().hasHeightForWidth());
        pushButton_bNuevo->setSizePolicy(sizePolicy);
        QFont font3;
        font3.setFamily(QStringLiteral("Segoe UI"));
        font3.setPointSize(14);
        pushButton_bNuevo->setFont(font3);

        horizontalLayout_3->addWidget(pushButton_bNuevo);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        pushButton_bCargar = new QPushButton(frame_6);
        pushButton_bCargar->setObjectName(QStringLiteral("pushButton_bCargar"));
        sizePolicy.setHeightForWidth(pushButton_bCargar->sizePolicy().hasHeightForWidth());
        pushButton_bCargar->setSizePolicy(sizePolicy);
        pushButton_bCargar->setFont(font3);

        horizontalLayout_3->addWidget(pushButton_bCargar);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        label_4 = new QLabel(frame_Bienvenida);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 330, 691, 16));
        label_4->setStyleSheet(QStringLiteral("color: #757575"));
        label_4->setAlignment(Qt::AlignCenter);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 730, 21));
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
        menuArchivo->addAction(actionCruzar_Archivos);
        menuArchivo->addAction(actionGenerar_Registros_de_Prueba);
        menuArchivo->addSeparator();
        menuArchivo->addAction(actionSalir_del_Programa);
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
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Sota File Manager", nullptr));
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
        actionExportar_a_Excel->setText(QApplication::translate("MainWindow", "Exportar a Excel (CSV)", nullptr));
        actionExportar_a_XML_con_Schem->setText(QApplication::translate("MainWindow", "Exportar a XML con Schema", nullptr));
        actionCargar_Archivo->setText(QApplication::translate("MainWindow", "Cargar Archivo", nullptr));
        actionGenerar_Registros_de_Prueba->setText(QApplication::translate("MainWindow", "Generar Registros de Prueba", nullptr));
        actionSalir_del_Programa->setText(QApplication::translate("MainWindow", "Salir del Programa", nullptr));
        actionCruzar_Archivos->setText(QApplication::translate("MainWindow", "Cruzar Archivos", nullptr));
        pushButton_atras->setText(QApplication::translate("MainWindow", "<<", nullptr));
        label_pagina->setText(QApplication::translate("MainWindow", "-", nullptr));
        pushButton_adelante->setText(QApplication::translate("MainWindow", ">>", nullptr));
        pushButton_adelante_2->setText(QApplication::translate("MainWindow", "Ir a P\303\241gina", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "No se ha cargado un archivo. Puede crear uno en Archivo > Nuevo Archivo.", nullptr));
        label->setText(QApplication::translate("MainWindow", "Sota File Manager", nullptr));
        label_ruta->setText(QApplication::translate("MainWindow", "No se ha cargado un archivo.", nullptr));
        pushButton_refresh->setText(QApplication::translate("MainWindow", "Refrescar Tabla", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Bienvenido a Sota\342\204\242", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "\302\277Como desea empezar?", nullptr));
        pushButton_bNuevo->setText(QApplication::translate("MainWindow", "Crear un Archivo Nuevo", nullptr));
        pushButton_bCargar->setText(QApplication::translate("MainWindow", "Cargar un Archivo Existente", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "\302\251 Sota Inc., 2018 - Todos los derechos reservados.", nullptr));
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
