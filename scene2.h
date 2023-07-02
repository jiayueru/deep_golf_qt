#ifndef SCENE2_H
#define SCENE2_H

#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QTimer>
#include <QPixmap>
#include <QDebug>
#include <QPropertyAnimation>
#include <QKeyEvent>

class Scene2 : public QWidget
{
    Q_OBJECT
public:
    explicit Scene2(QWidget *parent = nullptr);
    void startscene();
signals:
    void goToScene1();

private:
    QPushButton *button;
};

#endif // SCENE2_H
