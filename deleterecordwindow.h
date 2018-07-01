#ifndef DELETERECORDWINDOW_H
#define DELETERECORDWINDOW_H

#include <QWidget>
#include "File.h"

namespace Ui {
class deleteRecordWindow;
}

class deleteRecordWindow : public QWidget
{
    Q_OBJECT

public:
    explicit deleteRecordWindow(QWidget *parent = 0);
    ~deleteRecordWindow();
    deleteRecordWindow(File*);
    void refreshtable();

private slots:
    void on_pushButton_clicked();

private:
    File* file;
    Ui::deleteRecordWindow *ui;
};

#endif // DELETERECORDWINDOW_H
