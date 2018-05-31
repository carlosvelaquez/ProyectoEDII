#ifndef ADDRECORDWINDOW_H
#define ADDRECORDWINDOW_H

#include <QWidget>

namespace Ui {
class addRecordWindow;
}

class addRecordWindow : public QWidget
{
    Q_OBJECT

public:
    explicit addRecordWindow(QWidget *parent = 0);
    ~addRecordWindow();

private:
    Ui::addRecordWindow *ui;
};

#endif // ADDRECORDWINDOW_H
