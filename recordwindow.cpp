#include "recordwindow.h"
#include "ui_recordwindow.h"

RecordWindow::RecordWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RecordWindow)
{
    ui->setupUi(this);
}

RecordWindow::~RecordWindow()
{
    delete ui;
}
