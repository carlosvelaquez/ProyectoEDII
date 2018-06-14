#ifndef ADDFIELDWINDOW_H
#define ADDFIELDWINDOW_H

#include <QWidget>

namespace Ui {
class addfieldwindow;
}

class addfieldwindow : public QWidget
{
    Q_OBJECT

public:
    explicit addfieldwindow(QWidget *parent = 0);
    ~addfieldwindow();

private:
    Ui::addfieldwindow *ui;
};

#endif // ADDFIELDWINDOW_H
