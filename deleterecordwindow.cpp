#include "deleterecordwindow.h"
#include "ui_deleterecordwindow.h"

deleteRecordWindow::deleteRecordWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::deleteRecordWindow)
{
    ui->setupUi(this);
}

deleteRecordWindow::deleteRecordWindow(QWidget* parent, File* n_file) :
    QWidget(parent),
    ui(new Ui::deleteRecordWindow)
{
    ui->setupUi(this);
    file = n_file;
}


deleteRecordWindow::~deleteRecordWindow()
{
    delete ui;
}
