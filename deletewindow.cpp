#include "deletewindow.h"
#include "ui_deletewindow.h"
#include "MainWindow.h"

deletewindow::deletewindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::deletewindow)
{
    ui->setupUi(this);
}

deletewindow::~deletewindow()
{
    delete ui;
}

void deletewindow::setType(int n){
    type = n;
}


void deletewindow::setFile(File* n){
    file = n;
}

/* Metodo que elimina ya sea registro o campo
 * Como basicamente es lo mismo (Escoger un número
 * del registro o campo a eliminar) se usa el mismo
 * Frame.
 */
void deletewindow::on_pushButton_delete_clicked()
{
    switch (type) {
    case 0:{ // Es un campo
        if(file->deleteField(ui->spinBox_delete->value()))
            qDebug()<<"Campo eliminado";
        else
            qDebug()<<"Campo No eliminado";
    }
    break;
    case 1:{ // Es un registro
        if(file->deleteRecord(ui->spinBox_delete->value()))
            qDebug()<<"Se elimino";
        else
            qDebug()<<"No se elimino";
    }
    break;
    }
    ui->spinBox_delete->setValue(0);
}
