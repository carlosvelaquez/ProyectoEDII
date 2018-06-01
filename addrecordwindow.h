#ifndef ADDRECORDWINDOW_H
#define ADDRECORDWINDOW_H

#include <QWidget>
#include "Conveyor.h"

namespace Ui {
class addRecordWindow;
}

class addRecordWindow : public QWidget
{
    Q_OBJECT

public:
    explicit addRecordWindow(QWidget *parent = 0);
    ~addRecordWindow();
    void setConveyor(Conveyor*);
    void fillTable();

private slots:
    void on_pushButton_send_clicked();

private:
    Ui::addRecordWindow *ui;
    Conveyor* conveyor;
};

#endif // ADDRECORDWINDOW_H
