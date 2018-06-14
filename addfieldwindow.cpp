#include "addfieldwindow.h"
#include "ui_addfieldwindow.h"

addfieldwindow::addfieldwindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::addfieldwindow)
{
    ui->setupUi(this);
}

addfieldwindow::~addfieldwindow()
{
    delete ui;
}
