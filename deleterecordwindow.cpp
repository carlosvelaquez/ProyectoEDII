#include "deleterecordwindow.h"
#include "ui_deleterecordwindow.h"
#include <QTreeWidgetItem>
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

void deleteRecordWindow::on_pushButton_clicked()
{
    if(file->deleteRecord(ui->spinBox->value())){
        QMessageBox::about(this,"Removido","Registro removido con exito");
    }else{
        QMessageBox::warning(this,"Espera","Ingrese correctamente el indice del registro");
    }
}
