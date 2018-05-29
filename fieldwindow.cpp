#include "fieldwindow.h"
#include "ui_fieldwindow.h"
#include "qstring.h"
#include "Conveyor.h"
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

// Push Buttom Clicked de "Añadir Campo"
void FieldWindow::on_pushButton_clicked()
{
    /*QString cadena;
    cadena = ui->LineEdit_field->text();
    conveyor.addField(0,cadena.toStdString(),cadena.size());
    ui->LineEdit_field->setText("");*/
}
