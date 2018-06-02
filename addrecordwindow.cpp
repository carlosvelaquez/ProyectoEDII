#include "addrecordwindow.h"
#include "ui_addrecordwindow.h"

#include "List.h"
#include "Field.h"
#include "QTableWidgetItem"

addRecordWindow::addRecordWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::addRecordWindow)
{
    ui->setupUi(this);
}

addRecordWindow::~addRecordWindow()
{
    delete ui;
}

void addRecordWindow::setConveyor(Conveyor* con){
    conveyor = con;

}
void addRecordWindow::fillTable(){
    /*static const short INT = 0;
    static const short CHAR = 1;
    static const short STRING = 2;*/
    /******************/
    Field field1;
    Field field2;
    Field field3;
    Field field4;
    Field field5;

    field1.setName("Nombre");
    field1.setPrimaryKey(false);
    field1.setType(2);

    field2.setName("Sexo");
    field2.setPrimaryKey(false);
    field2.setType(2);

    field3.setName("Raza");
    field3.setPrimaryKey(true);
    field3.setType(2);

    field4.setName("Sexo");
    field4.setPrimaryKey(false);
    field4.setType(1);

    field5.setName("Edad");
    field5.setPrimaryKey(false);
    field5.setType(0);

    List<Field> fields;
    fields.insert(field1);
    fields.insert(field2);
    fields.insert(field3);
    fields.insert(field4);
    fields.insert(field5);
    /******************/


    QStringList headers;
    headers <<"Type"<<"Name"<<"Is PK"<<"Value";
    ui->tableWidget->setHorizontalHeaderLabels(headers);
    ui->tableWidget->setRowCount(fields.size);
    for(int i=1; i<=fields.size; i++){//int i=1; i<=conveyor->getFields().size; i++
        if(fields.get(i).getType()==0) ui->tableWidget->setItem(i-1,0,new QTableWidgetItem("Integer"));//conveyor->getFields().get(i).getType()
        else if(fields.get(i).getType()==1) ui->tableWidget->setItem(i-1,0,new QTableWidgetItem("Character"));
        else if(fields.get(i).getType()==2) ui->tableWidget->setItem(i-1,0,new QTableWidgetItem("String"));
        ui->tableWidget->setItem(i-1,1,new QTableWidgetItem(QString::fromStdString(fields.get(i).getName())));//conveyor->getFields().get(i).getName()
        if(fields.get(i).isPrimaryKey()) ui->tableWidget->setItem(i-1,2,new QTableWidgetItem("Yes"));//conveyor->getFields().get(i).isPrimaryKey()
        else ui->tableWidget->setItem(i-1,2,new QTableWidgetItem("No"));
    }
}

void addRecordWindow::on_pushButton_send_clicked()
{
    List<string> values;
    QString value;
    QTableWidgetItem* item;
    for(int i=1; i<=5; i++){//int i=1; i<=conveyor->getFields().size; i++
        item = ui->tableWidget->takeItem(i-1,3);
        value = item->text();
        qDebug()<<"Value: "<<i<<": "<<value;
        values.insert(value.toStdString());
    }
}