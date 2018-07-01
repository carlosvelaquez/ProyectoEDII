#include "joinfilewindow.h"
#include "ui_joinfilewindow.h"

joinFileWindow::joinFileWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::joinFileWindow)
{
    ui->setupUi(this);
}

joinFileWindow::joinFileWindow(File* n_file)
{
    file = n_file;
}

joinFileWindow::~joinFileWindow()
{
    delete ui;
}

void joinFileWindow::refreshTable(){

}
