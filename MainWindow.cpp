#include "MainWindow.h"
#include "qfiledialog.h"
#include "addrecordwindow.h"
#include "addfieldwindow.h"
#include "listfieldswindow.h"
#include "deletefieldwindow.h"


MainWindow::MainWindow(QWidget* parent) : QMainWindow(parent){
  ui.setupUi(this);

  QHeaderView* header = ui.tableWidget->horizontalHeader();
  header->setSectionResizeMode(QHeaderView::Stretch);
  ui.tableWidget->setEnabled(false);
  // Cargar archivo
  connect(ui.actionCargar_Archivo, SIGNAL(triggered()), this, SLOT(loadFile()));
  // Cerrar archivo
  connect(ui.actionCargar_Archivo, SIGNAL(triggered()), this, SLOT(closeFile()));


  // Añadir campos
  connect(ui.actionCrear_Campos, SIGNAL(triggered()), this, SLOT(addFields()));
  // Listar campos
  connect(ui.actionListar_Campos, SIGNAL(triggered()), this, SLOT(listfields()));
  // Eliminar campos
  connect(ui.actionEliminar_Campos, SIGNAL(triggered()), this, SLOT(deleteFields()));

  // Añadir registros
  connect(ui.actionIntroducir_Registros, SIGNAL(triggered()), this, SLOT(addRecord()));

  //Mover entre páginas
  connect(ui.pushButton_adelante, SIGNAL(clicked()), this, SLOT(nextPage()));
  connect(ui.pushButton_atras, SIGNAL(clicked()), this, SLOT(previousPage()));
  connect(ui.pushButton_adelante_2, SIGNAL(clicked()), this, SLOT(gotoPage()));

}

/* ############# Para registros ############# */
void MainWindow::addRecord(){
    addRecordWindow* adw = new addRecordWindow();
    adw->setFile(&file);
    adw->fillTable();
    adw->show();
}

void MainWindow::deleteRecords(){
}
/*##########################################*/



/* ############# Para campos ############# */
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



/*##########################################*/


File* MainWindow::getFile(){
    return &file;
}


/*##########################################*/
void MainWindow::closeFile(){
  close();
}

void MainWindow::saveFile(){
  QString path = QFileDialog::getSaveFileName(this, "Abrir Archivo","/path/to/file/",tr("TXT Files (*.txt)"));
  file.open(path.toStdString());
  ui.label_ruta->setText(path);

  file.flush();
}

void MainWindow::loadFile(){
    QString path = QFileDialog::getOpenFileName(this, "Abrir Archivo","/path/to/file/",tr("TXT Files (*.txt)"));
    file.open(path.toStdString());
    file.lock();
    ui.label_ruta->setText(path);

    refreshTable();
}
/*##########################################*/

/*Test:

//file.setPath("lel.txt");

file.addField(0, "Indice", 5, false);
file.addField(2, "Nombre", 20, false);
file.addField(0, "Edad", 5, false);
file.addField(1, "Sexo", 10, false);
file.addField(2, "Dirección", 50, false);
file.lock();
qDebug() << "File locked";

List<string> data;

for (int j = 1; j <= 100; j++) {
  qDebug() << "Adding record " << j << "...";

  for (int i = 1; i <= file.fieldQuantity(); i++) {
    string ins = "";
    ins += "Data [";
    ins += to_string(j);
    ins += "][";
    ins += to_string(i);
    ins += "]";
    data.insert(ins);
  }

  qDebug() << "File addRecord: " << file.addRecord(data.clone());
  qDebug() << "Record Buffer size: "<<file.data().size;
  data.clear();

  if (j%10 == 0) {
    qDebug() << "j = " << j << ", flushing...";
    file.flush();
  }
}

file.seek(1);
qDebug()<<"Total Buffer Record Size: "<<file.data().size;
qDebug() << "Refreshing table...";

refreshTable();

file.deleteRecord(5);
qDebug() << "Refreshing table...";
refreshTable();
*/




void MainWindow::refreshTable(){
  ui.tableWidget->setColumnCount(file.fieldQuantity()); //Añade la cantidad de columnas de acuerdo a la cantidad de campos
  ui.tableWidget->setRowCount(10);// Cantidad de records de cada bloque

  List<Field> fields = file.getFields();
  List<List<string>> records = file.data();

  qDebug() << "First: " << records[1][1].c_str();
  qDebug() << "Last: " << records[1][5].c_str();

  for (int i = 1; i <= fields.size; i++) {
    ui.tableWidget->setHorizontalHeaderItem(i-1, new QTableWidgetItem(QString::fromStdString(fields.get(i).getName())));
  }

  qDebug()<< "Records en File: " << file.recordQuantity();


  for (int i = 1; i <= records.size; i++) { // Se supone que hay 100 records... Usar file.recordQuantity();
    for (int j = 1; j <= fields.size; j++) {
      if (records[i][1][0] == '*') {
        ui.tableWidget->setItem(i-1, j-1, new QTableWidgetItem("-----"));
      }else{
        ui.tableWidget->setItem(i-1, j-1, new QTableWidgetItem(records[i][j].c_str()));
      }
    }
  }

  QString pag = "";
  pag += to_string(file.getCurrentBlock()).c_str();
  pag += " de ";
  pag += to_string(file.blockQuantity()).c_str();
  ui.label_pagina->setText(pag);

  ui.spinBox->setValue(file.getCurrentBlock());
}



/*##########################################*/
void MainWindow::nextPage(){
  qDebug() << "Pressed Next";
    if(file.next()){
        refreshTable();
    }
}

void MainWindow::previousPage(){
  qDebug() << "Pressed Previous";
    if(file.previous()){
        refreshTable();
    }
}

void MainWindow::gotoPage(){
  if (file.seek(ui.spinBox->value())) {
    refreshTable();
  }
}
/*##########################################*/
