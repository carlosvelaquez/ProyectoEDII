#ifndef FIELDWINDOW_H
#define FIELDWINDOW_H

#include <QWidget>

namespace Ui {
class FieldWindow;
}

class FieldWindow : public QWidget
{
    Q_OBJECT

public:
    explicit FieldWindow(QWidget *parent = 0);
    ~FieldWindow();

private slots:
    void on_pushButton_CrearCampo_clicked();

private:
    Ui::FieldWindow *ui;
};

#endif // FIELDWINDOW_H
