#include "modifyrecordwindow.h"
#include "ui_modifyrecordwindow.h"
#include <QMessageBox>

modifyrecordwindow::modifyrecordwindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::modifyrecordwindow)
{
    ui->setupUi(this);
    QHeaderView* header = ui->tableWidget->horizontalHeader();
    header->setSectionResizeMode(QHeaderView::Stretch);
}

modifyrecordwindow::~modifyrecordwindow()
{
    delete ui;
}

void modifyrecordwindow::setFile(File* n_file){
    file = n_file;

    // Llena la tabla
    ui->tableWidget->setColumnCount(file->getFields().size);
    ui->tableWidget->setRowCount(1);
    QStringList headers;
    for(int i=1; i<=file->getFields().size; i++){
         headers<<QString::fromStdString(file->getFields().get(i).getName());
    }
    ui->tableWidget->setHorizontalHeaderLabels(headers); //Asigna Headers

}

void modifyrecordwindow::filltable(){
    if(file->isLocked()){
        file->flush();
    }
}

void modifyrecordwindow::on_pushButton_2_clicked()
{

    // Obtiene el registro indicado por el usuario
    indexRecord = ui->spinBox->value();
    if(indexRecord!=0){
       record = file->getRecord(indexRecord); //Toma el regstro
       for(int i=1; i<=file->getFields().size; i++){ // Llena la tabla con el registro que obtiene
            ui->tableWidget->setItem(0,i-1, new QTableWidgetItem(QString::fromStdString(record.get(i))));
       }
       record.clear(); // Limpia el registro de atributo
    }
}


// Aplica los cambios
void modifyrecordwindow::on_pushButton_clicked()
{
    if(indexRecord!=0){
      //qDebug() << "Modifying record " << indexRecord;

        file->deleteRecord(indexRecord); // Borra el registro en la posicion antes obtenida
        //qDebug() << "Deleting record.";


        List<string> cambios;
        for (int i=1; i<=file->getFields().size; i++){ // Se obtienen los cambios hechos en la tabla
          //qDebug() << "Extracting info from table. i = " << i;
          QString ins = ui->tableWidget->takeItem(0,i-1)->text();

            if(ins.isNull()){
              //qDebug() << "Null character on table. Inserting hyphen";
                cambios.insert("-");
            }else{
              //qDebug() << ins << " on table. Inserting.";
                cambios.insert(ins.toStdString());
            }
        }

        //qDebug() << "Attempting to add new record on modify.";

        if(file->addRecord(cambios)){ // Se aplican los cambios
            QMessageBox::about(this,"","Registro modificado exitosamente");
            for(int i=1; i<=file->getFields().size; i++){ // Borra los cambios hechos en la tabla
                ui->tableWidget->setItem(0,i-1, new QTableWidgetItem(""));
            }
        }else{
             QMessageBox::warning(this,"","No se ha podido modificar el registro");
        }


        indexRecord = 0;
    }
}
