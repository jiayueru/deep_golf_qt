#include "scene1.h"
#include "dialog.h"

Scene1::Scene1(QWidget *parent, int id_, int caseid_) : QWidget(parent)
{
    id= id_;
    caseid = caseid_;
    this->setFixedSize(800, 600);
    startscene();
}
/*最后再加入进来*/
//void other(){
//    showlion();
//    showtalk();
//    button = new QPushButton("Go to Scene 2", this);
//    connect(button, &QPushButton::clicked, this, &Scene1::goToScene2);
//}

void Scene1::startscene(){
    /*根据id加载背景图片*/
    QLabel*scene = new QLabel();
    scene->setGeometry(0, 0, 800, 600);
    QPixmap a;
    QString str =QString(":/front/BG_new/BG%1.png").arg(id);
    a.load(str);
    QPixmap B = a.scaled(800, 600, Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
    scene->setPixmap(B);
    scene->setParent(this);
    /*显示对话内容*/
    showlion();
    if(id==3 && caseid==2){
        QPushButton *tryCardButton = new QPushButton("A:继续尝试校园卡", this);
        // connect(tryCardButton, &QPushButton::clicked, this, &YourClass::tryCardButtonClicked);
        QPushButton *knockDoorButton = new QPushButton("B:敲击大门", this);
        // connect(knockDoorButton, &QPushButton::clicked, this, &YourClass::knockDoorButtonClicked);
        QPushButton *seeButton = new QPushButton("C:观察读卡器", this);
        tryCardButton->move(210, 530);
        knockDoorButton->move(350, 530);
        seeButton->move(450, 530);
        int sceneIndex = 4;
        // connect(seeButton, &QPushButton::clicked, this, [parent, 4]() {parent->switchToScene(4);});
    }
    else if(id==4 && caseid==2){
        QPushButton *tryCardButton = new QPushButton("A:回忆起“不要独自停留在本科生宿舍区的自行车棚下”的守则，迅速离开。", this);
        // connect(tryCardButton, &QPushButton::clicked, this, &YourClass::tryCardButtonClicked);
        QPushButton *knockDoorButton = new QPushButton("B:或许这张纸片上蕴含着新的信息？", this);
        // connect(knockDoorButton, &QPushButton::clicked, this, &YourClass::knockDoorButtonClicked);
        tryCardButton->move(210, 520);
        knockDoorButton->move(300, 550);
        int sceneIndex = 4;
        // connect(seeButton, &QPushButton::clicked, this, [parent, 4]() {parent->switchToScene(4);});
    }
    /*5:餐车*/
    else if(id==5 && caseid==2){
        QPushButton *tryCardButton = new QPushButton("A:有身着工作服人员的餐车", this);
        // connect(tryCardButton, &QPushButton::clicked, this, &YourClass::tryCardButtonClicked);
        QPushButton *knockDoorButton = new QPushButton("B:无人值班的全家", this);
        // connect(knockDoorButton, &QPushButton::clicked, this, &YourClass::knockDoorButtonClicked);
        QPushButton *seeButton = new QPushButton("C:观察读卡器", this);
        tryCardButton->move(210, 530);
        knockDoorButton->move(350, 530);
        seeButton->move(450, 530);
        // connect(seeButton, &QPushButton::clicked, this, &MainWindow::switchToScene);
    }
    else if(id==5 && caseid==4){
        QPushButton *tryCardButton = new QPushButton("A:多一事不如少一事，直奔程设课堂", this);
        // connect(tryCardButton, &QPushButton::clicked, this, &YourClass::tryCardButtonClicked);
        QPushButton *knockDoorButton = new QPushButton("B:求帮助", this);
        tryCardButton->move(210, 530);
        knockDoorButton->move(450, 530);
        int sceneIndex = 4;
        // connect(seeButton, &QPushButton::clicked, this, [parent, 4]() {parent->switchToScene(4);});
    }
    else if(id==6 && caseid==2){
        QPushButton *tryCardButton = new QPushButton("A:保持沉默并报以礼貌的微笑", this);
        // connect(tryCardButton, &QPushButton::clicked, this, &YourClass::tryCardButtonClicked);
        QPushButton *knockDoorButton = new QPushButton("B:“你说的对，但是不如原神。”", this);
        tryCardButton->move(210, 430);
        knockDoorButton->move(210, 480);
        QPushButton *seeButton = new QPushButton("C:“我大一绩点3.92，但是还有提升的空间。”", this);
        seeButton->move(210, 530);
        int sceneIndex = 4;
        // connect(seeButton, &QPushButton::clicked, this, [parent, 4]() {parent->switchToScene(4);});
    }
    dialogWidget = new DialogWidget(this, id, caseid);   
    dialogWidget->show();
}

int i1 =0;
void Scene1::showlion(){
    QLabel* dino =new QLabel();
    QTimer* timer1 =new QTimer();
    timer1->setInterval(1000); // 设置定时器间隔
    timer1->start(300);
    connect(timer1, &QTimer::timeout, [=](){
        QPixmap a;
        QString str =QString(":/front/images/speak%1.png").arg(i1);
        a.load(str);
        QPixmap B = a.scaled(200, 250, Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
        dino->setPixmap(B);
        dino->setGeometry(0, 0, B.width(), B.height());
        dino->setParent(this);
        dino->move(50, 200);
        dino->show();
        i1++;
        i1 = i1%2;
    });
}

/*显示纸条内容*/
void Scene1::showpaper(){
    QLabel*scene = new QLabel();
    scene->setGeometry(0, 0, 800, 600);
    QPixmap a;
    a.load(":/front/BG_new/BG10.png");
    QPixmap B = a.scaled(800, 600, Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
    scene->setPixmap(B);
    scene->setParent(this);
}

void Scene1::set_button(){
    /*加载制片按钮*/
    if(id==1 && caseid==1){
        int width =80,height = 80;
        QPushButton *button = new QPushButton(this);
        button->setIcon(QIcon(":front/images/paper1.png")); // 设置按钮图标
        button->setIconSize(QSize(width, height)); // 设置图标大小
        button->setFixedSize(width, height); // 设置按钮大小
        button->setFlat(true); // 设置按钮透明背景
        // 设置样式表
        QString styleSheet = "QPushButton {"
                             "border: none;" // 去掉边框
                             "background-color: transparent;" // 背景透明
                             "}";
        button->setStyleSheet(styleSheet);
    }
}


