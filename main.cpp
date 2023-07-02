#include "mywindow.h"
#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    MyWindow w;
//    w.show();
    MainWindow w1;
    w1.show();
    return a.exec();
}
