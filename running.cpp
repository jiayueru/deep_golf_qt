#include "running.h"
#include <QMainWindow>
#include <QLabel>
#include <QTimer>
#include <QPixmap>
#include <QDebug>
#include <QPropertyAnimation>
#include <QKeyEvent>

running::running(QWidget *parent) :
    QWidget(parent)
{
    this->setGeometry(0, 0, 800, 600);
    // start_game();
}

running::~running()
{
}

/*开始游戏*/
void running::start_game(){
    this-> grabKeyboard();
    pixmapshowd();
    pixmapshowg();
    
    pixmapshowt();
    score();
}

/*游戏主界面*/
void running::mainscene(){
    QLabel*scene = new QLabel();
    scene->setGeometry(0, 0, 800, 600);
    QPixmap a;
    a.load(":/front/images/black1.png");
    QPixmap B = a.scaled(800, 600, Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
    scene->setPixmap(B);
    scene->setParent(this);
}

/*狮子展示*/
int xx=0;
void running::pixmapshowd(){
    dino =new QLabel();
    timer1 =new QTimer();
    timer1->setInterval(1000); // 设置定时器间隔
    timer1->start(300);
    connect(timer1, &QTimer::timeout, [=](){
        QPixmap a;
        QString str =QString(":/front/images/run%1.png").arg(xx);
        a.load(str);
        QPixmap B = a.scaled(80, 90, Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
        dino->setPixmap(B);
        dino->setGeometry(0, 0, B.width(), B.height());
        dino->setParent(this);
        dino->move(200, 350);
        Dinosaur.setRect(200, 350, B.width(), B.height());
        dino->show();
        xx++;
        xx = xx%2;
    });
}

void running::judge(QRect r1, QRect r2){//判断是否会遇到障碍物
//    if(r1.intersects(r2)){
//        win = 1;
//        timer1->stop();
//        timer2->stop();
//        timer3->stop();
//        timer4->stop();
//        timer5->stop();
//        timer6->stop();
//        timer7->stop();
//        scoretimer->stop();
//    }
}

/*地面的展示*/
int kk=0;
static int k2=0;
void running::pixmapshowg(){
    QLabel*ground1 = new QLabel();
    QLabel*ground2 =new QLabel();
    QPixmap a, b;

    a.load(":/front/images/bg11.png");
    a = a.scaled(800, 450, Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
    ground1->setPixmap(a);
    b.load(":/front/images/bg11.png");
    b = b.scaled(800, 450, Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
    ground2->setPixmap(b);
    timer4 =new QTimer();
    timer4->setInterval(1000);
    timer4->start(40);
    connect(timer4, &QTimer::timeout,[=](){
        ground1->setGeometry(k2-kk*5, 0, a.width(),a.height());
        ground1->setParent(this);
        ground1->show();
        ground2->setGeometry(k2-kk*5+800, 0, a.width(),a.height());
        ground2->setParent(this);
        ground2->show();
        if(k2-kk*5<=-800){
            k2+=800;
        }
        kk++;
    });
}

/*书的移动, 这里有一个bug死活改不好气死我了*/
std::vector<int>ll;
void running::treerun(int y, int count){
    QPixmap *a = new QPixmap();
    QLabel *tree = new QLabel();
    QString str = QString(":/front/images/book01.png");
    a->load(str);
    *a = a->scaled(40, 50, Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
    timer5 = new QTimer();
    timer5->setInterval(1000);
    tree->hide();
    tree->setPixmap(*a);
    tree->setParent(this);
    timer5->start(40);
    connect(timer5, &QTimer::timeout, [=](){
        if(win==0){
            if(y%4==2){
                tree->setGeometry(y-ll[count]*5+800, 390, a->width(), a->height());
                tree->show();
                QRect Tree(y-ll[count]*5+800+a->width(), 390+40, a->width(), a->height());
                this->judge(Tree, Dinosaur);
                ll[count]++;
            }
//            else{
//                tree->setGeometry(y-ll[count]*5+800, 390, a->width(), a->height());
//                tree->show();
//                QRect Tree(y-ll[count]*5+800+a->width()*0.25, 390,a->width()*0.5, a->height());
//                this->judge(Tree, Dinosaur);
//                ll[count]++;
//            }
        }
    });
}
/*书的刷新*/
int xcount = 0;
void running::pixmapshowt(){
    QTimer* timer6 = new QTimer();
    timer6->setInterval(1000);
    timer6->start(1000);
    connect(timer6, &QTimer::timeout, [=](){
        ll.push_back(0);
        int y=rand()%100;
        this->treerun(y, xcount);
        xcount++;
    });
}

/*上下跳跃的动画*/

void running::djump(QLabel* jump){
    QPropertyAnimation*animation1 = new QPropertyAnimation(jump, "geometry");
    animation1->setDuration(600);
    animation1->setStartValue(QRect(200, 350, jump->width(), jump->height()));
    animation1->setEndValue(QRect(200, 350-100, jump->width(), jump->height()));
    animation1->start();
    isanimation=1;
    Dinosaur.setRect(200, 350-100, jump->width(), jump->height());
}
void running::ddown(QLabel* jump){
    QPropertyAnimation*animation1 = new QPropertyAnimation(jump, "geometry");
    animation1->setDuration(600);
    animation1->setStartValue(QRect(200, 350-100, jump->width(), jump->height()));
    animation1->setEndValue(QRect(200, 350, jump->width(), jump->height()));
    animation1->start();
    isanimation=1;
//    Dinosaur.setRect(200, 350, jump->width(), jump->height());
}

/*向上跳跃的判定*/
void running::keyPressEvent(QKeyEvent * event){
    if(win==1 || isanimation==1){
        return;
    }
    else{
        QKeyEvent*key = (QKeyEvent*)event;
        jump =new QLabel();
        QPixmap a;
        a.load(":/front/images/run1.png");
        QPixmap B = a.scaled(80, 90, Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
        jump->setPixmap(B);
        jump->setParent(this);
        jump->setGeometry(200, 350, B.width(), B.height());
        if(key->key()==Qt::Key_Up){
            qDebug() << "hello";
            dino->hide();
            timer1->stop();
            jump->show();
            this->djump(jump);
            QTimer::singleShot(600, this, [=](){this->ddown(jump);});
            QTimer::singleShot(1200, this, [=](){jump->hide();});
            QTimer::singleShot(1200, this, [=](){
                isanimation=0;
                timer1->start();
                dino->show();
                Dinosaur.setRect(200, 350, jump->width(), jump->height());
            });
        }
    }
}


/*分数计时器*/
void running::score(){
    mainscene();
    scoretimer=new QTimer();
    scoretimer->start(600);
    QLabel* score=new QLabel();
    score->setParent(this);
    score->raise();
    score->setGeometry(400-100, 500, 200, 200);
    score->setFont(QFont("Times New Roman", 18)); // 设置字体为Times New Roman，字号为12
    score->setStyleSheet("color: white;"); // 设置字体颜色为白色
    score->setAlignment(Qt::AlignHCenter);
    score->setText("YOUR SCORE:0"); // 设置文本内容为"Your Score: 0"
    connect(scoretimer, &QTimer::timeout,[=]{
        QString str = QString("YOUR SCORE:%1").arg(running::num);
        score->setText(str);
        running::num += 1;
        if(num>30){
            QString str = QString("WIN!!!");
            score->setText(str);
            this->releaseKeyboard();
            emit gameFinished();
        }
        score->show();
    });
}
