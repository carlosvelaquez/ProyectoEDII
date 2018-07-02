#include "linkedfileswindow.h"
#include "ui_linkedfileswindow.h"
#include <QFileDialog>
#include <QMessageBox>

linkedFilesWindow::linkedFilesWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::linkedFilesWindow)
{
    ui->setupUi(this);
    QStringList headers;
    QHeaderView* header = ui->tableWidget->horizontalHeader();
    header->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableWidget->setColumnCount(4);
    headers <<"Nombre"<<"Tipo"<<"Es llave"<<"Tamaño";
    ui->tableWidget->setHorizontalHeaderLabels(headers);

}

linkedFilesWindow::~linkedFilesWindow()
{
    delete ui;
}

void linkedFilesWindow::refreshTable(){
    for(int i=1; i<=fields.size; i++){
        ui->tableWidget->setItem(i-1,0,new QTableWidgetItem(QString::fromStdString(fields.get(i).getName())));
        if(fields.get(i).getType()==0) ui->tableWidget->setItem(i-1,1,new QTableWidgetItem("Integer"));
        else if(fields.get(i).getType()==1) ui->tableWidget->setItem(i-1,1,new QTableWidgetItem("Character"));
        else if(fields.get(i).getType()==2) ui->tableWidget->setItem(i-1,1,new QTableWidgetItem("String"));
        if(fields.get(i).isPrimaryKey()) ui->tableWidget->setItem(i-1,2,new QTableWidgetItem("Yes"));
        else ui->tableWidget->setItem(i-1,2,new QTableWidgetItem("No"));
        ui->tableWidget->setItem(i-1,3,new QTableWidgetItem(QString::number(fields.get(i).getSize())));
    }
}

void linkedFilesWindow::setFile(File* n_file){
    file = n_file;
    QStringList items;
    for(int i=1; i<=file->getFields().size; i++){
        items<<QString::fromStdString(file->getFields().get(i).getName());
    }
    ui->comboBox_file1->addItems(items);
}


// Busca el segundo archivo
void linkedFilesWindow::on_pushButton_find_clicked()
{
    QString path = QFileDialog::getOpenFileName(this, "Abrir Archivo", QDir::currentPath(), tr("TXT Files (*.txt)"));

    if (!path.isEmpty() && !path.isNull()) {
      if (file2.open(path.toStdString())){
        file2.lock();
        for(int i=1; i<file2.getFields().size; i++){
            ui->comboBox_file2->addItem(QString::fromStdString(file2.getFields().get(ui->comboBox_file2->currentIndex()+1).getName()));
        }
      }
    }else{
      qDebug() << "File path is empty or null. Aborting.";
    }
}

void linkedFilesWindow::on_pushButton_add1_clicked()
{
    fields.insert(file->getFields().get(ui->comboBox_file1->currentIndex()+1));
    refreshTable();

    /*if(fields.contains(file->getFields().get(ui->comboBox_file1->currentIndex()+1))){
        fields.insert(file->getFields().get(ui->comboBox_file1->currentIndex()+1));
        refreshTable();
    }else{
        QMessageBox::warning(this,"","Este campo ya ha sido añadido");
    }*/
}

void linkedFilesWindow::on_pushButton_add2_clicked()
{
    /*if(fields.contains(file2->getFields().get(ui->comboBox_file1->currentIndex()+1))){
        fields.insert(file2->getFields().get(ui->comboBox_file1->currentIndex()+1));
        refreshTable();
    }else{
        QMessageBox::warning(this,"","Este campo ya ha sido añadido");
    }*/
}

// Guarda el tercer archivo
void linkedFilesWindow::on_pushButton_send_clicked()
{
    if(fields.size==0 /*|| file2 == false*/){
        QMessageBox::warning(this,"","No se puede guardar el archivo");
    }else{
        QMessageBox::about(this,"","Archivo guardado");
        /*
         * Guardarlo :v
         */
    }
}
