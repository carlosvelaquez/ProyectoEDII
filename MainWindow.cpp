#include "MainWindow.h"
#include "qfiledialog.h"
#include "addrecordwindow.h"
#include "addfieldwindow.h"
#include "listfieldswindow.h"
#include "deletefieldwindow.h"
#include "modifyfieldwindow.h"
//#include "deleterecordwindow.h"

MainWindow::MainWindow(QWidget* parent) : QMainWindow(parent){
  ui.setupUi(this);

  refreshMenuBar(); // Actualiza las Menu Bar

  QHeaderView* header = ui.tableWidget->horizontalHeader();
  header->setSectionResizeMode(QHeaderView::Stretch);
  ui.tableWidget->setEnabled(false);

  //setWindowFlags(Qt::FramelessWindowHint);

  // Nuevo archivo
  connect(ui.actionNuevo_Archivo, SIGNAL(triggered()), this, SLOT(openFile()));
  connect(ui.pushButton_bNuevo, SIGNAL(clicked()), this, SLOT(openFile()));

  // Cargar archivo
  connect(ui.actionCargar_Archivo, SIGNAL(triggered()), this, SLOT(loadFile()));
  connect(ui.pushButton_bCargar, SIGNAL(clicked()), this, SLOT(loadFile()));

  // Salvar archivo
  connect(ui.actionGuardar_Archivo, SIGNAL(triggered()), this, SLOT(saveFile()));

  // Cerrar archivo
  connect(ui.actionCerrar_Archivo, SIGNAL(triggered()), this, SLOT(closeFile()));

  //Salir del Programa
  connect(ui.actionSalir_del_Programa, SIGNAL(triggered()), this, SLOT(exit()));

  // Añadir campos
  connect(ui.actionCrear_Campos, SIGNAL(triggered()), this, SLOT(addFields()));

  // Listar campos
  connect(ui.actionListar_Campos, SIGNAL(triggered()), this, SLOT(listfields()));

  // Eliminar campos
  connect(ui.actionEliminar_Campos, SIGNAL(triggered()), this, SLOT(deleteFields()));
  // Modificar campos
  connect(ui.actionModificar_Campos, SIGNAL(triggered()), this, SLOT(modifyFields()));

  // Añadir registros
  connect(ui.actionIntroducir_Registros, SIGNAL(triggered()), this, SLOT(addRecord()));
  // ELiminar registros
  connect(ui.actionBorrar_Registros, SIGNAL(triggered()), this, SLOT(deleteRecords()));

  //Mover entre páginas
  connect(ui.pushButton_adelante, SIGNAL(clicked()), this, SLOT(nextPage()));
  connect(ui.pushButton_atras, SIGNAL(clicked()), this, SLOT(previousPage()));
  connect(ui.pushButton_adelante_2, SIGNAL(clicked()), this, SLOT(gotoPage()));

  //Generar registros de prueba
  connect(ui.actionGenerar_Registros_de_Prueba, SIGNAL(triggered()), this, SLOT(generateTest()));

  //Refrescar tabla
  connect(ui.pushButton_refresh, SIGNAL(clicked()), this, SLOT(refresh()));

  //Exportar
  connect(ui.actionExportar_a_Excel, SIGNAL(triggered()), this, SLOT(exportCSV()));
  connect(ui.actionExportar_a_XML_con_Schem, SIGNAL(triggered()), this, SLOT(exportXML()));
}

/*##########################################*/
void MainWindow::addRecord(){
    addRecordWindow* adw = new addRecordWindow();
    adw->setFile(&file);
    adw->fillTable();
    adw->show();
}

void MainWindow::deleteRecords(){
    /*deleteRecordWindow* dr = new deleteRecordWindow();
    dr->show();*/
}
/*##########################################*/


/*##########################################*/
void MainWindow::addFields(){
    addfieldwindow* adf = new addfieldwindow();
    adf->setFile(&file);
    adf->show();
}

void MainWindow::deleteFields(){
    deletefieldwindow* df = new deletefieldwindow();
    df->setFile(&file);
    df->fillComboBox();
    df->show();
}

void MainWindow::listfields(){
    listfieldswindow* lf = new listfieldswindow();
    lf->filltable(&file);
    lf->show();
}

void MainWindow::modifyFields(){
    modifyfieldwindow* md = new modifyfieldwindow();
    md->setFile(&file);
    md->fillWidgets();
    md->show();
}
/*##########################################*/

/*##########################################*/
File* MainWindow::getFile(){
    return &file;
}

void MainWindow::openFile(){
    QString path = QFileDialog::getSaveFileName(this, "Nuevo Archivo", QDir::currentPath(), tr("TXT Files (*.txt)"));

    if (!path.isEmpty() && !path.isNull()) {
      remove(path.toStdString().c_str());
      file.open(path.toStdString());
      ui.label_ruta->setText(path);
      refreshMenuBar();
      refreshTable();
    }else{
      qDebug() << "File path is empty or null. Aborting.";
    }
}

void MainWindow::closeFile(){
  if (file) {
    file.close(); //Cerrar el archivo

    //Borrar todos los datos en la pantalla
    ui.label_ruta->setText("Archivo cerrado.");
    ui.label_pagina->setText(" - ");
    ui.spinBox->setValue(0);

    ui.tableWidget->setColumnCount(1);
    ui.tableWidget->setRowCount(0);
    ui.tableWidget->setHorizontalHeaderItem(0, new QTableWidgetItem("Puede abrir o crear otro archivo en el menú Archivo."));
    ui.frame_Bienvenida->show();
    refreshMenuBar();
  }
}

void MainWindow::saveFile(){
  if (file) {
    qDebug() << "Salvando archivo...";
    file.lock();
    refreshMenuBar();
    file.flush();
  }
}

void MainWindow::loadFile(){
    QString path = QFileDialog::getOpenFileName(this, "Abrir Archivo", QDir::currentPath(), tr("TXT Files (*.txt)"));

    if (!path.isEmpty() && !path.isNull()) {
      if (file.open(path.toStdString())){

        file.lock();
        ui.label_ruta->setText(path);
        refreshTable();
        refreshMenuBar();
      }
    }else{
      qDebug() << "File path is empty or null. Aborting.";
    }
}

void MainWindow::refreshTable(){
  if (file) {
    qDebug() << "Refreshing table...";
    ui.frame_Bienvenida->hide();

    //Dimensionar la tabla de acuerdo a los campos y registros de file
    ui.tableWidget->setColumnCount(file.fieldQuantity()); //Añade la cantidad de columnas de acuerdo a la cantidad de campos
    ui.tableWidget->setRowCount(file.getBlockSize());// Cantidad de records de cada bloque

    //Poner los números en la tabla para que correspondan a los índices de los registros
    for (int i = 0; i < file.getBlockSize(); i++) {
      int indexLabel = ((file.getCurrentBlock() - 1)*file.getBlockSize()) + i + 1;
      ui.tableWidget->setVerticalHeaderItem(i, new QTableWidgetItem(to_string(indexLabel).c_str()));
    }

    //Poner los nombres de cada campo como cabeceras de columna
    List<Field> fields = file.getFields();

    if (fields.size > 0) {
      for (int i = 1; i <= fields.size; i++) {
        ui.tableWidget->setHorizontalHeaderItem(i-1, new QTableWidgetItem(QString::fromStdString(fields.get(i).getName())));
      }

      if (file.isLocked()) {
        //Extraer los registros del bloque actual de file
        List<List<string>> records = file.data();

        if (records.size > 0) { //Solo entra si existen registros
          for (int i = 1; i <= records.size; i++) {
            for (int j = 1; j <= fields.size; j++) {
              if (records[i][1][0] == '*') {
                ui.tableWidget->setItem(i-1, j-1, new QTableWidgetItem("-----"));
              }else{
                ui.tableWidget->setItem(i-1, j-1, new QTableWidgetItem(records[i][j].c_str()));
              }
            }
          }

          //Actualizar la label y el spinBox de página
          QString pag = "";
          pag += to_string(file.getCurrentBlock()).c_str();
          pag += " de ";
          pag += to_string(file.blockQuantity()).c_str();
          ui.label_pagina->setText(pag);
          ui.spinBox->setValue(file.getCurrentBlock());
          ui.spinBox->setMaximum(file.blockQuantity());

        }else{ //Si no hay registros, que lo indique en el GUI
          qDebug() << "No records in data()";
          ui.tableWidget->setItem(0, 0, new QTableWidgetItem("No hay registros. Puede añadir registros en Registros > Introducir Registros"));
        }
      }else{
        qDebug() << "File not locked.";
        ui.tableWidget->setItem(0, 0, new QTableWidgetItem("Salve el archivo en Archivo > Salvar Archivo para poder añadir registros."));
      }
    }else{
      ui.tableWidget->setColumnCount(1);
      ui.tableWidget->setRowCount(0);
      ui.tableWidget->setHorizontalHeaderItem(0, new QTableWidgetItem("Puede empezar añadiendo campos en Campos > Crear Campos"));
    }
  }else{
    qDebug() << "Refresh failed. File not loaded.";
  }
}


void MainWindow::nextPage(){
    if(file.next()){
        refreshTable();
    }
}

void MainWindow::previousPage(){
    if(file.previous()){
        refreshTable();
    }
}

void MainWindow::gotoPage(){
  if (file.seek(ui.spinBox->value())) {
    refreshTable();
  }
}

void MainWindow::generateTest(){
  QString path = QFileDialog::getSaveFileName(this, "Generar Registros de Prueba", QDir::currentPath(), tr("TXT Files (*.txt)"));

  if (!path.isEmpty() && !path.isNull()) {
    remove(path.toStdString().c_str());
    file.open(path.toStdString());
    ui.label_ruta->setText(path);

    qDebug() << "Adding test fields";
    /*for (int i = 1; i <= 5; i++) {
      string f = string("Field " + to_string(i));
      file.addField(2, f, 25);
      qDebug() << f.c_str() << " - Done";
    }*/

    file.addField(2, "Field1", 25);
    file.addField(2, "Field2", 25);
    file.addField(2, "Field3", 25);
    file.addField(2, "Field4", 25);
    file.addField(2, "Field5", 25);

    qDebug() << "Test fields added.";


    file.lock();

    for (int i = 1; i <= 10000; i++) {
      List<string> nRecord;

      for (int j = 1; j <= file.fieldQuantity(); j++) {
        string r = string("Record[" + to_string(i) + "][" + to_string(j) + "]");
        qDebug() << "Adding: " << r.c_str();

        nRecord.insert(r);
      }

      file.addRecord(nRecord);

      if (i%file.getBlockSize() == 0) {
        qDebug() << "i = " << i << ", flushing...";
        file.flush();
      }
    }

    refreshTable();
  }else{
    qDebug() << "File path is empty or null. Aborting.";
  }
}

void MainWindow::refresh(){
  refreshTable();
}

void MainWindow::exportCSV(){
  QString path = QFileDialog::getSaveFileName(this, "Exportar a CSV", QDir::currentPath(), tr("CSV Files (*.csv)"));
  file.exportCSV(path.toStdString());
}

void MainWindow::exportXML(){
  QString path = QFileDialog::getSaveFileName(this, "Exportar a XML con Schema", QDir::currentPath(), tr("XML Files (*.xml)"));
  file.exportXML(path.toStdString());
}

void MainWindow::exit(){
  close();
}

void MainWindow::refreshMenuBar(){
    if (!file){ // Si no hay un archivo cargado
        ui.menuCampos->setEnabled(false); //Bloquea campos
        ui.menuRegistros->setEnabled(false); //Bloquea Registros
        ui.menuEstadarizaci_n->setEnabled(false);  //Bloquea Estandarización
        ui.menu_ndices->setEnabled(false); //Bloquea Indicas
    }else{ // Si hay un archivo cargado
      if (!file.isLocked()){ // Si el archivo no esta bloqueado
          ui.menuCampos->setEnabled(true); // Desbloquea los campos
          ui.menuRegistros->setEnabled(false); //Bloquea Registros
          ui.menuEstadarizaci_n->setEnabled(false);  //Bloquea Estandarización
          ui.menu_ndices->setEnabled(false); //Bloquea Indicas
      }else{ // Si el archivo esta bloqueado
          ui.menuCampos->setEnabled(false); // Bloquea los campos
          ui.menuRegistros->setEnabled(true); //Bloquea Registros
          ui.menuEstadarizaci_n->setEnabled(true);  //Bloquea Estandarización
          ui.menu_ndices->setEnabled(true); //Bloquea Indicas
      }
    }


}
