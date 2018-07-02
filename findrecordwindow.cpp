#include "findrecordwindow.h"
#include <QMessageBox>

FindRecordWindow::FindRecordWindow(QWidget *parent, File* nFile) : QWidget(parent){
  ui.setupUi(this);
  file = nFile;

  connect(ui.pushButton, SIGNAL(clicked()), this, SLOT(search()));
}

void FindRecordWindow::search(){
  if (file->seekRecord(ui.lineEdit->text().toStdString())) {
    QMessageBox::about(this,"Encontrado","Registro encontrado, por favor refresque la tabla.");
  }else{
    QMessageBox::warning(this,"¡Error!","La llave no ha sido encontrada en los registros.");
  }
}
