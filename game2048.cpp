#include "game2048.h"
#include "ui_game2048.h"
#include <QKeyEvent>
#include<iostream>
#include<QDir>

game2048::game2048(QWidget *parent,int type)
    : QWidget(parent)
    , ui(new Ui::game2048)
{

    ui->setupUi(this);
    resize(800,600);
    call_num=type;//1,2
    win_animation=new QPropertyAnimation();
    board=new int* [boardlen];
    win_label=ui->win_label;
    win_label->setVisible(false);
    for(int i=0;i<boardlen*boardlen;i++){
        boardblock[i]=findChild<QLabel*>("block_"+QString::number(i+1));
        boardblock[i]->setScaledContents(true);
        //boardblock[i]->resize(70,60);
        boardblock[i]->setMinimumSize(70,70);
        boardblock[i]->setMaximumSize(70,70);
    }
    for(int i=0;i<boardlen;i++){
        board[i]=new int[boardlen];
    }
    for(int i=0;i<boardlen;i++){
        for(int j=0;j<boardlen;j++){
            board[i][j]=0;
        }
    }
    for(int i=0;i<6;i++){
        imgs[i]=new QImage;
        QString filename=":/front/material/"+QString::number(call_num)+"_"+QString::number(i+1)+".png";
        imgs[i]->load(filename);
    }
    for(int i=1;i<=5;i++){
        QString name="block_std"+QString::number(i);
        QLabel* tmp=findChild<QLabel*>(name);
        tmp->setPixmap(QPixmap::fromImage(*imgs[i-1]));
        tmp->setScaledContents(true);
        tmp->setMinimumSize(80,80);
        tmp->setMaximumSize(80,80);
    }
    ui->res_label->setVisible(false);
    ui->next_button->setVisible(false);
    score=0;
    flush();
}

game2048::~game2048()
{
    for(int i=0;i<boardlen;i++){
        delete boardblock[i];
    }
    for(int i=0;i<5;i++)
        delete imgs[i];
    delete win_animation;
    delete ui;
    this->releaseKeyboard();
    emit gameFinished();
}

void game2048::addone(){
    bool space=false;
    for(int i=0;i<boardlen;i++){
        for(int j=0;j<boardlen;j++){
            if(board[i][j]==0)
                space=true;
        }
    }
    if(!space)
        return;
    int i,j;
    do{
        i=rand()%boardlen;
        j=rand()%boardlen;
    }while(board[i][j]!=0);
    int temp=(rand()%2+1)*2;
    board[i][j]=temp;
    //return true;
}
void game2048::flush(){
    for(int i=0;i<boardlen;i++){
        for(int j=0;j<boardlen;j++){
            if(board[i][j]!=0){
                int picID;
                switch(board[i][j]){
                case(2):{picID=1;break;}
                case(4):{picID=2;break;}
                case(8):{picID=3;break;}
                case(16):{picID=4;break;}
                case(32):{picID=5;break;}
                }
                picID-=1;
               // imgs[picID]->scaled(boardblock[i*boardlen+j]->size());
                boardblock[i*boardlen+j]->setPixmap(QPixmap::fromImage(*imgs[picID]));
                if(picID==4){
                    has_res=true;
                    win_label->setGeometry(boardblock[i*boardlen+j]->geometry());
                    win_label->setMaximumSize(1000,1000);
                    win_label->raise();
                    win_label->setVisible(true);
                    win_label->setPixmap(QPixmap::fromImage(*imgs[5]));
                    win_animation->setTargetObject(win_label);
                    //win_animation->setTargetObject( ui->res_label);
                    win_animation->setDuration(1000);
                    win_animation->setPropertyName("geometry");
                    win_animation->setStartValue(boardblock[i*boardlen+j]->geometry());
                    win_animation->setEasingCurve(QEasingCurve::Linear);
                    win_animation->setEndValue(QRect(QPoint(10, 100)
                                                   ,QSize(400,400)));
                    win_animation->start();

                    ui->res_label->setText("通过！请进入下一关");
                    ui->res_label->setVisible(true);
                    ui->next_button->setVisible(true);
                }
                //emit gameFinished();
            }
            else
                boardblock[i*boardlen+j]->setPixmap(QPixmap(""));
        }
    }
    ui->label->setText("得分:"+QString::number(score));
    if(judge()){
    }else{
        ui->res_label->setText("失败，请再次尝试");
        ui->res_label->setVisible(true);
    }
}

void game2048::move_up(){
    for(int j=0;j<boardlen;j++){
        int k=0;
        for(int i=0;i<boardlen;i++){
            if(board[i][j]!=0){
                if(k!=i){
                    board[k][j]=board[i][j];
                    board[i][j]=0;
                }
                k++;
            }
        }
    }
    for(int j=0;j<boardlen;j++){
        for(int i=0;i<boardlen-1;i++){
            if(board[i][j]==board[i+1][j]&&board[i][j]!=0){
                score+=board[i][j];
                board[i][j]*=2;
                board[i+1][j]=0;
            }
        }
    }
    for(int j=0;j<boardlen;j++){
        int k=0;
        for(int i=0;i<boardlen;i++){
            if(board[i][j]!=0){
                if(k!=i){
                    board[k][j]=board[i][j];
                    board[i][j]=0;
                }
                k++;
            }
        }
    }
}
void game2048::down(){
    for(int j=0;j<boardlen;j++){
        for(int i=0;i<boardlen/2;i++){
            int tmp=board[i][j];
            board[i][j]=board[boardlen-1-i][j];
            board[boardlen-1-i][j]=tmp;
        }
    }
    for(int i=0;i<boardlen;i++){
        for(int j=0;j<boardlen;j++){
            if(board[i][j]!=0){
                qDebug()<<i<<" "<<j<<" :"<<board[i][j];
            }
        }
    }
    move_up();
    for(int j=0;j<boardlen;j++){
        for(int i=0;i<boardlen/2;i++){
            int tmp=board[i][j];
            board[i][j]=board[boardlen-1-i][j];
            board[boardlen-1-i][j]=tmp;
        }
    }
    for(int i=0;i<boardlen;i++){
        for(int j=0;j<boardlen;j++){
            if(board[i][j]!=0){
                qDebug()<<i<<" "<<j<<" :"<<board[i][j];
            }
        }
    }
    addone();
    flush();
}
void game2048::right(){
    int tmp[boardlen][boardlen];
    for(int i=0;i<boardlen;i++){
        for(int j=0;j<boardlen;j++){
            tmp[i][j]=board[j][boardlen-1-i];
        }
    }
    for(int i=0;i<boardlen;i++){
        for(int j=0;j<boardlen;j++){
            board[i][j]=tmp[i][j];
        }
    }
    move_up();
    for(int i=0;i<boardlen;i++){
        for(int j=0;j<boardlen;j++){
            tmp[i][j]=board[boardlen-1-j][i];
        }
    }
    for(int i=0;i<boardlen;i++){
        for(int j=0;j<boardlen;j++){
            board[i][j]=tmp[i][j];
        }
    }
    addone();
    flush();
}
void game2048::left(){
    int tmp[boardlen][boardlen];
    for(int i=0;i<boardlen;i++){
        for(int j=0;j<boardlen;j++){
            tmp[i][j]=board[boardlen-1-j][i];
        }
    }
    for(int i=0;i<boardlen;i++){
        for(int j=0;j<boardlen;j++){
            board[i][j]=tmp[i][j];
           // debugString+=QString::number(board[i][j])+" ";
        }
       // debugString+="\n";
    }
    move_up();
    for(int i=0;i<boardlen;i++){
        for(int j=0;j<boardlen;j++){
            tmp[i][j]=board[j][boardlen-1-i];
        }
    }
    for(int i=0;i<boardlen;i++){
        for(int j=0;j<boardlen;j++){
            board[i][j]=tmp[i][j];
          // debugString+=QString::number(board[i][j])+" ";
        }
       // debugString+="\n";
    }
    //qDebug()<<debugString;
    addone();
    flush();
}
void game2048::up(){
    move_up();
    addone();
    flush();
}
void game2048::init(){
    score=0;
    for(int i=0;i<boardlen;i++){
        for(int j=0;j<boardlen;j++){
            board[i][j]=0;
        }
    }
    addone();
    addone();
    ui->res_label->setVisible(false);
    flush();
   // setLayout(layout);
}

void game2048::on_start_button_clicked()
{
    this->grabKeyboard();
    init();
}
void game2048::keyPressEvent(QKeyEvent *e)
{
    if(has_res)
        return;
    switch (e->key())
    {
    case Qt::Key_Up:up();break;
    case Qt::Key_Down :down(); break;
    case Qt::Key_Left : left(); break;
    case Qt::Key_Right : right();break;
    }
}
bool game2048::judge(){
    if(score>=500){
        return true;
        has_res=true;
    }
    else{
        for(int i=0;i<boardlen;i++){
            for(int j=0;j<boardlen;j++){
                if(board[i][j]==0)
                    return true;
            }
        }
        for(int i=0;i<boardlen-1;i++){
            for(int j=0;j<boardlen;j++){
                if(board[i][j]==board[i+1][j])
                    return true;
            }
        }
        for(int i=0;i<boardlen;i++){
            for(int j=0;j<boardlen-1;j++){
                if(board[i][j]==board[i][j+1])
                    return true;
            }
        }
        has_res=true;
        return false;
    }
}
void game2048::on_next_button_clicked()
{
    emit gameFinished();
}
