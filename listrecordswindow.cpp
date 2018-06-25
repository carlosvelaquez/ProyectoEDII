#include "listrecordswindow.h"
#include "ui_listrecordswindow.h"

listrecordswindow::listrecordswindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::listrecordswindow)
{
    ui->setupUi(this);
    QHeaderView* header = ui->tableWidget->horizontalHeader();
    header->setSectionResizeMode(QHeaderView::Stretch);
}

listrecordswindow::~listrecordswindow()
{
    delete ui;
}

void listrecordswindow::setFile(File* f){
    file = f;
}

void listrecordswindow::filltable(){

}
