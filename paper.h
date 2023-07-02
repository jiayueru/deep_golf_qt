#ifndef PAPER_H
#define PAPER_H

#include <QWidget>

class paper
{
public:
    int paper_id;
    paper(int id);
    void show_paper();

signals:
    void paperFinished();
protected:
    void mousePressEvent(QMouseEvent *event);
};

#endif // PAPER_H
