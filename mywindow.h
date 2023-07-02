#ifndef MYWINDOW_H
#define MYWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui { class MyWindow; }
QT_END_NAMESPACE

class MyWindow : public QMainWindow
{
    Q_OBJECT

public:
    QLabel* dino;
    QTimer* timer1;
    QTimer* timer2;
    QTimer* timer3;
    QTimer* timer4;
    QTimer* timer5;
    QTimer* timer6;
    QTimer* timer7;
    QTimer* scoretimer;
    QRect Dinosaur;
    QLabel* jump;
    int isanimation;
    int win = 0;
    int num=0;
    MyWindow(QWidget *parent = nullptr);

    void start_game();
    void mainscene();
    void pixmapshowd();
    void judge(QRect r1, QRect r2);
    void pixmapshowg();
    void treerun(int y, int count);
    void pixmapshowt();
    void djump(QLabel* jump);
    void ddown(QLabel* jump);
    void keyPressEvent(QKeyEvent * event);
    void score();
    ~MyWindow();
    Ui::MyWindow *ui;
signals:
    void gameFinished();
};
#endif // MYWINDOW_H
