#ifndef LINKEDFILESWINDOW_H
#define LINKEDFILESWINDOW_H

#include <QWidget>
#include "File.h"
#include "List.h"
#include "Field.h"

namespace Ui {
class linkedFilesWindow;
}

class linkedFilesWindow : public QWidget
{
    Q_OBJECT

public:
    explicit linkedFilesWindow(QWidget *parent = 0);
    ~linkedFilesWindow();
    void setFile(File*);
    bool validateField(Field*);

private slots:


    void on_pushButton_find_clicked();

    void on_pushButton_send_clicked();

private:
    File* file;
    File file2;
    File file3;
    List<Field> fields;
    Ui::linkedFilesWindow *ui;
};

#endif // LINKEDFILESWINDOW_H
