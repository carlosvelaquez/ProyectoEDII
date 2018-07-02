#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "ui_MainWindow.h"
#include <QDebug>
#include "File.h"
#include "NameGenerator.h"
#include "findrecordwindow.h"

class MainWindow : public QMainWindow{
  Q_OBJECT

private:
  Ui::MainWindow ui;
  File file;
  int long page = 0;

private slots:
  void openFile();
  void loadFile();
  void closeFile();
  void saveFile();

  void addRecord();
  void deleteRecords();
  void findRecords();

  void listfields();
  void deleteFields();
  void addFields();
  void modifyFields();

  void nextPage();
  void previousPage();
  void gotoPage();

  void generateTest();
  void joinFiles();

  void saveIndexFile();

  void exportCSV();
  void exportXML();

  void refresh();
  void exit();

  void createIndexes();

public:
  MainWindow(QWidget* parent = 0);
  void refreshTable();
  void refreshMenuBar();
  File* getFile();
};


#endif /* end of include guard: MAINWINDOW_H */
