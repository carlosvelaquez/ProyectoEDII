#ifndef ADDFIELDWINDOW_H
#define ADDFIELDWINDOW_H


#include <QWidget>
#include "File.h"

namespace Ui {
class addfieldwindow;
}

class addfieldwindow : public QWidget
{
    Q_OBJECT

public:
    explicit addfieldwindow(QWidget *parent = 0);
    ~addfieldwindow();
    void setFile(File*);

private slots:
    void on_pushButton_addfield_clicked();

private:
    Ui::addfieldwindow *ui;
    File* file;
};

#endif // ADDFIELDWINDOW_H
