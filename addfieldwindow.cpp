#include "addfieldwindow.h"
#include "ui_addfieldwindow.h"
#include <QDebug>
#include <QStringList>

addfieldwindow::addfieldwindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::addfieldwindow)
{
    ui->setupUi(this);
    QStringList items;
    items<<"Integer"<<"Character"<<"String";
    ui->comboBox_type->addItems(items);
}

addfieldwindow::~addfieldwindow()
{
    delete ui;
}

void addfieldwindow::on_pushButton_addfield_clicked()
{
    int type =0;
    QString text= ui->lineEdit_name->text();
    //Tipo 0 int 1 char 2 string, nombre, tamaño, es llave primaria
    if(ui->comboBox_type->currentText()=="Character") type = 1;
    else if(ui->comboBox_type->currentText()=="String") type = 2;
    //file->addField(type,ui->lineEdit_name->text(),ui->spinBox_size->value(), false);
    file->addField(type,text.toStdString(),ui->spinBox_size->value(), ui->radioButton_ispk->isChecked());
    ui->radioButton_ispk->setChecked(false);
    ui->lineEdit_name->setText("");
    ui->comboBox_type->setCurrentIndex(0);
    ui->spinBox_size->setValue(0);
}

void addfieldwindow::setFile(File* con){
    file = con;
}
