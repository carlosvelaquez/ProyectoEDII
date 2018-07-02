#ifndef MODIFYRECORDWINDOW_H
#define MODIFYRECORDWINDOW_H

#include <QWidget>
#include "File.h"
#include "List.h"

namespace Ui {
class modifyrecordwindow;
}

class modifyrecordwindow : public QWidget
{
    Q_OBJECT

public:
    explicit modifyrecordwindow(QWidget *parent = 0);
    ~modifyrecordwindow();
    void filltable();
    void setFile(File*);

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::modifyrecordwindow *ui;
    File* file;
    List<string> record;
    int indexRecord;
};

#endif // MODIFYRECORDWINDOW_H
