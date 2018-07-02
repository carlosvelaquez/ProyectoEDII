#include "MainWindow.h"
#include "qfiledialog.h"
#include "addrecordwindow.h"
#include "addfieldwindow.h"
#include "listfieldswindow.h"
#include "deletefieldwindow.h"
#include "modifyfieldwindow.h"
#include "deleterecordwindow.h"
#include "linkedfileswindow.h"

#include <QMessageBox>

MainWindow::MainWindow(QWidget* parent) : QMainWindow(parent){
  ui.setupUi(this);

  refreshMenuBar(); // Actualiza las Menu Bar

  QHeaderView* header = ui.tableWidget->horizontalHeader();
  header->setSectionResizeMode(QHeaderView::Stretch);
  ui.tableWidget->setEnabled(false);

  //setWindowFlags(Qt::FramelessWindowHint);

  // Archivo
  connect(ui.actionNuevo_Archivo, SIGNAL(triggered()), this, SLOT(openFile()));
  connect(ui.pushButton_bNuevo, SIGNAL(clicked()), this, SLOT(openFile()));
  connect(ui.actionCargar_Archivo, SIGNAL(triggered()), this, SLOT(loadFile()));
  connect(ui.pushButton_bCargar, SIGNAL(clicked()), this, SLOT(loadFile()));
  connect(ui.actionGuardar_Archivo, SIGNAL(triggered()), this, SLOT(saveFile()));
  connect(ui.actionCerrar_Archivo, SIGNAL(triggered()), this, SLOT(closeFile()));
  connect(ui.actionSalir_del_Programa, SIGNAL(triggered()), this, SLOT(exit()));
  connect(ui.actionCruzar_Archivos, SIGNAL(triggered()), this, SLOT(joinFiles()));

  //Campos
  connect(ui.actionCrear_Campos, SIGNAL(triggered()), this, SLOT(addFields()));
  connect(ui.actionListar_Campos, SIGNAL(triggered()), this, SLOT(listfields()));
  connect(ui.actionEliminar_Campos, SIGNAL(triggered()), this, SLOT(deleteFields()));
  connect(ui.actionModificar_Campos, SIGNAL(triggered()), this, SLOT(modifyFields()));

  //Registros
  connect(ui.actionIntroducir_Registros, SIGNAL(triggered()), this, SLOT(addRecord()));
  connect(ui.actionBorrar_Registros, SIGNAL(triggered()), this, SLOT(deleteRecords()));
  connect(ui.actionBuscar_Registros, SIGNAL(triggered()), this, SLOT(findRecords()));


  //Mover entre páginas
  connect(ui.pushButton_adelante, SIGNAL(clicked()), this, SLOT(nextPage()));
  connect(ui.pushButton_atras, SIGNAL(clicked()), this, SLOT(previousPage()));
  connect(ui.pushButton_adelante_2, SIGNAL(clicked()), this, SLOT(gotoPage()));

  //Generar registros de prueba
  connect(ui.actionGenerar_Registros_de_Prueba, SIGNAL(triggered()), this, SLOT(generateTest()));

  //Refrescar tabla
  connect(ui.pushButton_refresh, SIGNAL(clicked()), this, SLOT(refresh()));

  //Indexar
  connect(ui.actionCrear_Indices, SIGNAL(triggered()), this, SLOT(saveIndexFile()));

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
  deleteRecordWindow* dr = new deleteRecordWindow(0, &file);
  dr->show();
  reseek = true;
}

void MainWindow::findRecords(){
  if (file.hasPrimaryKey()) {
    bool exists;
    string path = string(file.getPath() + ".index");
    ifstream infile(path);

    if (!infile.good()) {
      ofstream outfile(path);
      outfile.close();
      exists = false;
    }else{
      exists = true;
    }

    if (exists) {
      FindRecordWindow* w = new FindRecordWindow(0, &file);
      w->show();
    }else{
      QMessageBox::warning(this,"Error","No se ha encontrado archivo de índice.");
    }

  }else{
    QMessageBox::warning(this,"Error","El archivo no tiene una llave primaria.");
  }
}
/*##########################################*/


/*##########################################*/
void MainWindow::addFields(){
  addfieldwindow* adf = new addfieldwindow();
  adf->setFile(&file);
  adf->show();
  reseek = true;
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
  file.close();
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

void MainWindow::joinFiles(){
    if(file == true){
        if(file.getFields().size!=0){
            linkedFilesWindow* lf = new linkedFilesWindow();
            lf->setFile(&file);
            lf->refreshTable();
            lf->show();
        }else{
            QMessageBox::warning(this,"","No hay suficientes campos añadidos");
        }
    }else{
        QMessageBox::about(this,"","No hay archivo cargado");
    }
}


void MainWindow::refreshTable(){
  if (file) {
    qDebug() << "Refreshing table...";

    if (file.outSize() > 0 || reseek) {
      qDebug() << "Flushing and re-seeking before refreshing table.";
      file.flush();
      file.reseek();
      reseek = false;
    }

    ui.frame_Bienvenida->hide();

    //Dimensionar la tabla de acuerdo a los campos y registros de file
    ui.tableWidget->setColumnCount(file.fieldQuantity()); //Añade la cantidad de columnas de acuerdo a la cantidad de campos
    //ui.tableWidget->setRowCount(file.blockSize());// Cantidad de records de cada bloque

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

        if (records.size <= 0) {
          ui.tableWidget->setRowCount(1);
        }else{
          ui.tableWidget->setRowCount(records.size);
        }

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
          ui.tableWidget->setRowCount(1);
          ui.tableWidget->setItem(0, 0, new QTableWidgetItem("No hay registros. Puede añadir registros en Registros > Introducir Registros"));
        }
      }else{
        qDebug() << "File not locked.";
        ui.tableWidget->setRowCount(1);
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
  string genPath;
  NameGenerator nameGen;
  nameGen.load();


  // Generar PersonFile

  genPath = "PersonFile.txt";
  remove(genPath.c_str());
  file.close();
  file.open(genPath);
  ui.label_ruta->setText(genPath.c_str());

  qDebug() << "Adding test fields for " << genPath.c_str();

  file.addField(0, "PersonId", 6);
  file.addField(2, "PersonName", 20, true);
  file.addField(0, "PersonAge", 3);
  file.addField(0, "CityId", 3);

  qDebug() << "Test fields added.";

  file.lock();

  qDebug() << "Adding records for " << genPath.c_str();
  for (int i = 1; i <= 10000; i++) {
    List<string> nRecord;

    nRecord.insert(to_string(i));
    nRecord.insert(nameGen.generate(1));
    nRecord.insert(to_string(rand() % 110 + 1));
    nRecord.insert(to_string(rand() % 100));

    file.addRecord(nRecord);

    if (i%file.getBlockSize() == 0) {
      file.flush();
    }
  }

  qDebug() << "Test file " << genPath.c_str() << " created successfully.";


  // Generar CityFile

  genPath = "CityFile.txt";
  remove(genPath.c_str());
  file.close();
  file.open(genPath);
  ui.label_ruta->setText(genPath.c_str());

  qDebug() << "Adding test fields for " << genPath.c_str();

  file.addField(0, "CityId", 2);
  file.addField(2, "CityName", 20);

  qDebug() << "Test fields added.";

  file.lock();

  qDebug() << "Adding records for " << genPath.c_str();
  for (int i = 1; i <= 10000; i++) {
    List<string> nRecord;

    nRecord.insert(to_string(rand() % 100));
    nRecord.insert(nameGen.generate(2));

    file.addRecord(nRecord);

    if (i%file.getBlockSize() == 0) {
      file.flush();
    }
  }

  qDebug() << "Test file " << genPath.c_str() << " created successfully.";
  nameGen.unload();
  file.close();
}

void MainWindow::saveIndexFile(){
  file.buildIndex();
  file.saveIndex();
}

void MainWindow::exportCSV(){
  QString path = QFileDialog::getSaveFileName(this, "Exportar a CSV", QDir::currentPath(), tr("CSV Files (*.csv)"));
  file.exportCSV(path.toStdString());
}

void MainWindow::exportXML(){
  QString path = QFileDialog::getSaveFileName(this, "Exportar a XML con Schema", QDir::currentPath(), tr("XML Files (*.xml)"));
  file.exportXML(path.toStdString());
}

void MainWindow::refresh(){
  refreshTable();
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
