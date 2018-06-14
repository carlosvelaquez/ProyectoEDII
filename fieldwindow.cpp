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
 * los campos se agregan a la variable "file" principal
 * de la clase MainWindow
 */
void FieldWindow::on_pushButton_CrearCampo_clicked()
{
    qDebug()<<"Size de campos: "<<file->getFields().size;
    QString cadena;
    cadena = ui->lineEdit_field->text();
    if(file->addField(1, cadena.toStdString(),0))
        ui->lineEdit_field->setText("");

}

void FieldWindow::setFile(File* con){
    file = con;
}
