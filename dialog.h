#ifndef DIALOGWIDGET_H
#define DIALOGWIDGET_H

#include <QWidget>
#include <QPainter>
#include <QMouseEvent>
#include <QLabel>

class DialogWidget : public QWidget
{
    Q_OBJECT
public:
    int id=1;//表示第id个场景:1-8
    int caseid =1;//表示第几段对话
    QLabel* label;
    explicit DialogWidget(QWidget *parent = nullptr, int id_= 1, int caseid_=1);
    void put_text();
    void go_next();


signals:
    void dialogFinished();
protected:
    void paintEvent(QPaintEvent *event) override;
    //void mousePressEvent(QMouseEvent *event) override;


private:
    QStringList dialogTexts;
    int currentDialogIndex;
};

#endif // DIALOGWIDGET_H
