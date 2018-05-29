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


/* Metodo que elimina ya sea registro o campo
 * Como basicamente es lo mismo (Escoger un número
 * del registro o campo a eliminar) se usa el mismo
 * Frame.
 */
void deletewindow::on_pushButton_delete_clicked()
{
    MainWindow* mw = new MainWindow();
    switch (type) {
    case 0:{ // Es un campo
        if(mw->getConveyor()->deleteField(ui->spinBox_delete->value()))
            qDebug()<<"Se elimino";
        else
            qDebug()<<"No se elimino";
    }
    break;
    case 1:{ // Es un registro
        if(mw->getConveyor()->deleteRecord(ui->spinBox_delete->value()))
            qDebug()<<"Se elimino";
        else
            qDebug()<<"No se elimino";
    }
    break;
    }
    mw = 0;
    delete mw;
}
