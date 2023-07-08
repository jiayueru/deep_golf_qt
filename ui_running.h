/********************************************************************************
** Form generated from reading UI file 'running.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RUNNING_H
#define UI_RUNNING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_running
{
public:

    void setupUi(QWidget *running)
    {
        if (running->objectName().isEmpty())
            running->setObjectName("running");
        running->resize(400, 300);

        retranslateUi(running);

        QMetaObject::connectSlotsByName(running);
    } // setupUi

    void retranslateUi(QWidget *running)
    {
        running->setWindowTitle(QCoreApplication::translate("running", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class running: public Ui_running {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RUNNING_H
