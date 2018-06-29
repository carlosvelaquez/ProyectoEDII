#include "modifyfieldwindow.h"
#include "ui_modifyfieldwindow.h"

modifyfieldwindow::modifyfieldwindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::modifyfieldwindow)
{
    ui->setupUi(this);
    QHeaderView* header = ui->tableWidget->horizontalHeader();
    header->setSectionResizeMode(QHeaderView::Stretch);
}

modifyfieldwindow::~modifyfieldwindow()
{
    delete ui;
}

void modifyfieldwindow::setFile(File* fi){
    file = fi;
}

void modifyfieldwindow::filltable(){
    QStringList headers;
    headers <<"Name"<<"Type"<<"Is PK"<<"Size";
    ui->tableWidget->setHorizontalHeaderLabels(headers);
    ui->tableWidget->setRowCount(file->getFields().size);
    for(int i=1; i<=file->getFields().size; i++){
        ui->tableWidget->setItem(i-1,0,new QTableWidgetItem(QString::fromStdString(file->getFields().get(i).getName())));
        /*if(file->getFields().get(i).getType()==0) ui->tableWidget->setItem(i-1,1,new QTableWidgetItem("Integer"));
        else if(file->getFields().get(i).getType()==1) ui->tableWidget->setItem(i-1,1,new QTableWidgetItem("Character"));
        else if(file->getFields().get(i).getType()==2) ui->tableWidget->setItem(i-1,1,new QTableWidgetItem("String"));*/
        if(file->getFields().get(i).isPrimaryKey()) ui->tableWidget->setItem(i-1,2,new QTableWidgetItem("Yes"));
        else ui->tableWidget->setItem(i-1,2,new QTableWidgetItem("No"));
        ui->tableWidget->setItem(i-1,3,new QTableWidgetItem(QString::number(file->getFields().get(i).getSize())));
    }
}
