#ifndef DELETEWINDOW_H
#define DELETEWINDOW_H

#include <QWidget>
#include "File.h"

namespace Ui {
class deletewindow;
}

class deletewindow : public QWidget
{
    Q_OBJECT

public:
    explicit deletewindow(QWidget *parent = 0);
    ~deletewindow();
    void setType(int);
    void setFile(File*);
private slots:
    void on_pushButton_delete_clicked();

private:
    int type;
    Ui::deletewindow *ui;
    File* file;
};

#endif // DELETEWINDOW_H
