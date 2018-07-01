#include "deleterecordwindow.h"
#include "ui_deleterecordwindow.h"
#include <QMessageBox>

deleteRecordWindow::deleteRecordWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::deleteRecordWindow)
{
    ui->setupUi(this);
}

deleteRecordWindow::~deleteRecordWindow()
{
    delete ui;
}

deleteRecordWindow::deleteRecordWindow(File* n_file){
    file = n_file;
}

void deleteRecordWindow::on_pushButton_eliminar_clicked()
{
    if(file->deleteRecord(ui->spinBox->value())){
        QMessageBox::about(this,"","Registro eliminado con exito");
    }else{
        QMessageBox::warning(this,"","Ingrese correctamente los datos requeridos");
    }
}
