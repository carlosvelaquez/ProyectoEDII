#include "ui_MainWindow.h"
#include <QDebug>
#include "Conveyor.h"

class MainWindow : public QMainWindow{
  Q_OBJECT

private:
  Ui::MainWindow ui;
  Conveyor conveyor;

private slots:
  void LoadFile();

  void addFields();
  void addRecord();

  void deleteRecords();
  void deleteFields();

public:
  MainWindow(QWidget* parent = 0);
  void refreshTable();
  Conveyor* getConveyor();
};
