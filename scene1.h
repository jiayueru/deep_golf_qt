#ifndef SCENE1_H
#define SCENE1_H

#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QTimer>
#include <QPixmap>
#include <QDebug>
#include <QPropertyAnimation>
#include <QKeyEvent>
#include "dialog.h"

class Scene1 : public QWidget
{
    Q_OBJECT
public:
    int id=1;
    int caseid=1;
    bool have_paper=false;
    int paper_loc_x;
    int paper_loc_y;
    DialogWidget* dialogWidget;
    QLabel* dino =new QLabel();
    QTimer* timer1 =new QTimer();
    explicit Scene1(QWidget *parent = nullptr, int id_=1, int caseid_=1,int paper_x=-1,int paper_y=-1,int paper_idx=-1);
    void startscene();
    void showlion();
    void set_button();
    void mousePressEvent(QMouseEvent *event) override;
protected slots:
    void showpaper();
    void hidepaper();


signals:
    void goToScene2();

private:
    QPushButton *openbutton;
    QPushButton *closebutton;
    QLabel*paper;
    int paperIdx;
    ~Scene1();
};

#endif // SCENE1_H
