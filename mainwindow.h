#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStackedWidget>
#include "scene1.h"
#include "scene2.h"
#include "mywindow.h"
#include "dialog.h"
#include "game2048.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    int current_idx = 1; //表示现在的场景是第几个，用来New出来scene1对象
    explicit MainWindow(QWidget *parent = nullptr);
    void startscene();
    void show_paper(int a, int b);
    void help();
    ~MainWindow();

private slots:
    void go_next();
    void goRunning();
    void go_back();/*回到当前窗口的下一个case*/

private:
    QStackedWidget *stackedWidget;

    void setupScenes();
private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
