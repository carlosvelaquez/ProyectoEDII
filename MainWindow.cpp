#include "MainWindow.h"
#include "qfiledialog.h"
#include "fieldwindow.h"
#include "Record.h"

MainWindow::MainWindow(QWidget* parent) : QMainWindow(parent){
  ui.setupUi(this);

  connect(ui.actionCargar_Archivo, SIGNAL(triggered()), this, SLOT(LoadFile()));
  connect(ui.actionCrear_Campos, SIGNAL(triggered()), this, SLOT(addFields()));
}

void MainWindow::addRecord(){
    if(true){//Validar si el archivo esta abierto y si el Conveyor tiene campos suficientes
        Record record;
        for(int i=1; i<=conveyor.getFields().size; i++){
           record.insertData(conveyor.getFields().get(i).getName());
        }
        conveyor.addRecord(record); // Registro añadido
    }
}

void MainWindow::addFields(){
    FieldWindow* f = new FieldWindow();
    f->show();
}

Conveyor* MainWindow::getConveyor(){
    return &conveyor;
}

void MainWindow::LoadFile(){
    QString fileNames = QFileDialog::getOpenFileName(this, tr("Open File"),"/path/to/file/",tr("TXT Files (*.txt)"));
    conveyor.setPath(fileNames.toStdString());
    /*conveyor.setPath("lel.txt");
    conveyor.addField(0, "Índice", 5);
    conveyor.addField(2, "Nombre", 20);
    conveyor.addField(0, "Edad", 5);
    conveyor.addField(1, "Sexo", 10);
    conveyor.addField(2, "Dirección", 50);
    refreshTable();*/

    //conveyor.deleteField(0);
    //refreshTable();

    conveyor.readFields();

    List<string> data;
    data.insert("1");
    data.insert("2");
    data.insert("3");
    data.insert("4");
    data.insert("5");

    Record r(data);
    conveyor.addRecord(r);
    refreshTable();

    conveyor.writeAvailList();
    conveyor.writeFields();
}

void MainWindow::refreshTable(){
  ui.tableWidget->setColumnCount(conveyor.fieldQuantity());
  ui.tableWidget->setRowCount(conveyor.recordQuantity());

  List<Field> fields = conveyor.getFields();
  List<Record> records = conveyor.getRecords();

  for (int i = 1; i <= fields.size; i++) {
    ui.tableWidget->setHorizontalHeaderItem(i-1, new QTableWidgetItem(fields[i].getName().c_str()));
    qDebug() << fields[i].getName().c_str();
    //ui.tableWidget->horizontalHeaderItem(i-1) = new QTableWidgetItem(fields[i].getName().c_str());
  }

  for (int i = 1; i <= records.size; i++) {
    for (int j = 1; j <= fields.size; j++) {
      ui.tableWidget->setItem(i-1, j-1, new QTableWidgetItem(records[i].getData().get(j).c_str()));
    }
  }
}
