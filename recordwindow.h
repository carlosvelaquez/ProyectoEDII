#ifndef RECORDWINDOW_H
#define RECORDWINDOW_H

#include <QWidget>

namespace Ui {
class RecordWindow;
}

class RecordWindow : public QWidget
{
    Q_OBJECT

public:
    explicit RecordWindow(QWidget *parent = 0);
    ~RecordWindow();

private:
    Ui::RecordWindow *ui;
};

#endif // RECORDWINDOW_H
