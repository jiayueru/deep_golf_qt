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
    DialogWidget* dialogWidget;
    explicit Scene1(QWidget *parent = nullptr, int id_=1, int caseid_=1);
    void startscene();
    void showlion();
    void showpaper();
    void set_button();

signals:
    void scene1_finished();
    void goToScene2();

private:
    QPushButton *button;
};

#endif // SCENE1_H
