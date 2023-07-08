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
    this->setGeometry(0, 0, 800, 600);
    setupScenes();
    show_lion();
}

MainWindow::~MainWindow()
{

}

int ii = 0;
void MainWindow::show_lion(){
    QTimer* timer1 = new QTimer(this);
    QLabel* dino = new QLabel(this);
    timer1->setInterval(1000); // 设置定时器间隔
    timer1->start(300);
    connect(timer1, &QTimer::timeout, [=](){
        QPixmap a;
        QString str =QString(":/front/images/speak%1.png").arg(ii);
        a.load(str);
        QPixmap B = a.scaled(200, 250, Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
        dino->setPixmap(B);
        dino->setGeometry(0, 0, B.width(), B.height());
        dino->setParent(this);
        dino->move(50, 200);
        dino->show();
        ii++;
        ii = ii%2;
    });
}
void MainWindow::setupScenes()
{
    /*可以根据scene实例化出不同的对象出来, 然后把所有的场景加入到堆叠窗口中去*/

    showScene(1);
    connect(scene1->dialogWidget, &DialogWidget::dialogFinished, this, [this]() { switchToScene(12); });
    connect(scene1_2->dialogWidget, &DialogWidget::dialogFinished, this, [this]() { switchToScene(2); });
    connect(scene2->dialogWidget, &DialogWidget::dialogFinished, this, [this]() { switchToScene(3); });
    connect(scene3->dialogWidget, &DialogWidget::dialogFinished, this, [this]() { switchToScene(32); });
    connect(scene3_2->dialogWidget, &DialogWidget::dialogFinished, this, [this]() { switchToScene(333); });
    connect(scene3_game, &game2048::gameFinished, this, [this]() { switchToScene(4); });

    connect(scene4->dialogWidget, &DialogWidget::dialogFinished, this, [this]() { switchToScene(42); });
    connect(scene4_2->dialogWidget, &DialogWidget::dialogFinished, this, [this]() { switchToScene(444); });
    // connect(scene4_game, &running::gameFinished, this, [this]() { switchToScene(5); });

    connect(scene5->dialogWidget, &DialogWidget::dialogFinished, this, [this]() { switchToScene(52); });
    connect(scene5_2->dialogWidget, &DialogWidget::dialogFinished, this, [this]() { switchToScene(53); });
    connect(scene5_3->dialogWidget, &DialogWidget::dialogFinished, this, [this]() { switchToScene(54); });
    connect(scene5_4->dialogWidget, &DialogWidget::dialogFinished, this, [this]() { switchToScene(55); });
    connect(scene5_5->dialogWidget, &DialogWidget::dialogFinished, this, [this]() { switchToScene(6); });


    connect(scene6->dialogWidget, &DialogWidget::dialogFinished, this, [this]() { switchToScene(62); });
    connect(scene6_2->dialogWidget, &DialogWidget::dialogFinished, this, [this]() { switchToScene(63); });
    connect(scene6_3->dialogWidget, &DialogWidget::dialogFinished, this, [this]() { switchToScene(7); });

    connect(scene7->dialogWidget, &DialogWidget::dialogFinished, this, [this]() { switchToScene(8); });
    connect(scene8->dialogWidget, &DialogWidget::dialogFinished, this, [this]() { switchToScene(9); });
    connect(scene9->dialogWidget, &DialogWidget::dialogFinished, this, [this]() { switchToScene(1111); });
// connect(game_rum, &MyWindow::gameFinished, this, &MainWindow::go_back);
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


