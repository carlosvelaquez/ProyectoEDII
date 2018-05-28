#include "MainWindow.h"

MainWindow::MainWindow(QWidget* parent) : QMainWindow(parent){
  ui.setupUi(this);

  connect(ui.actionNuevo_Archivo, SIGNAL(triggered()), this, SLOT(showDialog()));
}

void MainWindow::showDialog(){
  qDebug() << "Show dialog triggered";

  conveyor.setPath("lel.txt");
  conveyor.addField(0, "Lel", 10);
  refreshTable();

  conveyor.writeAvailList();
  conveyor.writeFields();
}

void MainWindow::refreshTable(){
  ui.tableWidget->setColumnCount(conveyor.fieldQuantity());
  ui.tableWidget->setRowCount(conveyor.recordQuantity());

  List<Field> fields = conveyor.getFields();

  for (int i = 1; i <= fields.size; i++) {
    //ui.tableWidget->setHorizontalHeaderItem(i-1, new QTableWidgetItem(fields[i].getName()));
    ui.tableWidget->horizontalHeaderItem(i-1)->setText(fields[i].getName().c_str());
  }
}
