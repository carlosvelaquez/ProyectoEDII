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

void FieldWindow::on_pushButton_CrearCampo_clicked()
{
    MainWindow* mw = new MainWindow();
    QString cadena;
    cadena = ui->lineEdit_field->text();
    ui->lineEdit_field->setText("");
    mw->getConveyor()->addField(0, cadena.toStdString(), cadena.size());
    mw = 0;
    delete mw;
}
