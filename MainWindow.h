#include "ui_MainWindow.h"
#include <QDebug>

class MainWindow : public QMainWindow{
  Q_OBJECT

private:
  Ui::MainWindow ui;

private slots:
  void showDialog();

public:
  MainWindow(QWidget* parent = 0);
};
