#include "linkedfileswindow.h"
#include "ui_linkedfileswindow.h"

linkedFilesWindow::linkedFilesWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::linkedFilesWindow)
{
    ui->setupUi(this);
}

linkedFilesWindow::~linkedFilesWindow()
{
    delete ui;
}

linkedFilesWindow::linkedFilesWindow(File* n_file){
    file = n_file;
}
