/********************************************************************************
** Form generated from reading UI file 'game2048.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAME2048_H
#define UI_GAME2048_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_game2048
{
public:
    QWidget *gridWidget;
    QGridLayout *gridLayout;
    QLabel *block_1;
    QLabel *block_6;
    QLabel *block_21;
    QLabel *block_17;
    QLabel *block_10;
    QLabel *block_20;
    QLabel *block_2;
    QLabel *block_25;
    QLabel *block_5;
    QLabel *block_8;
    QLabel *block_7;
    QLabel *block_13;
    QLabel *block_18;
    QLabel *block_16;
    QLabel *block_22;
    QLabel *block_24;
    QLabel *block_15;
    QLabel *block_19;
    QLabel *block_11;
    QLabel *block_14;
    QLabel *block_9;
    QLabel *block_4;
    QLabel *block_12;
    QLabel *block_3;
    QLabel *block_23;
    QLabel *label;
    QLabel *info_label;
    QPushButton *start_button;
    QLabel *res_label;
    QPushButton *next_button;
    QLabel *win_label;

    void setupUi(QWidget *game2048)
    {
        if (game2048->objectName().isEmpty())
            game2048->setObjectName("game2048");
        game2048->resize(800, 600);
        game2048->setStyleSheet(QString::fromUtf8(""));
        gridWidget = new QWidget(game2048);
        gridWidget->setObjectName("gridWidget");
        gridWidget->setGeometry(QRect(10, 100, 400, 400));
        gridWidget->setMaximumSize(QSize(16777211, 16777215));
        gridLayout = new QGridLayout(gridWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setHorizontalSpacing(4);
        block_1 = new QLabel(gridWidget);
        block_1->setObjectName("block_1");
        block_1->setMinimumSize(QSize(30, 30));
        QFont font;
        block_1->setFont(font);
        block_1->setContextMenuPolicy(Qt::DefaultContextMenu);
        block_1->setStyleSheet(QString::fromUtf8("background-color: #EEC22D; color: #776E65; font-size: 48px;"));
        block_1->setFrameShape(QFrame::NoFrame);
        block_1->setFrameShadow(QFrame::Raised);
        block_1->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(block_1, 0, 0, 1, 1);

        block_6 = new QLabel(gridWidget);
        block_6->setObjectName("block_6");
        block_6->setMinimumSize(QSize(30, 30));
        block_6->setFont(font);
        block_6->setContextMenuPolicy(Qt::DefaultContextMenu);
        block_6->setStyleSheet(QString::fromUtf8("background-color: #EEC22D; color: #776E65; font-size: 48px;"));
        block_6->setFrameShape(QFrame::NoFrame);
        block_6->setFrameShadow(QFrame::Raised);
        block_6->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(block_6, 1, 0, 1, 1);

        block_21 = new QLabel(gridWidget);
        block_21->setObjectName("block_21");
        block_21->setMinimumSize(QSize(30, 30));
        block_21->setFont(font);
        block_21->setContextMenuPolicy(Qt::DefaultContextMenu);
        block_21->setStyleSheet(QString::fromUtf8("background-color: #EEC22D; color: #776E65; font-size: 48px;"));
        block_21->setFrameShape(QFrame::NoFrame);
        block_21->setFrameShadow(QFrame::Raised);
        block_21->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(block_21, 4, 0, 1, 1);

        block_17 = new QLabel(gridWidget);
        block_17->setObjectName("block_17");
        block_17->setMinimumSize(QSize(30, 30));
        block_17->setFont(font);
        block_17->setContextMenuPolicy(Qt::DefaultContextMenu);
        block_17->setStyleSheet(QString::fromUtf8("background-color: #EEC22D; color: #776E65; font-size: 48px;"));
        block_17->setFrameShape(QFrame::NoFrame);
        block_17->setFrameShadow(QFrame::Raised);
        block_17->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(block_17, 3, 1, 1, 1);

        block_10 = new QLabel(gridWidget);
        block_10->setObjectName("block_10");
        block_10->setMinimumSize(QSize(30, 30));
        block_10->setFont(font);
        block_10->setContextMenuPolicy(Qt::DefaultContextMenu);
        block_10->setStyleSheet(QString::fromUtf8("background-color: #EEC22D; color: #776E65; font-size: 48px;"));
        block_10->setFrameShape(QFrame::NoFrame);
        block_10->setFrameShadow(QFrame::Raised);
        block_10->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(block_10, 1, 4, 1, 1);

        block_20 = new QLabel(gridWidget);
        block_20->setObjectName("block_20");
        block_20->setMinimumSize(QSize(30, 30));
        block_20->setFont(font);
        block_20->setContextMenuPolicy(Qt::DefaultContextMenu);
        block_20->setStyleSheet(QString::fromUtf8("background-color: #EEC22D; color: #776E65; font-size: 48px;"));
        block_20->setFrameShape(QFrame::NoFrame);
        block_20->setFrameShadow(QFrame::Raised);
        block_20->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(block_20, 3, 4, 1, 1);

        block_2 = new QLabel(gridWidget);
        block_2->setObjectName("block_2");
        block_2->setMinimumSize(QSize(30, 30));
        block_2->setFont(font);
        block_2->setContextMenuPolicy(Qt::DefaultContextMenu);
        block_2->setStyleSheet(QString::fromUtf8("background-color: #EEC22D; color: #776E65; font-size: 48px;"));
        block_2->setFrameShape(QFrame::NoFrame);
        block_2->setFrameShadow(QFrame::Raised);
        block_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(block_2, 0, 1, 1, 1);

        block_25 = new QLabel(gridWidget);
        block_25->setObjectName("block_25");
        block_25->setMinimumSize(QSize(30, 30));
        block_25->setFont(font);
        block_25->setContextMenuPolicy(Qt::DefaultContextMenu);
        block_25->setStyleSheet(QString::fromUtf8("background-color: #EEC22D; color: #776E65; font-size: 48px;"));
        block_25->setFrameShape(QFrame::NoFrame);
        block_25->setFrameShadow(QFrame::Raised);
        block_25->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(block_25, 4, 4, 1, 1);

        block_5 = new QLabel(gridWidget);
        block_5->setObjectName("block_5");
        block_5->setMinimumSize(QSize(30, 30));
        block_5->setFont(font);
        block_5->setContextMenuPolicy(Qt::DefaultContextMenu);
        block_5->setStyleSheet(QString::fromUtf8("background-color: #EEC22D; color: #776E65; font-size: 48px;"));
        block_5->setFrameShape(QFrame::NoFrame);
        block_5->setFrameShadow(QFrame::Raised);
        block_5->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(block_5, 0, 4, 1, 1);

        block_8 = new QLabel(gridWidget);
        block_8->setObjectName("block_8");
        block_8->setMinimumSize(QSize(30, 30));
        block_8->setFont(font);
        block_8->setContextMenuPolicy(Qt::DefaultContextMenu);
        block_8->setStyleSheet(QString::fromUtf8("background-color: #EEC22D; color: #776E65; font-size: 48px;"));
        block_8->setFrameShape(QFrame::NoFrame);
        block_8->setFrameShadow(QFrame::Raised);
        block_8->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(block_8, 1, 2, 1, 1);

        block_7 = new QLabel(gridWidget);
        block_7->setObjectName("block_7");
        block_7->setMinimumSize(QSize(30, 30));
        block_7->setFont(font);
        block_7->setContextMenuPolicy(Qt::DefaultContextMenu);
        block_7->setStyleSheet(QString::fromUtf8("background-color: #EEC22D; color: #776E65; font-size: 48px;"));
        block_7->setFrameShape(QFrame::NoFrame);
        block_7->setFrameShadow(QFrame::Raised);
        block_7->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(block_7, 1, 1, 1, 1);

        block_13 = new QLabel(gridWidget);
        block_13->setObjectName("block_13");
        block_13->setMinimumSize(QSize(30, 30));
        block_13->setFont(font);
        block_13->setContextMenuPolicy(Qt::DefaultContextMenu);
        block_13->setStyleSheet(QString::fromUtf8("background-color: #EEC22D; color: #776E65; font-size: 48px;"));
        block_13->setFrameShape(QFrame::NoFrame);
        block_13->setFrameShadow(QFrame::Raised);
        block_13->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(block_13, 2, 2, 1, 1);

        block_18 = new QLabel(gridWidget);
        block_18->setObjectName("block_18");
        block_18->setMinimumSize(QSize(30, 30));
        block_18->setFont(font);
        block_18->setContextMenuPolicy(Qt::DefaultContextMenu);
        block_18->setStyleSheet(QString::fromUtf8("background-color: #EEC22D; color: #776E65; font-size: 48px;"));
        block_18->setFrameShape(QFrame::NoFrame);
        block_18->setFrameShadow(QFrame::Raised);
        block_18->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(block_18, 3, 2, 1, 1);

        block_16 = new QLabel(gridWidget);
        block_16->setObjectName("block_16");
        block_16->setMinimumSize(QSize(30, 30));
        block_16->setFont(font);
        block_16->setContextMenuPolicy(Qt::DefaultContextMenu);
        block_16->setStyleSheet(QString::fromUtf8("background-color: #EEC22D; color: #776E65; font-size: 48px;"));
        block_16->setFrameShape(QFrame::NoFrame);
        block_16->setFrameShadow(QFrame::Raised);
        block_16->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(block_16, 3, 0, 1, 1);

        block_22 = new QLabel(gridWidget);
        block_22->setObjectName("block_22");
        block_22->setMinimumSize(QSize(30, 30));
        block_22->setFont(font);
        block_22->setContextMenuPolicy(Qt::DefaultContextMenu);
        block_22->setStyleSheet(QString::fromUtf8("background-color: #EEC22D; color: #776E65; font-size: 48px;"));
        block_22->setFrameShape(QFrame::NoFrame);
        block_22->setFrameShadow(QFrame::Raised);
        block_22->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(block_22, 4, 1, 1, 1);

        block_24 = new QLabel(gridWidget);
        block_24->setObjectName("block_24");
        block_24->setMinimumSize(QSize(30, 30));
        block_24->setFont(font);
        block_24->setContextMenuPolicy(Qt::DefaultContextMenu);
        block_24->setStyleSheet(QString::fromUtf8("background-color: #EEC22D; color: #776E65; font-size: 48px;"));
        block_24->setFrameShape(QFrame::NoFrame);
        block_24->setFrameShadow(QFrame::Raised);
        block_24->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(block_24, 4, 3, 1, 1);

        block_15 = new QLabel(gridWidget);
        block_15->setObjectName("block_15");
        block_15->setMinimumSize(QSize(30, 30));
        block_15->setFont(font);
        block_15->setContextMenuPolicy(Qt::DefaultContextMenu);
        block_15->setStyleSheet(QString::fromUtf8("background-color: #EEC22D; color: #776E65; font-size: 48px;"));
        block_15->setFrameShape(QFrame::NoFrame);
        block_15->setFrameShadow(QFrame::Raised);
        block_15->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(block_15, 2, 4, 1, 1);

        block_19 = new QLabel(gridWidget);
        block_19->setObjectName("block_19");
        block_19->setMinimumSize(QSize(30, 30));
        block_19->setFont(font);
        block_19->setContextMenuPolicy(Qt::DefaultContextMenu);
        block_19->setStyleSheet(QString::fromUtf8("background-color: #EEC22D; color: #776E65; font-size: 48px;"));
        block_19->setFrameShape(QFrame::NoFrame);
        block_19->setFrameShadow(QFrame::Raised);
        block_19->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(block_19, 3, 3, 1, 1);

        block_11 = new QLabel(gridWidget);
        block_11->setObjectName("block_11");
        block_11->setMinimumSize(QSize(30, 30));
        block_11->setFont(font);
        block_11->setContextMenuPolicy(Qt::DefaultContextMenu);
        block_11->setStyleSheet(QString::fromUtf8("background-color: #EEC22D; color: #776E65; font-size: 48px;"));
        block_11->setFrameShape(QFrame::NoFrame);
        block_11->setFrameShadow(QFrame::Raised);
        block_11->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(block_11, 2, 0, 1, 1);

        block_14 = new QLabel(gridWidget);
        block_14->setObjectName("block_14");
        block_14->setMinimumSize(QSize(30, 30));
        block_14->setFont(font);
        block_14->setContextMenuPolicy(Qt::DefaultContextMenu);
        block_14->setStyleSheet(QString::fromUtf8("background-color: #EEC22D; color: #776E65; font-size: 48px;"));
        block_14->setFrameShape(QFrame::NoFrame);
        block_14->setFrameShadow(QFrame::Raised);
        block_14->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(block_14, 2, 3, 1, 1);

        block_9 = new QLabel(gridWidget);
        block_9->setObjectName("block_9");
        block_9->setMinimumSize(QSize(30, 30));
        block_9->setFont(font);
        block_9->setContextMenuPolicy(Qt::DefaultContextMenu);
        block_9->setStyleSheet(QString::fromUtf8("background-color: #EEC22D; color: #776E65; font-size: 48px;"));
        block_9->setFrameShape(QFrame::NoFrame);
        block_9->setFrameShadow(QFrame::Raised);
        block_9->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(block_9, 1, 3, 1, 1);

        block_4 = new QLabel(gridWidget);
        block_4->setObjectName("block_4");
        block_4->setMinimumSize(QSize(30, 30));
        block_4->setFont(font);
        block_4->setContextMenuPolicy(Qt::DefaultContextMenu);
        block_4->setStyleSheet(QString::fromUtf8("background-color: #EEC22D; color: #776E65; font-size: 48px;"));
        block_4->setFrameShape(QFrame::NoFrame);
        block_4->setFrameShadow(QFrame::Raised);
        block_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(block_4, 0, 3, 1, 1);

        block_12 = new QLabel(gridWidget);
        block_12->setObjectName("block_12");
        block_12->setMinimumSize(QSize(30, 30));
        block_12->setFont(font);
        block_12->setContextMenuPolicy(Qt::DefaultContextMenu);
        block_12->setStyleSheet(QString::fromUtf8("background-color: #EEC22D; color: #776E65; font-size: 48px;"));
        block_12->setFrameShape(QFrame::NoFrame);
        block_12->setFrameShadow(QFrame::Raised);
        block_12->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(block_12, 2, 1, 1, 1);

        block_3 = new QLabel(gridWidget);
        block_3->setObjectName("block_3");
        block_3->setMinimumSize(QSize(30, 30));
        block_3->setFont(font);
        block_3->setContextMenuPolicy(Qt::DefaultContextMenu);
        block_3->setStyleSheet(QString::fromUtf8("background-color: #EEC22D; color: #776E65; font-size: 48px;"));
        block_3->setFrameShape(QFrame::NoFrame);
        block_3->setFrameShadow(QFrame::Raised);
        block_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(block_3, 0, 2, 1, 1);

        block_23 = new QLabel(gridWidget);
        block_23->setObjectName("block_23");
        block_23->setMinimumSize(QSize(30, 30));
        block_23->setFont(font);
        block_23->setContextMenuPolicy(Qt::DefaultContextMenu);
        block_23->setStyleSheet(QString::fromUtf8("background-color: #EEC22D; color: #776E65; font-size: 48px;"));
        block_23->setFrameShape(QFrame::NoFrame);
        block_23->setFrameShadow(QFrame::Raised);
        block_23->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(block_23, 4, 2, 1, 1);

        label = new QLabel(game2048);
        label->setObjectName("label");
        label->setGeometry(QRect(450, 40, 74, 53));
        label->setStyleSheet(QString::fromUtf8("background: rgb(48, 32, 0); \n"
"font: 12pt \"\345\215\216\346\226\207\347\220\245\347\217\200\";\n"
"color:rgb(255, 255, 255)"));
        label->setAlignment(Qt::AlignCenter);
        info_label = new QLabel(game2048);
        info_label->setObjectName("info_label");
        info_label->setGeometry(QRect(10, 40, 341, 61));
        info_label->setStyleSheet(QString::fromUtf8("background: rgb(48, 32, 0); \n"
"font: 12pt \"\345\215\216\346\226\207\347\220\245\347\217\200\";\n"
"color:rgb(255, 255, 255)"));
        info_label->setTextFormat(Qt::AutoText);
        info_label->setAlignment(Qt::AlignCenter);
        start_button = new QPushButton(game2048);
        start_button->setObjectName("start_button");
        start_button->setGeometry(QRect(450, 110, 71, 41));
        start_button->setStyleSheet(QString::fromUtf8("border-radius: 10px; /*\345\234\206\350\247\222\345\215\212\345\276\204*/background: rgb(48, 32, 0); \n"
"font: 12pt \"\345\215\216\346\226\207\347\220\245\347\217\200\";\n"
"color:rgb(255, 255, 255)"));
        res_label = new QLabel(game2048);
        res_label->setObjectName("res_label");
        res_label->setGeometry(QRect(450, 170, 161, 61));
        res_label->setStyleSheet(QString::fromUtf8("background: rgb(48, 32, 0); \n"
"font: 12pt \"\345\215\216\346\226\207\347\220\245\347\217\200\";\n"
"color:rgb(255, 255, 255)"));
        res_label->setAlignment(Qt::AlignCenter);
        next_button = new QPushButton(game2048);
        next_button->setObjectName("next_button");
        next_button->setGeometry(QRect(450, 420, 80, 18));
        win_label = new QLabel(game2048);
        win_label->setObjectName("win_label");
        win_label->setGeometry(QRect(450, 240, 64, 65));
        win_label->setMinimumSize(QSize(30, 30));
        win_label->setFont(font);
        win_label->setContextMenuPolicy(Qt::DefaultContextMenu);
        win_label->setStyleSheet(QString::fromUtf8("background-color:  qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(237, 227, 109, 101), stop:0.1 rgba(255, 249, 112, 186), stop:0.2 rgba(248, 255, 76, 167), stop:0.3 rgba(242, 255, 96, 179), stop:0.4 rgba(255, 247, 154, 232), stop:0.5 rgba(240, 255, 76, 205), stop:0.52 rgba(255, 255, 154, 228), stop:0.6 rgba(246, 255, 149, 220), stop:1 rgba(255, 255, 255, 0)); color: #776E65; font-size: 48px;"));
        win_label->setFrameShape(QFrame::NoFrame);
        win_label->setFrameShadow(QFrame::Raised);
        win_label->setAlignment(Qt::AlignCenter);
        QWidget::setTabOrder(start_button, next_button);

        retranslateUi(game2048);

        QMetaObject::connectSlotsByName(game2048);
    } // setupUi

    void retranslateUi(QWidget *game2048)
    {
        game2048->setWindowTitle(QCoreApplication::translate("game2048", "game2048", nullptr));
        block_1->setText(QCoreApplication::translate("game2048", "1", nullptr));
        block_6->setText(QCoreApplication::translate("game2048", "1", nullptr));
        block_21->setText(QCoreApplication::translate("game2048", "1", nullptr));
        block_17->setText(QCoreApplication::translate("game2048", "1", nullptr));
        block_10->setText(QCoreApplication::translate("game2048", "1", nullptr));
        block_20->setText(QCoreApplication::translate("game2048", "1", nullptr));
        block_2->setText(QCoreApplication::translate("game2048", "1", nullptr));
        block_25->setText(QCoreApplication::translate("game2048", "1", nullptr));
        block_5->setText(QCoreApplication::translate("game2048", "1", nullptr));
        block_8->setText(QCoreApplication::translate("game2048", "1", nullptr));
        block_7->setText(QCoreApplication::translate("game2048", "1", nullptr));
        block_13->setText(QCoreApplication::translate("game2048", "1", nullptr));
        block_18->setText(QCoreApplication::translate("game2048", "1", nullptr));
        block_16->setText(QCoreApplication::translate("game2048", "1", nullptr));
        block_22->setText(QCoreApplication::translate("game2048", "1", nullptr));
        block_24->setText(QCoreApplication::translate("game2048", "1", nullptr));
        block_15->setText(QCoreApplication::translate("game2048", "1", nullptr));
        block_19->setText(QCoreApplication::translate("game2048", "1", nullptr));
        block_11->setText(QCoreApplication::translate("game2048", "1", nullptr));
        block_14->setText(QCoreApplication::translate("game2048", "1", nullptr));
        block_9->setText(QCoreApplication::translate("game2048", "1", nullptr));
        block_4->setText(QCoreApplication::translate("game2048", "1", nullptr));
        block_12->setText(QCoreApplication::translate("game2048", "1", nullptr));
        block_3->setText(QCoreApplication::translate("game2048", "1", nullptr));
        block_23->setText(QCoreApplication::translate("game2048", "1", nullptr));
        label->setText(QCoreApplication::translate("game2048", "\345\276\227\345\210\206:0", nullptr));
        info_label->setText(QCoreApplication::translate("game2048", "<html><head/><body><p align=\"center\">\350\257\267\345\220\210\346\210\220\344\275\240\347\232\204\346\255\246\345\231\250!</p></body></html>", nullptr));
        start_button->setText(QCoreApplication::translate("game2048", "\345\274\200\345\247\213\346\270\270\346\210\217", nullptr));
        res_label->setText(QString());
        next_button->setText(QCoreApplication::translate("game2048", "\347\273\247\347\273\255", nullptr));
        win_label->setText(QCoreApplication::translate("game2048", "1", nullptr));
    } // retranslateUi

};

namespace Ui {
    class game2048: public Ui_game2048 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAME2048_H
