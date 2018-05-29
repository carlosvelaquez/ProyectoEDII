#ifndef FIELDWINDOW_H
#define FIELDWINDOW_H

#include <QWidget>
#include "Conveyor.h"

namespace Ui {
class FieldWindow;
}

class FieldWindow : public QWidget
{
    Q_OBJECT

public:
    explicit FieldWindow(QWidget *parent = 0);
    ~FieldWindow();
    void setConveyor(Conveyor*);

private slots:
    void on_pushButton_CrearCampo_clicked();

private:
    Ui::FieldWindow *ui;
    Conveyor* conveyor;

};

#endif // FIELDWINDOW_H
