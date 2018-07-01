#include "deleterecordwindow.h"
#include "ui_deleterecordwindow.h"
#include <QTreeWidgetItem>

deleteRecordWindow::deleteRecordWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::deleteRecordWindow)
{
    ui->setupUi(this);
    QHeaderView* header = ui->tableWidget->horizontalHeader();
    header->setSectionResizeMode(QHeaderView::Stretch);
}

deleteRecordWindow::~deleteRecordWindow()
{
    delete ui;
}

deleteRecordWindow::deleteRecordWindow(File* n_file){
    file = n_file;
}

void deleteRecordWindow::refreshtable(){
    //List<List<string>> records = file->data();
    if(false){
        /*for(int i=1; i<=file->getFields().size; i++){
            ui->tableWidget->setHorizontalHeaderItem(i-1, new QTableWidgetItem(QString::fromStdString(file->getFields().get(i).getName())));
        }

        for (int i = 1; i <= records.size; i++) {
          for (int j = 1; j <= file->getFields().size; j++) {
            if (records[i][1][0] == '*') {
              ui->tableWidget->setItem(i-1, j-1, new QTableWidgetItem("-----"));
            }else{
              ui->tableWidget->setItem(i-1, j-1, new QTableWidgetItem(records[i][j].c_str()));
            }
          }
        }*/
    }else{
        qDebug()<<"Data size: 0";
        ui->tableWidget->setItem(0,0, new QTableWidgetItem("No hay registros. Puede añadir registros en Registros > Introducir Registros"));
    }

}

void deleteRecordWindow::on_pushButton_clicked()
{

}
