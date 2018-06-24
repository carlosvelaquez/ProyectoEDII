#include "deletefieldwindow.h"
#include "ui_deletefieldwindow.h"
#include "Field.h"

deletefieldwindow::deletefieldwindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::deletefieldwindow)
{
    ui->setupUi(this);
}

deletefieldwindow::~deletefieldwindow()
{
    delete ui;
}

void deletefieldwindow:: setFile(File* fi){
    file = fi;
}

void deletefieldwindow::fillComboBox(){
    ui->comboBox_deletefield->clear();
    QStringList items;
    for(int i=1; i<=file->getFields().size; i++){
        items<<QString::fromStdString(file->getFields().get(i).getName());
    }
    ui->comboBox_deletefield->addItems(items);
}

void deletefieldwindow::on_pushButton_delete_clicked()
{
    if(file->deleteField(ui->comboBox_deletefield->currentIndex()+1)){
        fillComboBox();
    }
}
