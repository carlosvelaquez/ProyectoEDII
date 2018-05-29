/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
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
    QTableWidget *tableWidget;
    QLabel *label;
    QLabel *label_2;
    QListWidget *listWidget;
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
        MainWindow->resize(843, 465);
        MainWindow->setStyleSheet(QStringLiteral(""));
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
        tableWidget = new QTableWidget(centralwidget);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(15, 61, 621, 371));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 161, 31));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(650, 6, 111, 41));
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(650, 60, 181, 371));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 843, 22));
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
        menuRegistros->addAction(actionListar_Registros);
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
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "File Manager", 0));
        actionNuevo_Archivo->setText(QApplication::translate("MainWindow", "Nuevo Archivo", 0));
        actionGuardar_Archivo->setText(QApplication::translate("MainWindow", "Salvar Archivo", 0));
        actionCerrar_Archivo->setText(QApplication::translate("MainWindow", "Cerrar Archivo", 0));
        actionSalir->setText(QApplication::translate("MainWindow", "Salir", 0));
        actionA_adir_Persona->setText(QApplication::translate("MainWindow", "A\303\261adir Persona", 0));
        actionEliminar_Persona->setText(QApplication::translate("MainWindow", "Eliminar Persona", 0));
        actionCrear_Campos->setText(QApplication::translate("MainWindow", "Crear Campos", 0));
        actionListar_Campos->setText(QApplication::translate("MainWindow", "Listar Campos", 0));
        actionModificar_Campos->setText(QApplication::translate("MainWindow", "Modificar Campos", 0));
        actionEliminar_Campos->setText(QApplication::translate("MainWindow", "Eliminar Campos", 0));
        actionIntroducir_Registros->setText(QApplication::translate("MainWindow", "Introducir Registros", 0));
        actionBuscar_Registros->setText(QApplication::translate("MainWindow", "Buscar Registros", 0));
        actionModificar_Registros->setText(QApplication::translate("MainWindow", "Modificar Registros", 0));
        actionBorrar_Registros->setText(QApplication::translate("MainWindow", "Borrar Registros", 0));
        actionListar_Registros->setText(QApplication::translate("MainWindow", "Listar Registros", 0));
        actionCrear_Indices->setText(QApplication::translate("MainWindow", "Crear \303\215ndices", 0));
        actionReindexar_Archivos->setText(QApplication::translate("MainWindow", "Re-indexar Archivos", 0));
        actionExportar_a_Excel->setText(QApplication::translate("MainWindow", "Exportar a Excel", 0));
        actionExportar_a_XML_con_Schem->setText(QApplication::translate("MainWindow", "Exportar a XML con Schema", 0));
        actionCargar_Archivo->setText(QApplication::translate("MainWindow", "Cargar Archivo", 0));
        label->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        label_2->setText(QApplication::translate("MainWindow", "Avail List", 0));
        menuArchivo->setTitle(QApplication::translate("MainWindow", "Archivo", 0));
        menuRegistros->setTitle(QApplication::translate("MainWindow", "Registros", 0));
        menuCampos->setTitle(QApplication::translate("MainWindow", "Campos", 0));
        menu_ndices->setTitle(QApplication::translate("MainWindow", "\303\215ndices", 0));
        menuEstadarizaci_n->setTitle(QApplication::translate("MainWindow", "Estandarizaci\303\263n", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
