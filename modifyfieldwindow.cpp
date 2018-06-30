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
   /* ui->comboBox_campo->clear();
    QStringList items;
    for(int i=1; i<=file->getFields().size; i++){
        items<<QString::fromStdString(file->getFields().get(i).getName());
    }
    ui->comboBox_campo->addItems(items);*/
}

void modifyfieldwindow::on_comboBox_campo_currentIndexChanged(int index)
{
    if(index>=0){
         ui->lineEdit->setText(QString::fromStdString(file->getFields().get(index+1).getName()));
         if(file->getFields().get(index+1).isPrimaryKey()){
             ui->radioButton->setChecked(true);
         }
         if(file->getFields().get(index+1).getType()==1) ui->comboBox_2->setCurrentIndex(1);
         else if(file->getFields().get(index+1).getType()==2) ui->comboBox_2->setCurrentIndex(2);
         else  ui->comboBox_2->setCurrentIndex(0);
         ui->spinBox->setValue(file->getFields().get(index+1).getSize());
     }
}
