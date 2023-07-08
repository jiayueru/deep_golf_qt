#ifndef GAME2048_H
#define GAME2048_H

#include <QWidget>
#include<QLabel>
#include <QVBoxLayout>
#include<QGraphicsView>
#include<QPushButton>
#include<QMessageBox>
#include<QMap>
#include<QPropertyAnimation>

QT_BEGIN_NAMESPACE
namespace Ui { class game2048; }
QT_END_NAMESPACE

class game2048 : public QWidget
{
    Q_OBJECT

public:
    game2048(QWidget *parent = nullptr,int type=1);
    ~game2048();
    void init();
    void addone();
private:
    int call_num;
    Ui::game2048 *ui;
    QGraphicsView* board2048;
    int** board;
    QGridLayout *layout;
    QLabel* boardblock[25];
    int boardlen =5;
    void keyPressEvent(QKeyEvent *);
    int score;
    void move_up();
    void up();
    void down();
    void left();
    void right();
    void flush();
    bool judge();

    bool has_res=false;
    QMessageBox* info_success;
    QMessageBox* info_fail;
    QLabel* win_label;
    QImage *imgs[6];
    QPropertyAnimation* win_animation;
    private slots:
        void on_start_button_clicked();
        void on_next_button_clicked();

signals:
    void gameFinished();

};

#endif // GAME2048_H
