#include "addrecordwindow.h"
#include "ui_addrecordwindow.h"
#include "MainWindow.h"

#include "List.h"
#include "Field.h"
#include "QTableWidgetItem"
#include <QMessageBox>

addRecordWindow::addRecordWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::addRecordWindow)
{
    ui->setupUi(this);
    QHeaderView* header = ui->tableWidget->horizontalHeader();
    header->setSectionResizeMode(QHeaderView::Stretch);
}

addRecordWindow::~addRecordWindow()
{
    delete ui;
}

void addRecordWindow::setFile(File* con){
    file = con;
}

void addRecordWindow::fillTable(){
    /*static const short INT = 0;
    static const short CHAR = 1;
    static const short STRING = 2;*/
    /******************/
    QStringList headers;
    headers <<"Type"<<"Name"<<"Is PK"<<"Value";
    ui->tableWidget->setHorizontalHeaderLabels(headers);
    if(file->getFields().size>0){ // Validar que hayan campos para ingresar

        ui->tableWidget->setRowCount(file->getFields().size);
        for(int i=1; i<=file->getFields().size; i++){//int i=1; i<=file->getFields().size; i++
            if(file->getFields().get(i).getType()==0) ui->tableWidget->setItem(i-1,0,new QTableWidgetItem("Integer"));//file->getFields().get(i).getType()
            else if(file->getFields().get(i).getType()==1) ui->tableWidget->setItem(i-1,0,new QTableWidgetItem("Character"));
            else if(file->getFields().get(i).getType()==2) ui->tableWidget->setItem(i-1,0,new QTableWidgetItem("String"));
            ui->tableWidget->setItem(i-1,1,new QTableWidgetItem(QString::fromStdString(file->getFields().get(i).getName())));//file->getFields().get(i).getName()
            if(file->getFields().get(i).isPrimaryKey()) ui->tableWidget->setItem(i-1,2,new QTableWidgetItem("Yes"));//file->getFields().get(i).isPrimaryKey()
            else ui->tableWidget->setItem(i-1,2,new QTableWidgetItem("No"));
            ui->tableWidget->setItem(i-1,3,0);
        }
    }
}

void addRecordWindow::on_pushButton_send_clicked()
{
    QMessageBox::StandardButton answer = QMessageBox::question(this,"","¿Desea guardar registros? Esto impedira la edición de campos", QMessageBox::Yes|QMessageBox::No);
    if(answer == QMessageBox::Yes){
        if(file->getFields().size>0){ // Validar que hayan campos para ingresar
            List<string> values;
            QString value;
            QTableWidgetItem* item;
            for(int i=1; i<=file->getFields().size; i++){//
                item = ui->tableWidget->takeItem(i-1,3);
                value = item->text();
                qDebug()<<"Value: "<<i<<": "<<value;
                values.insert(value.toStdString());
            }
            QMessageBox::about(this,"","Registro añadido con exito");
            file->addRecord(values);
            file->lock();
        }
    }
    //
}
