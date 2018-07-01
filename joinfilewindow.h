#ifndef JOINFILEWINDOW_H
#define JOINFILEWINDOW_H

#include <QWidget>
#include "File.h"

namespace Ui {
class joinFileWindow;
}

class joinFileWindow : public QWidget
{
    Q_OBJECT

public:
    explicit joinFileWindow(QWidget *parent = 0);
    ~joinFileWindow();
    joinFileWindow(File*);
    void refreshTable();

private:
    File* file;
    Ui::joinFileWindow *ui;
};

#endif // JOINFILEWINDOW_H
