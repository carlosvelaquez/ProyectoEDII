#include "MainWindow.h"

MainWindow::MainWindow(QWidget* parent) : QMainWindow(parent){
  ui.setupUi(this);

  //connect(ui.actionNuevo_Archivo, SIGNAL(triggered()), this, SLOT(showDialog()));
}

void MainWindow::showDialog(){
  qDebug() << "triggered";
}
