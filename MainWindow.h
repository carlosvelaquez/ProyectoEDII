#include "ui_MainWindow.h"
#include <QDebug>
#include "File.h"

class MainWindow : public QMainWindow{
  Q_OBJECT

private:
  Ui::MainWindow ui;
  File file;

private slots:
  void LoadFile();

  void addFields();
  void addRecord();

  void deleteRecords();
  void deleteFields();

public:
  MainWindow(QWidget* parent = 0);
  void refreshTable();
  File* getFile();
};
