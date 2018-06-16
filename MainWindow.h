#include "ui_MainWindow.h"
#include <QDebug>
#include "File.h"

class MainWindow : public QMainWindow{
  Q_OBJECT

private:
  Ui::MainWindow ui;
  File file;

private slots:
  void loadFile();

  void addFields();
  void addRecord();

  void deleteRecords();
  void deleteFields();

  void listfields();

public:
  MainWindow(QWidget* parent = 0);
  void refreshTable();
  File* getFile();
};
