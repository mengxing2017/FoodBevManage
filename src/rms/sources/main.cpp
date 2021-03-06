#include <QApplication>
#include <QDir>
#include <QFile>
#include <QStandardPaths>
#include <QtDebug>

#include "db/init_database.h"
#include "mainwindow.h"

int main(int argc, char *argv[]) {
  QApplication a(argc, argv);

  InitDatabase *initDb = new InitDatabase();
  if (!initDb->initDb()) {
    initDb->~InitDatabase();
    return -1;
  }
  initDb->~InitDatabase();
  //  MainWindow w;
  //  w.show();
  //  return a.exec();
  return 0;
}
