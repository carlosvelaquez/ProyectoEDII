#include "addfieldwindow.h"
#include "ui_addfieldwindow.h"
#include <QDebug>
#include <QStringList>
#include <QMessageBox>
#include <QApplication>

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
    if(!file->isLocked()){
        if(ui->lineEdit_name->text()!=""){
            if(ui->radioButton_ispk->isChecked()&&file->hasPrimaryKey()){
                QMessageBox::warning(this,"¡Espera!","Ya existe una llave primaria");
            }else{
                int type =0;
                QString text= ui->lineEdit_name->text();
                if(ui->comboBox_type->currentText()=="Character") type = 1;
                else if(ui->comboBox_type->currentText()=="String") type = 2;
                file->addField(type,text.toStdString(),ui->spinBox_size->value(), ui->radioButton_ispk->isChecked());
                QMessageBox::about(this,"","Campo añadido con exito");
                ui->radioButton_ispk->setChecked(false);
                ui->lineEdit_name->setText("");
                ui->comboBox_type->setCurrentIndex(0);
                ui->spinBox_size->setValue(0);
            }
        }
    }else{
        QMessageBox::warning(this,"¡Espera!", "Archivo bloqueado");
    }
}

void addfieldwindow::setFile(File* con){
    file = con;
}
