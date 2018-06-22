#ifndef DELETEFIELDWINDOW_H
#define DELETEFIELDWINDOW_H

#include <QWidget>
#include "File.h"

namespace Ui {
class deletefieldwindow;
}

class deletefieldwindow : public QWidget
{
    Q_OBJECT

public:
    explicit deletefieldwindow(QWidget *parent = 0);
    ~deletefieldwindow();
    void setFile(File*);
    void fillComboBox();
private slots:
    void deletefield();

private:
    Ui::deletefieldwindow *ui;
    File *file;
};

#endif // DELETEFIELDWINDOW_H
