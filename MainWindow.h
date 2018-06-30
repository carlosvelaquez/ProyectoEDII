#include "ui_MainWindow.h"
#include <QDebug>
#include "File.h"

class MainWindow : public QMainWindow{
  Q_OBJECT

private:
  Ui::MainWindow ui;
  File file;
  int long page = 0;

private slots:
  void loadFile();
  void closeFile();
  void saveFile();

  void addRecord();
  void deleteRecords();

  void listfields();
  void deleteFields();
  void addFields();
  void modifyFields();

  void nextPage();
  void previousPage();
  void gotoPage();

  void refresh();

public:
  MainWindow(QWidget* parent = 0);
  void refreshTable();
  File* getFile();
};
