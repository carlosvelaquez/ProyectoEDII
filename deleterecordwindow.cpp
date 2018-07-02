#include "deleterecordwindow.h"
#include "ui_deleterecordwindow.h"

deleteRecordWindow::deleteRecordWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::deleteRecordWindow)
{
    ui->setupUi(this);
}

deleteRecordWindow::~deleteRecordWindow()
{
    delete ui;
}

deleteRecordWindow::deleteRecordWindow(File* n_file){
    file = n_file;
}
