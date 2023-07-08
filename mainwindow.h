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
    ~MainWindow();

    int currentScene;
    Scene1 *scene1 = new Scene1(this, 1, 1,60,80,0);
    Scene1 *scene1_2 = new Scene1(this, 1, 2);
    Scene1 *scene2 = new Scene1(this, 2, 1);
    Scene1* scene3 = new Scene1(this, 3, 1);
//      Scene1* scene3_2 = new Scene1(this, 3, 2);
//      // game2048* scene3_game = new game2048(this);

//      Scene1* scene4 = new Scene1(this, 4, 1,60,80,1);
//      Scene1* scene4_2 = new Scene1(this, 4, 2);
// //     running * scene4_game = new running(this);

//      Scene1* scene5 = new Scene1(this, 5, 1);
//      Scene1* scene5_2 = new Scene1(this, 5, 2);
//      Scene1* scene5_3 = new Scene1(this, 5, 3);
//      Scene1* scene5_4 = new Scene1(this, 5, 4);
//      Scene1* scene5_5 = new Scene1(this, 5, 5);

//      Scene1* scene6 = new Scene1(this, 6, 1,60,80,2);
//      Scene1* scene6_2 = new Scene1(this, 6, 2);
//      Scene1* scene6_3 = new Scene1(this, 6, 3);

//      Scene1* scene7 = new Scene1(this, 7, 1);
//      Scene1* scene8 = new Scene1(this, 8, 1);
//      Scene1* scene9 = new Scene1(this, 9, 1);

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
        switch (sceneIndex) {
            case 1:
                scene1->startscene();
                break;
            case 12:
                scene1_2->startscene();
                break;
//             case 2:
//                 scene2->startscene();
//                 break;
//             case 3:
//                 scene3->startscene();
//                 scene3->setVisible(sceneIndex == 3);
//                 break;
//             case 32:
//                 scene3_2->startscene();
//                 scene3_2->setVisible(sceneIndex == 32);
//                 break;
//             // case 333:
//             //     scene3_game->startscene();
//             //     scene3_game->setVisible(sceneIndex == 333);
//             //     break;
//             case 4:
//                 scene4->startscene();
//                 scene4->setVisible(sceneIndex == 4);
//                 break;
//             case 42:
//                 scene4_2->startscene();
//                 scene4_2->setVisible(sceneIndex == 42);
//                 break;
// //            case 444:
// //                scene4_game->startscene();
// //                scene4_game->setVisible(sceneIndex == 444);
// //                break;
//             case 5:
//                 scene5->startscene();
//                 scene5->setVisible(sceneIndex == 5);
//                 break;
//             case 52:
//                 scene5_2->startscene();
//                 scene5_2->setVisible(sceneIndex == 52);
//                 break;
//             case 53:
//                 scene5_3->startscene();
//                 scene5_3->setVisible(sceneIndex == 53);
//                 break;
//             case 54:
//                 scene5_4->startscene();
//                 scene5_4->setVisible(sceneIndex == 54);
//                 break;
//             case 55:
//                 scene5_5->startscene();
//                 scene5_5->setVisible(sceneIndex == 55);
//                 break;
//             case 6:
//                 scene6->startscene();
//                 scene6->setVisible(sceneIndex == 6);
//                 break;
//             case 62:
//                 scene6_2->startscene();
//                 scene6_2->setVisible(sceneIndex == 62);
//                 break;
//             case 63:
//                 scene6_3->startscene();
//                 scene6_3->setVisible(sceneIndex == 63);
//                 break;
//             case 7:
//                 scene7->startscene();
//                 scene7->setVisible(sceneIndex == 7);
//                 break;
//             case 8:
//                 scene8->startscene();
//                 scene8->setVisible(sceneIndex == 8);
//                 break;
//             case 9:
//                 scene9->startscene();
//                 scene9->setVisible(sceneIndex == 9);
//                 break;
            default:
                // Handle other cases if needed
                break;
        }
    }
private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
