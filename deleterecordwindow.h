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

private:
    Ui::deleteRecordWindow *ui;
    File* file;
};

#endif // DELETERECORDWINDOW_H
