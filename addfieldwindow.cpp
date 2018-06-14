#include "addfieldwindow.h"
#include "ui_addfieldwindow.h"
#include <QDebug>
#include <QStringList>

addfieldwindow::addfieldwindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::addfieldwindow)
{
    ui->setupUi(this);
    QStringList items;
    items<<"Integer"<<"Character"<<"String";
    ui->comboBox_type->addItems(items);
}

addfieldwindow::~addfieldwindow()
{
    delete ui;
}

void addfieldwindow::on_pushButton_addfield_clicked()
{

}

void addfieldwindow::setFile(File* con){
    file = con;
}
