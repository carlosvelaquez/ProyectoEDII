#include "modifyfieldwindow.h"
#include "ui_modifyfieldwindow.h"
#include <QComboBox>

modifyfieldwindow::modifyfieldwindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::modifyfieldwindow)
{

}

modifyfieldwindow::~modifyfieldwindow()
{
    delete ui;
}

void modifyfieldwindow::setFile(File* fi){
    file = fi;
}

void modifyfieldwindow::fillComboBox(){
    /*ui->comboBox_deletefield->clear();
    QStringList items;
    for(int i=1; i<=file->getFields().size; i++){
        items<<QString::fromStdString(file->getFields().get(i).getName());
    }
    ui->comboBox_deletefield->addItems(items);*/
}
