#ifndef FINDRECORDWINDOW_h
#define FINDRECORDWINDOW_h

#include "ui_findrecordwindow.h"
#include "File.h"
#include <string>

using namespace std;

class FindRecordWindow : public QWidget{
  Q_OBJECT

private:
  Ui::FindRecordWindow ui;
  File* file;

private slots:
  void search();

public:
  FindRecordWindow(QWidget *parent = 0, File* nFile= 0);
};

#endif /* end of include guard: FINDRECORDWINDOW_h */
