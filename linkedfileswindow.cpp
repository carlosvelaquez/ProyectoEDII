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
    qDebug()<<"Size file 3: "<<file3.getFields().size;
    for(int i=1; i<=file3.getFields().size; i++){
        ui->tableWidget->setRowCount(file3.getFields().size);
        ui->tableWidget->setItem(i-1,0,new QTableWidgetItem(QString::fromStdString(file3.getFields().get(i).getName())));
        if(file3.getFields().get(i).getType()==0) ui->tableWidget->setItem(i-1,1,new QTableWidgetItem("Integer"));
        else if(file3.getFields().get(i).getType()==1) ui->tableWidget->setItem(i-1,1,new QTableWidgetItem("Character"));
        else if(file3.getFields().get(i).getType()==2) ui->tableWidget->setItem(i-1,1,new QTableWidgetItem("String"));
        if(file3.getFields().get(i).isPrimaryKey()) ui->tableWidget->setItem(i-1,2,new QTableWidgetItem("Yes"));
        else ui->tableWidget->setItem(i-1,2,new QTableWidgetItem("No"));
        ui->tableWidget->setItem(i-1,3,new QTableWidgetItem(QString::number(file3.getFields().get(i).getSize())));
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
        QStringList items;
        for(int i=1; i<=file2.getFields().size; i++){
            items<<QString::fromStdString(file2.getFields().get(i).getName());
        }
        ui->comboBox_file2->addItems(items);
      }
    }else{
      qDebug() << "File path is empty or null. Aborting.";
    }
}

void linkedFilesWindow::on_pushButton_add1_clicked()
{
    if(file2 == true){
        if(validateField(file->getFields().getPointer(ui->comboBox_file1->currentIndex()+1))){
            file3.addField(file->getFields().get(ui->comboBox_file1->currentIndex()+1));
            refreshTable();
        }else{
            QMessageBox::warning(this,"","Este campo ya ha sido añadido");
        }
    }else{
        QMessageBox::warning(this,"","Cargue el segundo archivo antes");
    }
}

void linkedFilesWindow::on_pushButton_add2_clicked()
{
    if(file2 == true){
        if(validateField(file2.getFields().getPointer(ui->comboBox_file1->currentIndex()+1))){
            file3.addField(file2.getFields().get(ui->comboBox_file1->currentIndex()+1));
            refreshTable();
        }else{
            QMessageBox::warning(this,"","Este campo ya ha sido añadido");
        }
    }else{
        QMessageBox::warning(this,"","Cargue el segundo archivo antes");
    }
}

// Guarda el tercer archivo
void linkedFilesWindow::on_pushButton_send_clicked()
{
    if(file3.getFields().size==0 || file2 == false){
        QMessageBox::warning(this,"","No se puede guardar el archivo");
    }else{
      /*List<Field> nFields = file3.getFields();

      for (int i = 1; i <= file->blockQuantity(); i++) {
        List<List<string>> block = file->data();

        for (int j = 1; j <= block.size; j++) {
          List<string> nData;

          for (int k = 1; k <= block[j].size; k++) {
            Field field1 = file->getFields()[k];

            for (int r = 1; r <= nFields.size; r++) {
              Field field2 = nFields[r];
              if (field1.getName() == field2.getName() && field1.getSize() == field2.getSize() && field1.getType() == field2.getType()) {
                  nData.insert(block[j][k]);
              }
            }
          }

          file3.addRecord(nData);
        }

        file->next();
      }

      for (int i = 1; i <= file->blockQuantity(); i++) {
        List<List<string>> block = file->data();

        for (int j = 1; j <= block.size; j++) {
          List<string> nData;

          for (int k = 1; k <= block[j].size; k++) {
            Field field1 = file2.getFields()[k];

            for (int r = 1; r <= nFields.size; r++) {
              Field field2 = nFields[r];
              if (field1.getName() == field2.getName() && field1.getSize() == field2.getSize() && field1.getType() == field2.getType()) {
                  nData.insert(block[j][k]);
              }
            }
          }

          file3.addRecord(nData);
        }

        file2.next();
      }

      file3.setPath("Cruzado.txt");
      file3.flush();*/
        QMessageBox::about(this,"","Archivo guardado");
        /*
         * Guardarlo :v
         */
    }
}

bool linkedFilesWindow::validateField(Field* n_field){
    Field* temp_field;
    for(int i=1; i<=file3.getFields().size; i++){
        temp_field = file3.getFields().getPointer(i);
        if(temp_field->getName()==n_field->getName() && temp_field->getSize()==n_field->getSize()
              && temp_field->getType() == n_field->getType()){
            return false;
        }
    }
    return true;
}
