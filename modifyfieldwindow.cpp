#include "modifyfieldwindow.h"
#include "ui_modifyfieldwindow.h"
#include "Field.h"

modifyfieldwindow::modifyfieldwindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::modifyfieldwindow)
{
    ui->setupUi(this);
}

modifyfieldwindow::~modifyfieldwindow()
{
    delete ui;
}

void modifyfieldwindow::setFile(File* n_file){
    file = n_file;
}

void modifyfieldwindow::fillWidgets(){
    ui->comboBox_campos->clear();
    QStringList items;
    for(int i=1; i<=file->getFields().size; i++){
        items<<QString::fromStdString(file->getFields().get(i).getName());
    }
    ui->comboBox_campos->addItems(items);
}

void modifyfieldwindow::on_comboBox_campos_currentIndexChanged(int index)
{
    if(index>=0){
         ui->radioButton->setChecked(false);
         ui->lineEdit->setText(QString::fromStdString(file->getFields().get(index+1).getName()));
         if(file->getFields().get(index+1).isPrimaryKey()){
             ui->radioButton->setChecked(true);
         }
         if(file->getFields().get(index+1).getType()==1) ui->comboBox_2->setCurrentIndex(1); //Char
         else if(file->getFields().get(index+1).getType()==2) ui->comboBox_2->setCurrentIndex(2); //String
         else  ui->comboBox_2->setCurrentIndex(0); //Integer

         ui->spinBox->setValue(file->getFields().get(index+1).getSize());
     }
}

void modifyfieldwindow::on_pushButton_clicked()
{
    if(file->isLocked()){
        qDebug()<<"Apply change, field ";
        if(ui->lineEdit->text()!="") // Valida si añade nombre
            file->getFields().get(ui->comboBox_campos->currentIndex()+1).setName(ui->lineEdit->text().toStdString());

        if(ui->spinBox->value()!=file->getFields().get(ui->comboBox_campos->currentIndex()+1).getSize()) //Valida si añade el tamaño
            file->getFields().get(ui->comboBox_campos->currentIndex()+1).setSize(ui->spinBox->value());

        if(ui->comboBox_2->currentIndex()!=file->getFields().get(ui->comboBox_campos->currentIndex()+1).getType()) //Valida si añade el tipo
            file->getFields().get(ui->comboBox_campos->currentIndex()+1).setType(ui->comboBox_2->currentIndex());

        if(ui->radioButton->isChecked()!=file->getFields().get(ui->comboBox_campos->currentIndex()+1).isPrimaryKey()){ // Valida si añade como llave primaria
            if(!file->hasPrimaryKey())
                file->getFields().get(ui->comboBox_campos->currentIndex()+1).setPrimaryKey(true);
        }
    }
    fillWidgets();
}
