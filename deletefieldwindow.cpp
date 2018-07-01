#include "deletefieldwindow.h"
#include "ui_deletefieldwindow.h"
#include "Field.h"
#include <QMessageBox>

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
    if(!file->isLocked()){
        QMessageBox::StandardButton answer = QMessageBox::question(this,"","¿Seguro que desea eliminar el campo?", QMessageBox::Yes | QMessageBox::No);
        if(answer == QMessageBox::Yes){
            if(file->deleteField(ui->comboBox_deletefield->currentIndex()+1)){
                QMessageBox::about(this,"","Campo eliminado exitosamente");
                fillComboBox();
            }
        }
    }else{
        QMessageBox::warning(this,"","El archivo esta bloqueado");
    }
}
