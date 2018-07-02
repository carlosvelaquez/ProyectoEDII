#ifndef LINKEDFILESWINDOW_H
#define LINKEDFILESWINDOW_H

#include <QWidget>
#include "File.h"

namespace Ui {
class linkedFilesWindow;
}

class linkedFilesWindow : public QWidget
{
    Q_OBJECT

public:
    explicit linkedFilesWindow(QWidget *parent = 0);
    ~linkedFilesWindow();
    linkedFilesWindow(File*);

private:
    File* file;
    Ui::linkedFilesWindow *ui;
};

#endif // LINKEDFILESWINDOW_H
