#include "mainwindow.h"
#include <QLabel>
#include <QTimer>
#include <QPixmap>
#include <QDebug>
#include <QPropertyAnimation>
#include <QKeyEvent>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)
{
    stackedWidget = new QStackedWidget(this);
    setCentralWidget(stackedWidget);
    setupScenes();
}

MainWindow::~MainWindow()
{
}

void MainWindow::setupScenes()
{
    /*可以根据scene实例化出不同的对象出来, 然后把所有的场景加入到堆叠窗口中去*/
    Scene1 *scene1 = new Scene1(this, 1, 1,60,80,0);
    Scene1 *scene1_2 = new Scene1(this, 1, 2);
    Scene1* scene2 = new Scene1(this, 2, 1);
    Scene1* scene3 = new Scene1(this, 3, 1);
    game2048*scene3_game = new game2048(this,1);
    //game2048*scene4_game=new game2048(this,2);
    Scene1* scene4 = new Scene1(this, 4, 1,60,80,1);
    MyWindow* scene4_run =new MyWindow(this);
    Scene1* scene5 = new Scene1(this, 5, 1);
    Scene1* scene6 = new Scene1(this, 6, 1,60,80,2);
    Scene1* scene7 = new Scene1(this, 7, 1);
    Scene1* scene8 = new Scene1(this, 8, 1);
    Scene1* scene9 = new Scene1(this, 9, 1);

    MyWindow* game_run = new MyWindow();

    stackedWidget->addWidget(scene1);
    stackedWidget->addWidget(scene1_2);
    stackedWidget->addWidget(scene2);
    stackedWidget->addWidget(scene3);
    stackedWidget->addWidget(scene3_game);
    stackedWidget->addWidget(scene4);
    stackedWidget->addWidget(scene4_run);
    stackedWidget->addWidget(scene5);
    stackedWidget->addWidget(scene6);
    stackedWidget->addWidget(scene7);
    stackedWidget->addWidget(scene8);
    stackedWidget->addWidget(scene9);

//    connect(scene1, &Scene1::goToScene2, this, &MainWindow::goToScene2);
//    connect(scene2, &Scene2::goToScene1, this, &MainWindow::goToScene1);

    connect(scene1->dialogWidget, &DialogWidget::dialogFinished, this, &MainWindow::go_next);
    connect(scene1_2->dialogWidget, &DialogWidget::dialogFinished, this, &MainWindow::go_next);
    connect(scene2->dialogWidget, &DialogWidget::dialogFinished, this, &MainWindow::go_next);
    connect(scene3->dialogWidget, &DialogWidget::dialogFinished, this, &MainWindow::go_next);
    connect(scene3_game, &game2048::gameFinished, this, &MainWindow::go_next);
    connect(scene4->dialogWidget, &DialogWidget::dialogFinished, this, &MainWindow::go_next);
    connect(game_run, &MyWindow::gameFinished, this, &MainWindow::go_next);
    connect(scene5->dialogWidget, &DialogWidget::dialogFinished, this, &MainWindow::go_next);
    connect(scene6->dialogWidget, &DialogWidget::dialogFinished, this, &MainWindow::go_next);
    connect(scene7->dialogWidget, &DialogWidget::dialogFinished, this, &MainWindow::go_next);
    connect(scene8->dialogWidget, &DialogWidget::dialogFinished, this, &MainWindow::go_next);
    connect(scene9->dialogWidget, &DialogWidget::dialogFinished, this, &MainWindow::go_next);

//    connect(game_rum, &MyWindow::gameFinished, this, &MainWindow::go_back);
    /*从第一个窗口开始*/
    stackedWidget->setCurrentWidget(scene1);
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
    stackedWidget->setCurrentIndex(1);
}


/*帮助界面*/
void MainWindow::help(){
}


