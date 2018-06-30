#ifndef MODIFYFIELDWINDOW_H
#define MODIFYFIELDWINDOW_H

#include <QWidget>
#include "File.h"


namespace Ui {
class modifyfieldwindow;
}

class modifyfieldwindow : public QWidget
{
    Q_OBJECT

public:
    explicit modifyfieldwindow(QWidget *parent = 0);
    ~modifyfieldwindow();
    void setFile(File*);
    void fillComboBox();

private:
    Ui::modifyfieldwindow *ui;
    File* file;
};

#endif // MODIFYFIELDWINDOW_H
