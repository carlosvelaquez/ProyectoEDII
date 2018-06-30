#ifndef MODIFYRECORDWINDOW_H
#define MODIFYRECORDWINDOW_H

#include <QWidget>
#include "File.h"

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

private:
    Ui::modifyrecordwindow *ui;
    File* file;
};

#endif // MODIFYRECORDWINDOW_H
