#ifndef DELETERECORDWINDOW_H
#define DELETERECORDWINDOW_H

#include <QWidget>
#include "File.h"
#include "ui_deleterecordwindow.h"

namespace Ui {
class deleteRecordWindow;
}

class deleteRecordWindow : public QWidget
{
    Q_OBJECT

  private:
      Ui::deleteRecordWindow *ui;
      File* file;

  private slots:
    void deleteRecord();

public:
    explicit deleteRecordWindow(QWidget *parent = 0);
    deleteRecordWindow(QWidget* parent = 0, File* = 0);

    ~deleteRecordWindow();


};

#endif // DELETERECORDWINDOW_H
