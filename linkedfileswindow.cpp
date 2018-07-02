#include "linkedfileswindow.h"
#include "ui_linkedfileswindow.h"
#include <QFileDialog>
#include <QMessageBox>

linkedFilesWindow::linkedFilesWindow(QWidget *parent) :
QWidget(parent),
ui(new Ui::linkedFilesWindow)
{
  ui->setupUi(this);
  remove("Cruzado.txt");
  file3.open("Cruzado.txt");
}

linkedFilesWindow::~linkedFilesWindow()
{
  delete ui;
}


void linkedFilesWindow::setFile(File* n_file){
  file = n_file;
}


// Busca el segundo archivo
void linkedFilesWindow::on_pushButton_find_clicked()
{
  QString path = QFileDialog::getOpenFileName(this, "Abrir Archivo", QDir::currentPath(), tr("TXT Files (*.txt)"));

  if (!path.isEmpty() && !path.isNull()) {
    if (file2.open(path.toStdString())){
      file2.lock();
      ui->label->setText(path);
    }
  }else{
    //qDebug() << "File path is empty or null. Aborting.";
  }
}

// Guarda el tercer archivo
void linkedFilesWindow::on_pushButton_send_clicked()
{
  if(file2 == false){
    QMessageBox::warning(this,"","No se puede guardar el archivo");
  }else{
    List<Field> fields1 = file->getFields();
    List<Field> fields2 = file2.getFields();

    List<List<string>> records1;
    List<List<string>> records2;
    List<List<string>> records3;


    //Paso 1: Cargar todos los registros y campos a la memoria

    for (int i = 1; i <= fields1.size; i++) {
      file3.addField(fields1[i]);
    }

    for (int i = 1; i <= fields2.size; i++) {
      if (!file3.getFields().contains(fields2[i])) {
        file3.addField(fields2[i]);
      }
    }

    for (int i = 1; i <= file->blockQuantity(); i++) {
      //qDebug() << "Loading file 1, block " << i;
      List<List<string>> block = file->data();

      for (int j = 1; j <= block.size; j++) {
        records1.insert(block[j]);
      }

      file->next();
    }

    for (int i = 1; i <= file2.blockQuantity(); i++) {
      //qDebug() << "Loading file 2, block " << i;
      List<List<string>> block = file2.data();

      for (int j = 1; j <= block.size; j++) {
        records2.insert(block[j]);
      }

      file2.next();
    }


    //Paso 2: Ordenar los registros por un campo común
    //qDebug() << "Finding SharedField...";
    Field sharedField;

    for (int i = 1; i <= fields1.size; i++) {
      if (fields2.contains(fields1[i])) {
        sharedField = fields1[i];
        break;
      }
    }

    //qDebug() << "SharedField is " << sharedField.getName().c_str();
    //qDebug() << "Sorting records...";


  //int sortIndex1 = fields1.indexOf(sharedField);

    /*for (int i = 1; i <= records1.size; i++) {
      for (int j = 1; j < records1.size; j++) {
        //qDebug() << "File 1, Comparing record[" << i << "][" << j << "]";
        if (stoi(records1[j][sortIndex1]) > stoi(records1[j+1][sortIndex1])) {
          records1.swap(j, j+1);
        }
      }
    }*/

    int sortIndex2 = fields2.indexOf(sharedField);

    /*for (int i = 1; i <= records2.size; i++) {
      for (int j = 1; j < records2.size; j++) {
        //qDebug() << "File 2, Comparing record[" << i << "][" << j << "]";
        if (stoi(records2[j][sortIndex2]) > stoi(records2[j+1][sortIndex2])) {
          records2.swap(j, j+1);
        }
      }
    }*/

    //qDebug() << "Merging records...";


    //Paso 3: Añadir al nuevo archivo todos los registros del primer archivo e ignorar los campos compartidos en el segundo
    file3.lock();
    int maxRecord;

    if (records1.size > records2.size) {
      maxRecord = records1.size;
    }else{
      maxRecord = records2.size;
    }

    for (int i = 1; i <= maxRecord; i++) {
      //qDebug() << "Merging record " << i;

      List<string> nRecord;

      //Records1
      if (i <= records1.size) {
        List<string> ins = records1[i];

        for (int j = 1; j <= ins.size; j++) {
          nRecord.insert(ins[j]);
        }
      }else{
        for (int i = 0; i < fields1.size; i++) {
          nRecord.insert("---");
        }
      }


      //Records2
      if (i <= records2.size) {
        List<string> ins = records2[i];

        for (int j = 1; j <= ins.size; j++) {
          if (j != sortIndex2) {
            nRecord.insert(ins[j]);
          }
        }
      }else{
        for (int i = 0; i < fields2.size; i++) {
          nRecord.insert("---");
        }
      }

      file3.addRecord(nRecord);

      if (i%file3.getBlockSize()) {
        file3.flush();
      }
    }

    QMessageBox::about(this,"Éxito","Archivo guardado");
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
