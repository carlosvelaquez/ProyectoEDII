#include "deletefieldwindow.h"
#include "ui_deletefieldwindow.h"

deletefieldwindow::deletefieldwindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::deletefieldwindow)
{
    ui->setupUi(this);
     connect(ui->pushButton_deletefield, SIGNAL(triggered()), this, SLOT(deletefield()));
}

deletefieldwindow::~deletefieldwindow()
{
    delete ui;
}

void deletefieldwindow:: setFile(File* fi){
    file = fi;
}

void deletefieldwindow::fillComboBox(){
    QStringList items;
    for(int i=1; i<=file->getFields().size; i++){
        items<<QString::fromStdString(file->getFields().get(i).getName());
    }
    ui->comboBox_deletefield->addItems(items);
}

void deletefieldwindow::deletefield()
{
    QString name;
    name = ui->comboBox_deletefield->currentText();
    qDebug()<<name;
}
