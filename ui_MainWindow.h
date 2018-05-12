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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNuevo_Archivo;
    QAction *actionSalvar_Archivo;
    QAction *actionCerrar_Archivo;
    QAction *actionSalir;
    QAction *actionCrear_Campos;
    QAction *actionListar_Campos;
    QAction *actionModificar_Campos;
    QAction *actionEliminar_Campos;
    QAction *actionIntroducir_Registros;
    QAction *actionModificar_Registros;
    QAction *actionBuscar_Registros;
    QAction *actionBorrar_Registros;
    QAction *actionListar_Registros;
    QAction *actionCrearIndices;
    QAction *actionReindexar_Archivos;
    QAction *actionExportar_a_Excel;
    QAction *actionExportar_a_XML_con_Schema;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menuArchivo;
    QMenu *menuCampos;
    QMenu *menuRegistros;
    QMenu *menuIndices;
    QMenu *menuEstandarizacion;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(812, 618);
        actionNuevo_Archivo = new QAction(MainWindow);
        actionNuevo_Archivo->setObjectName(QStringLiteral("actionNuevo_Archivo"));
        actionSalvar_Archivo = new QAction(MainWindow);
        actionSalvar_Archivo->setObjectName(QStringLiteral("actionSalvar_Archivo"));
        actionCerrar_Archivo = new QAction(MainWindow);
        actionCerrar_Archivo->setObjectName(QStringLiteral("actionCerrar_Archivo"));
        actionSalir = new QAction(MainWindow);
        actionSalir->setObjectName(QStringLiteral("actionSalir"));
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
        actionModificar_Registros = new QAction(MainWindow);
        actionModificar_Registros->setObjectName(QStringLiteral("actionModificar_Registros"));
        actionBuscar_Registros = new QAction(MainWindow);
        actionBuscar_Registros->setObjectName(QStringLiteral("actionBuscar_Registros"));
        actionBorrar_Registros = new QAction(MainWindow);
        actionBorrar_Registros->setObjectName(QStringLiteral("actionBorrar_Registros"));
        actionListar_Registros = new QAction(MainWindow);
        actionListar_Registros->setObjectName(QStringLiteral("actionListar_Registros"));
        actionCrearIndices = new QAction(MainWindow);
        actionCrearIndices->setObjectName(QStringLiteral("actionCrearIndices"));
        actionReindexar_Archivos = new QAction(MainWindow);
        actionReindexar_Archivos->setObjectName(QStringLiteral("actionReindexar_Archivos"));
        actionExportar_a_Excel = new QAction(MainWindow);
        actionExportar_a_Excel->setObjectName(QStringLiteral("actionExportar_a_Excel"));
        actionExportar_a_XML_con_Schema = new QAction(MainWindow);
        actionExportar_a_XML_con_Schema->setObjectName(QStringLiteral("actionExportar_a_XML_con_Schema"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 812, 20));
        menuArchivo = new QMenu(menubar);
        menuArchivo->setObjectName(QStringLiteral("menuArchivo"));
        menuCampos = new QMenu(menubar);
        menuCampos->setObjectName(QStringLiteral("menuCampos"));
        menuRegistros = new QMenu(menubar);
        menuRegistros->setObjectName(QStringLiteral("menuRegistros"));
        menuIndices = new QMenu(menubar);
        menuIndices->setObjectName(QStringLiteral("menuIndices"));
        menuEstandarizacion = new QMenu(menubar);
        menuEstandarizacion->setObjectName(QStringLiteral("menuEstandarizacion"));
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menuArchivo->menuAction());
        menubar->addAction(menuCampos->menuAction());
        menubar->addAction(menuRegistros->menuAction());
        menubar->addAction(menuIndices->menuAction());
        menubar->addAction(menuEstandarizacion->menuAction());
        menuArchivo->addAction(actionNuevo_Archivo);
        menuArchivo->addAction(actionSalvar_Archivo);
        menuArchivo->addAction(actionCerrar_Archivo);
        menuArchivo->addSeparator();
        menuArchivo->addAction(actionSalir);
        menuCampos->addAction(actionCrear_Campos);
        menuCampos->addAction(actionListar_Campos);
        menuCampos->addAction(actionModificar_Campos);
        menuCampos->addAction(actionEliminar_Campos);
        menuRegistros->addAction(actionIntroducir_Registros);
        menuRegistros->addAction(actionModificar_Registros);
        menuRegistros->addAction(actionBuscar_Registros);
        menuRegistros->addAction(actionBorrar_Registros);
        menuRegistros->addAction(actionListar_Registros);
        menuIndices->addAction(actionCrearIndices);
        menuIndices->addAction(actionReindexar_Archivos);
        menuEstandarizacion->addAction(actionExportar_a_Excel);
        menuEstandarizacion->addAction(actionExportar_a_XML_con_Schema);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "File Manager", nullptr));
        actionNuevo_Archivo->setText(QApplication::translate("MainWindow", "Nuevo Archivo", nullptr));
        actionSalvar_Archivo->setText(QApplication::translate("MainWindow", "Salvar Archivo", nullptr));
        actionCerrar_Archivo->setText(QApplication::translate("MainWindow", "Cerrar Archivo", nullptr));
        actionSalir->setText(QApplication::translate("MainWindow", "Salir", nullptr));
        actionCrear_Campos->setText(QApplication::translate("MainWindow", "Crear Campos", nullptr));
        actionListar_Campos->setText(QApplication::translate("MainWindow", "Listar Campos", nullptr));
        actionModificar_Campos->setText(QApplication::translate("MainWindow", "Modificar Campos", nullptr));
        actionEliminar_Campos->setText(QApplication::translate("MainWindow", "Borrar Campos", nullptr));
        actionIntroducir_Registros->setText(QApplication::translate("MainWindow", "Introducir Registros", nullptr));
        actionModificar_Registros->setText(QApplication::translate("MainWindow", "Modificar Registros", nullptr));
        actionBuscar_Registros->setText(QApplication::translate("MainWindow", "Buscar Registros", nullptr));
        actionBorrar_Registros->setText(QApplication::translate("MainWindow", "Borrar Registros", nullptr));
        actionListar_Registros->setText(QApplication::translate("MainWindow", "Listar Registros", nullptr));
        actionCrearIndices->setText(QApplication::translate("MainWindow", "Crear \303\255ndices", nullptr));
        actionReindexar_Archivos->setText(QApplication::translate("MainWindow", "Re-indexar Archivos", nullptr));
        actionExportar_a_Excel->setText(QApplication::translate("MainWindow", "Exportar a Excel", nullptr));
        actionExportar_a_XML_con_Schema->setText(QApplication::translate("MainWindow", "Exportar a XML con Schema", nullptr));
        menuArchivo->setTitle(QApplication::translate("MainWindow", "Archivo", nullptr));
        menuCampos->setTitle(QApplication::translate("MainWindow", "Campos", nullptr));
        menuRegistros->setTitle(QApplication::translate("MainWindow", "Registros", nullptr));
        menuIndices->setTitle(QApplication::translate("MainWindow", "\303\215ndices", nullptr));
        menuEstandarizacion->setTitle(QApplication::translate("MainWindow", "Estandarizaci\303\263n", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
