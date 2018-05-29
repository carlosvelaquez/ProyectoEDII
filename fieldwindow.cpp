#include "fieldwindow.h"
#include "ui_fieldwindow.h"
#include "MainWindow.h"

FieldWindow::FieldWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FieldWindow)
{
    ui->setupUi(this);
}

FieldWindow::~FieldWindow()
{
    delete ui;
}


/* Esto creí mejor poner un frame para añadir un campo
 * los campos se agregan a la variable "conveyor" principal
 * de la clase MainWindow
 */
void FieldWindow::on_pushButton_CrearCampo_clicked()
{
    qDebug()<<"Size de campos: "<<conveyor->getFields().size;
    QString cadena;
    cadena = ui->lineEdit_field->text();
    if(conveyor->addField(1, cadena.toStdString(),0))
        ui->lineEdit_field->setText("");

}

void FieldWindow::setConveyor(Conveyor* con){
    conveyor = con;
}
