#include "deleterecordwindow.h"

deleteRecordWindow::deleteRecordWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::deleteRecordWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(deleteRecord()));
}

deleteRecordWindow::deleteRecordWindow(QWidget* parent, File* n_file) :
    QWidget(parent),
    ui(new Ui::deleteRecordWindow)
{
    ui->setupUi(this);
    file = n_file;
    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(deleteRecord()));
}

void deleteRecordWindow::deleteRecord(){
  QMessageBox::StandardButton answer = QMessageBox::question(this,"","¿Seguro que desea eliminar este registro?", QMessageBox::Yes | QMessageBox::No);
  if(answer == QMessageBox::Yes){
    file->deleteRecord(ui->spinBox->value());
    QMessageBox::about(this,"","Registro eliminado exitosamente");
  }
}

deleteRecordWindow::~deleteRecordWindow()
{
    delete ui;
}
