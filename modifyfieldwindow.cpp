#include "modifyfieldwindow.h"
#include "ui_modifyfieldwindow.h"

modifyfieldwindow::modifyfieldwindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::modifyfieldwindow)
{
    ui->setupUi(this);
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
    /*ui->tableWidget->setHorizontalHeaderLabels(headers);
    ui->tableWidget->setRowCount(file->getFields().size);*/
}
