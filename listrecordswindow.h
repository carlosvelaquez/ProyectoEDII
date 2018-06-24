#ifndef LISTRECORDSWINDOW_H
#define LISTRECORDSWINDOW_H

#include "File.h"
#include <QWidget>

namespace Ui {
class listrecordswindow;
}

class listrecordswindow : public QWidget
{
    Q_OBJECT

public:
    explicit listrecordswindow(QWidget *parent = 0);
    ~listrecordswindow();
    void filltable();
    void setFile(File*);

private:
    File* file;
    Ui::listrecordswindow *ui;
};

#endif // LISTRECORDSWINDOW_H
