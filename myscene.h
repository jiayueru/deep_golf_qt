#ifndef MYSCENE_H
#define MYSCENE_H

#include <QMainWindow>


QT_BEGIN_NAMESPACE
namespace Ui { class MyScene; }
QT_END_NAMESPACE

class MyScene : public QMainWindow
{
    Q_OBJECT
public:
    explicit MyScene(QWidget *parent = nullptr);
    void mainscene();


signals:

};

#endif // MYSCENE_H
