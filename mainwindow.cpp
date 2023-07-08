#include "mainwindow.h"
#include "running.h"
#include <QLabel>
#include <QTimer>
#include <QPixmap>
#include <QDebug>
#include <QPropertyAnimation>
#include <QKeyEvent>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)
{
    this->setFixedSize(800, 600);
    setupScenes();
}

MainWindow::~MainWindow()
{
}

void MainWindow::setupScenes()
{
    /*可以根据scene实例化出不同的对象出来, 然后把所有的场景加入到堆叠窗口中去*/
    showScene(1);
    connect(scene1->dialogWidget, &DialogWidget::dialogFinished, this,  [this]() { switchToScene(12); });
    connect(scene1_2->dialogWidget, &DialogWidget::dialogFinished, this, [this]() { switchToScene(2); });
    connect(scene2->dialogWidget, &DialogWidget::dialogFinished, this, [this]() { switchToScene(3); });
    connect(scene3->dialogWidget, &DialogWidget::dialogFinished, this, [this]() { switchToScene(32); });
    connect(scene3_2->dialogWidget, &DialogWidget::dialogFinished, this, [this]() { switchToScene(333); });
    connect(scene3_game, &game2048::gameFinished, this, [this]() { switchToScene(4); });
    connect(scene4->dialogWidget, &DialogWidget::dialogFinished, this, [this]() { switchToScene(5); });

    connect(scene5->dialogWidget, &DialogWidget::dialogFinished, this, [this]() { switchToScene(52); });
    connect(scene5_2->dialogWidget, &DialogWidget::dialogFinished, this, [this]() { switchToScene(555); });
    connect(Scene5_game,  &game2048::gameFinished, this, [this]() { switchToScene(53); });

    connect(scene5_3->dialogWidget, &DialogWidget::dialogFinished, this, [this]() { switchToScene(54); });
    connect(scene5_4->dialogWidget, &DialogWidget::dialogFinished, this, [this]() { switchToScene(55); });
    connect(scene5_5->dialogWidget, &DialogWidget::dialogFinished, this, [this]() { switchToScene(6); });


    connect(scene6->dialogWidget, &DialogWidget::dialogFinished, this, [this]() { switchToScene(62); });
    connect(scene6_2->dialogWidget, &DialogWidget::dialogFinished, this, [this]() { switchToScene(63); });
    connect(scene6_3->dialogWidget, &DialogWidget::dialogFinished, this, [this]() { switchToScene(444   ); });

    connect(scene7->dialogWidget, &DialogWidget::dialogFinished, this, [this]() { switchToScene(444); });

    connect(scene4_game, &running::gameFinished, this, [this]() { switchToScene(8); });
    connect(scene8->dialogWidget, &DialogWidget::dialogFinished, this, [this]() { switchToScene(9); });

    connect(scene9->dialogWidget, &DialogWidget::dialogFinished, this, [this]() { switchToScene(12); });
//   connect(game_rum, &MyWindow::gameFinished, this, &MainWindow::go_back);
    /*从第一个窗口开始*/
//    stackedWidget->setCurrentWidget(scene1);
}
/*去往堆叠窗口中的下一个场景*/
void MainWindow::go_next()
{
    current_idx++;
    stackedWidget->setCurrentIndex(current_idx);
}

void MainWindow::go_back()
{
    stackedWidget->setCurrentIndex(current_idx);
}

/*进入到跑酷界面*/
void MainWindow::goRunning()
{
//     current_idx++;
//     stackedWidget->setCurrentIndex(current_idx);
    //  scene4_game->start_game();
    running* new_game = new running(this);
}

/*帮助界面*/
void MainWindow::help(){
}


