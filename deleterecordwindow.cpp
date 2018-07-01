#include "deleterecordwindow.h"
#include "ui_deleterecordwindow.h"
#include <QTableWidgetItem>
#include "List.h"

deleteRecordWIndow::deleteRecordWIndow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::deleteRecordWIndow)
{
    ui->setupUi(this);
}

deleteRecordWIndow::~deleteRecordWIndow()
{
    delete ui;
}

deleteRecordWIndow::deleteRecordWIndow(File* n_file){
    file = n_file;
   /* QHeaderView* header = ui->tableWidget->horizontalHeader();
    header->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableWidget->setEnabled(false);*/
}

void deleteRecordWIndow::on_pushButton_clicked()
{

}


void deleteRecordWIndow::refreshTable(){

    if(file->data().size>0){
        qDebug()<<"Entro";
        file->flush();
        List<List<string>> records = file->data();
        for(int i=1; i<=file->getFields().size; i++){
            ui->tableWidget->setHorizontalHeaderItem(i-1, new QTableWidgetItem(QString::fromStdString(file->getFields().get(i).getName())));
        }
        for(int i=1; i<=file->data().size; i++){
            for(int j=1; j<=file->getFields().size; j++){
                if (records[i][1][0] == '*') {
                  ui->tableWidget->setItem(i-1,j-1, new QTableWidgetItem("------"));
                }else{
                  ui->tableWidget->setItem(i-1, j-1, new QTableWidgetItem(QString::fromStdString(records[i][j].c_str())));
                }
            }
        }
    }else{
        ui->tableWidget->setItem(0, 0, new QTableWidgetItem("No hay registros. Puede añadir registros en Registros > Introducir Registros"));
    }

}



void deleteRecordWIndow::on_pushButton_2_clicked()
{
    /*if(file->previous()){
        refreshTable();
    }*/

}

void deleteRecordWIndow::on_pushButton_3_clicked()
{
    /*if(file->next()){
        refreshTable();
    }*/
}
