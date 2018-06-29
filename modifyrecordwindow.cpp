#include "modifyrecordwindow.h"
#include "ui_modifyrecordwindow.h"

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
}

void modifyrecordwindow::filltable(){
    if(file->isLocked()){
        file->flush();
    }
}
