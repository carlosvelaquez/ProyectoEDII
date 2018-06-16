#ifndef LISTFIELDSWINDOW_H
#define LISTFIELDSWINDOW_H

#include <QWidget>
#include "File.h"

namespace Ui {
class listfieldswindow;
}

class listfieldswindow : public QWidget
{
    Q_OBJECT

public:
    explicit listfieldswindow(QWidget *parent = 0);
    ~listfieldswindow();
    void filltable(File*);

private:
    Ui::listfieldswindow *ui;
    File* file;
};

#endif // LISTFIELDSWINDOW_H
