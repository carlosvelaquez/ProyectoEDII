#ifndef FIELDWINDOW_H
#define FIELDWINDOW_H

#include <QWidget>
#include "File.h"

namespace Ui {
class FieldWindow;
}

class FieldWindow : public QWidget
{
    Q_OBJECT

public:
    explicit FieldWindow(QWidget *parent = 0);
    ~FieldWindow();
    void setFile(File*);

private slots:
    void on_pushButton_CrearCampo_clicked();

private:
    Ui::FieldWindow *ui;
    File* file;

};

#endif // FIELDWINDOW_H
