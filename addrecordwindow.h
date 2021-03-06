#ifndef ADDRECORDWINDOW_H
#define ADDRECORDWINDOW_H

#include <QWidget>
#include "File.h"

namespace Ui {
class addRecordWindow;
}

class addRecordWindow : public QWidget
{
    Q_OBJECT

public:
    explicit addRecordWindow(QWidget *parent = 0);
    ~addRecordWindow();
    void setFile(File*);
    void fillTable();
    bool validateInt(QString);
    bool validateString(QString);
    bool validateChar(QString);

private slots:
    void on_pushButton_send_clicked();

private:
    Ui::addRecordWindow *ui;
    File* file;
};

#endif // ADDRECORDWINDOW_H
