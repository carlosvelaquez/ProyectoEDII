#include "MainWindow.h"
#include "qfiledialog.h"
#include "deletewindow.h"
#include "addrecordwindow.h"
#include "addfieldwindow.h"

MainWindow::MainWindow(QWidget* parent) : QMainWindow(parent){
  ui.setupUi(this);

  connect(ui.actionCargar_Archivo, SIGNAL(triggered()), this, SLOT(loadFile()));

  // Añadir campos
  connect(ui.actionCrear_Campos, SIGNAL(triggered()), this, SLOT(addFields()));
  // Añadir registros
  connect(ui.actionIntroducir_Registros, SIGNAL(triggered()), this, SLOT(addRecord()));

  // Eliminar campos
  connect(ui.actionEliminar_Campos, SIGNAL(triggered()), this, SLOT(deleteFields()));
  // Eliminar registros
  connect(ui.actionBorrar_Registros, SIGNAL(triggered()), this, SLOT(deleteRecords()));
}

/* ############# Para registros ############# */
void MainWindow::addRecord(){
    addRecordWindow* adw = new addRecordWindow();
    adw->setFile(&file);
    adw->fillTable();
    adw->show();
}

void MainWindow::deleteRecords(){
   /* deletewindow* dw = new deletewindow();
    dw->setFile(&file);
    dw->setType(1);
    dw->show();*/
}
/*##########################################*/


/* ############# Para campos ############# */
void MainWindow::addFields(){
    addfieldwindow* adf = new addfieldwindow();
    adf->setFile(&file);
    adf->show();
    /*FieldWindow* f = new FieldWindow();
    f->setFile(&file);
    f->show();*/
}

void MainWindow::deleteFields(){
    /*deletewindow* dw = new deletewindow();
    dw->setFile(&file);
    dw->setType(0);
    dw->show();*/
}
/*##########################################*/


File* MainWindow::getFile(){
    return &file;
}

void MainWindow::loadFile(){
    QString path = QFileDialog::getSaveFileName(this, "Abrir Archivo","/path/to/file/",tr("TXT Files (*.txt)"));
    file.open(path.toStdString());

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
      for (int i = 1; i <= file.fieldQuantity(); i++) {
        string ins = "";
        ins += "Data [";
        ins += to_string(j);
        ins += "][";
        ins += to_string(i);
        ins += "]";
        data.insert(ins);
      }

      qDebug() << file.addRecord(data);


      if (j%10 == 0) {
        file.flush();
        qDebug() << "j = " << j << ", flushing...";
      }

      qDebug() << "Adding record " << j << "...";
    }

    file.seek(1);

    qDebug() << "Refreshing table...";
    refreshTable();
}

void MainWindow::refreshTable(){
  ui.tableWidget->setColumnCount(file.fieldQuantity());
  ui.tableWidget->setRowCount(file.recordQuantity());

  List<Field> fields = file.getFields();
  List<List<string>> records = file.data();

  for (int i = 1; i <= fields.size; i++) {
    ui.tableWidget->setHorizontalHeaderItem(i-1, new QTableWidgetItem(fields[i].getName().c_str()));
    qDebug() << fields[i].getName().c_str();
    //ui.tableWidget->horizontalHeaderItem(i-1) = new QTableWidgetItem(fields[i].getName().c_str());
  }

  for (int i = 1; i <= records.size; i++) {
    for (int j = 1; j <= fields.size; j++) {
      ui.tableWidget->setItem(i-1, j-1, new QTableWidgetItem(records[i][j].c_str()));
    }
  }
}
