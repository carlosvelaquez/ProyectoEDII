#ifndef DELETERECORDWINDOW_H
#define DELETERECORDWINDOW_H

#include <QWidget>
#include "File.h"

namespace Ui {
class deleteRecordWIndow;
}

class deleteRecordWIndow : public QWidget
{
    Q_OBJECT

public:
    explicit deleteRecordWIndow(QWidget *parent = 0);
    ~deleteRecordWIndow();
    deleteRecordWIndow(File*);
    void refreshTable();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    File* file;
    Ui::deleteRecordWIndow *ui;
};

#endif // DELETERECORDWINDOW_H
