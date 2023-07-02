#include "myscene.h"
#include "ui_mywindow.h"
#include <QLabel>
#include <QTimer>
#include <QPixmap>
#include <QDebug>
#include <QPropertyAnimation>
#include <QKeyEvent>

MyScene::MyScene(QWidget *parent)
    : QMainWindow{parent}
    , ui(new Ui::MyWindow)
{
    ui->setupUi(this);
    this->setFixedSize(1165, 400);
}
