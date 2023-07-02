#include "scene1.h"
#include "dialog.h"

Scene1::Scene1(QWidget *parent, int id_, int caseid_,int paper_x,int paper_y,int paper_idx) : QWidget(parent)
{
    id= id_;
    paperIdx=paper_idx;
    caseid = caseid_;
    this->setFixedSize(800, 600);
    have_paper=(paper_x!=-1&&paper_y!=-1);
    paper_loc_x=paper_x;
    paper_loc_y=paper_y;
    paper=nullptr;
    closebutton=nullptr;
    openbutton=nullptr;
    startscene();
}
Scene1::~Scene1(){
    if(paper)
        delete paper;
    if(openbutton)
        delete openbutton;
    if(closebutton)
        delete closebutton;
    delete dialogWidget;
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
    if(have_paper)
        set_button();
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
void Scene1::mousePressEvent(QMouseEvent *event){
    if (event->button() == Qt::LeftButton) {
        // 获取鼠标点击的位置
        QPoint pos = event->pos();
        // 判断是否点击了按钮
        if (openbutton && openbutton->geometry().contains(pos)) {
            showpaper();
        }
        else if(closebutton&&closebutton->geometry().contains(pos)){
            hidepaper();
        }
        else{
            dialogWidget->go_next();
        }
    }
}

/*显示纸条内容*/

void Scene1::showpaper(){
    if(!paper){
        paper = new QLabel();
        paper->setGeometry(20, 20, 600, 600);
        QPixmap a;
        a.load(QString(":/front/images/list_%1.png").arg(paperIdx));
        paper->setParent(this);
        QPixmap B = a.scaled(600, 600, Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
        paper->setPixmap(B);
        paper->setParent(this);
        paper->show();

        closebutton=new QPushButton();
        closebutton->setParent(this);
        closebutton->setText("返回");
        closebutton->setGeometry(520,60,40,40);
        QString styleSheet = "QPushButton {"
                             "border: none;" // 去掉边框
                             "background-color: transparent;" // 背景透明
                             "}";
        closebutton->setStyleSheet(styleSheet);
        connect(closebutton,SIGNAL(clicked()),this,SLOT(hidepaper()));
        closebutton->show();
    }else{
        paper->show();
        closebutton->show();
    }
}
void Scene1::hidepaper(){
    paper->hide();
    closebutton->hide();
}

void Scene1::set_button(){
    /*加载制片按钮*/
        int width =40,height = 40;
        openbutton = new QPushButton(this);
        openbutton->setIcon(QIcon(":front/images/paper1.png")); // 设置按钮图标
        openbutton->setIconSize(QSize(width, height)); // 设置图标大小
        //button->setFixedSize(width, height); // 设置按钮大小
        openbutton->setFlat(true); // 设置按钮透明背景
        openbutton->setGeometry(paper_loc_x,paper_loc_y,width,height);
        // 设置样式表
        QString styleSheet = "QPushButton {"
                             "border: none;" // 去掉边框
                             "background-color: transparent;" // 背景透明
                             "}";
        openbutton->setStyleSheet(styleSheet);
}


