#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStackedWidget>
#include "scene1.h"
#include "scene2.h"
#include "mywindow.h"
#include "dialog.h"
#include "game2048.h"
#include "running.h"

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
    void setupScenes();
    void show_paper(int a, int b);
    void help();
    void show_lion();
    ~MainWindow();

    int currentScene;
    
    Scene1 *scene1 = new Scene1(this, 1, 1);
    Scene1 *scene1_2 = new Scene1(this, 1, 2);
    Scene1 *scene2 = new Scene1(this, 2, 1);
    Scene1 *scene3 = new Scene1(this, 3, 1);
    Scene1* scene3_2 = new Scene1(this, 3, 2);
    game2048* scene3_game = new game2048(this);

    Scene1* scene4 = new Scene1(this, 4, 1);
    Scene1* scene4_2 = new Scene1(this, 4, 2);
    running * scene4_game = new running(this);

     Scene1* scene5 = new Scene1(this, 5, 1);
     Scene1* scene5_2 = new Scene1(this, 5, 2);
     Scene1* scene5_3 = new Scene1(this, 5, 3);
     Scene1* scene5_4 = new Scene1(this, 5, 4);
     Scene1* scene5_5 = new Scene1(this, 5, 5);

     Scene1* scene6 = new Scene1(this, 6, 1);
     Scene1* scene6_2 = new Scene1(this, 6, 2);
     Scene1* scene6_3 = new Scene1(this, 6, 3);

     Scene1* scene7 = new Scene1(this, 7, 1);
     Scene1* scene8 = new Scene1(this, 8, 1);
     Scene1* scene9 = new Scene1(this, 9, 1);

public slots:
    void switchToScene(int sceneIndex)
    {
        showScene(sceneIndex);
    }
    /*创建一个新的2048游戏*/
    void new_2048(){
        game2048* new_game = new game2048(this);
        new_game->setVisible(true);
    }
    void go_next();
    void goRunning();
    void go_back();/*回到当前窗口的下一个case*/

public:
    QStackedWidget *stackedWidget;
    void showScene(int sceneIndex)
    {
       scene1->setVisible(sceneIndex == 1);
       scene1_2->setVisible(sceneIndex == 12);
       scene2->setVisible(sceneIndex == 2);
       scene3->setVisible(sceneIndex == 3);
       scene3_2->setVisible(sceneIndex == 32);
       scene3_game->setVisible(sceneIndex == 333);


       scene4->setVisible(sceneIndex == 4);
       scene4_2->setVisible(sceneIndex == 42);
       scene5->setVisible(sceneIndex == 5);
       scene5_2->setVisible(sceneIndex == 52);
       scene5_3->setVisible(sceneIndex == 53);
       scene5_4->setVisible(sceneIndex == 54);
       scene5_5->setVisible(sceneIndex == 55);


       scene6->setVisible(sceneIndex == 6);
       scene6_2->setVisible(sceneIndex == 62);
       scene6_3->setVisible(sceneIndex == 63);
       
       scene7->setVisible(sceneIndex == 7);
       scene8->setVisible(sceneIndex == 8);
       scene9->setVisible(sceneIndex == 9);    
    }
private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
