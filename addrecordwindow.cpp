#include "addrecordwindow.h"
#include "ui_addrecordwindow.h"

addRecordWindow::addRecordWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::addRecordWindow)
{
    ui->setupUi(this);
}

addRecordWindow::~addRecordWindow()
{
    delete ui;
}
