#include "dialog.h"
DialogWidget::DialogWidget(QWidget *parent, int id_, int case_)
    : QWidget(parent)
{
    id = id_; //设置对话的id
    caseid = case_;
    setFixedSize(800, 600); // 对话显示部件的固定大小
    // 对话内容
    put_text(); //根据不同的Id加载不同的对话内容
    currentDialogIndex = 0;
    label = new QLabel(this);
    // 设置鼠标跟踪
    //setMouseTracking(true);
}

void DialogWidget::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);
    painter.setFont(QFont("Microsoft YaHei", 14, QFont::Bold));
    // Adjust the text position
    QFontMetrics fontMetrics(painter.font());
    int textHeight = fontMetrics.height();
    int textWidth = fontMetrics.horizontalAdvance(dialogTexts[currentDialogIndex]);
    int textX = (width() - textWidth) / 2;  // Center horizontally
    int textY = height() - 100 - textHeight; // Position near the bottom
    QRect textRect(textX, textY, textWidth, textHeight);
    painter.drawText(textRect, Qt::AlignCenter, dialogTexts[currentDialogIndex]);
}


//void DialogWidget::mousePressEvent(QMouseEvent *event)
//{
//    if (event->button() == Qt::LeftButton)
//    {

//            if (currentDialogIndex < dialogTexts.size()-1) {
//                // 切换下一句对话
//                currentDialogIndex++;
//                update(); // 更新绘制
//            }
//            else {
//                // 对话结束，清空对话内容
//                dialogTexts.clear();
//                emit dialogFinished(); //发出对话结束的信号
//            }
//        event->accept();
//    }
//    else
//    {
//        event->ignore();
//    }
//}


 void DialogWidget::go_next(){
 //    qDebug() << "dialogTexts is empty:" << dialogTexts.isEmpty();
     if (this->currentDialogIndex < dialogTexts.size()-1) {
         // 切换下一句对话
         currentDialogIndex++;
         update(); // 更新绘制
     }
     else {
         // 对话结束，清空对话内容
         dialogTexts.clear();
         emit dialogFinished();
     }
 }

void DialogWidget::put_text(){
    /*场景1：宿舍*/
    if(id==1){
        if(caseid==1){
            dialogTexts << "周三清晨，你悠悠转醒，准备奔赴早十的程设课堂。";
            dialogTexts << "然而天色似乎出奇地暗，往常熟睡的室友也不知所踪，你感到一丝不对劲。";
            dialogTexts << "忽然，你发现了一张残缺不全的昏黄纸片，上面罗列着从未听说过的校园规则，";
            dialogTexts<<  "而这些规则，也正是你穿越校园，安全赶到程设课堂的关键。";
        }
        else if(caseid==2){
            dialogTexts << "“真是奇怪的纸条，莫不是谁的恶作剧罢。”";
            dialogTexts << "扫了眼手表，已是九点五十，程设开课前的第二十分钟。";
            dialogTexts << "没有什么能阻挡你来到程设的课堂。";
            dialogTexts << "你顾不得再思索纸条上的内容，稍作洗漱便走出了寝室。";
        }
    }
    /*left behid: 仅仅是为了调试*/
    else if(id==2){
        if(caseid==1){
            dialogTexts << "楼道的灯光暗得出奇，你简直要怀疑窗外又刮起了沙尘暴。";
            dialogTexts<<"突然，一只刺猬从脚边窜出——刺猬？你想起学长口中“刺猬姐”的故事。";
            dialogTexts<<"那是十几年前的学姐，违反校规在宿舍养了刺猬而又熬了汤的。";
            dialogTexts<<"刺猬汤的味道从六楼飘到一楼，成了一桩不大不小的校园奇闻。";
            dialogTexts<<"没人考据过故事的真实性，也没听说有谁真在宿舍养起了刺猬。";
            dialogTexts<<"可今天——那张古怪的纸片是不是也提到刺猬来着？";
        }
    }
    /*宿舍门口2048*/
    else if(id==3){
        if(caseid==1){
            dialogTexts << "你尝试用校园卡打开大门，读卡器却失灵了。";
            dialogTexts << "“但是在必要的时候，宿管会启动必要的措施，”";
            dialogTexts << "“此时您可能需要完成某项任务来打开宿舍的大门。”";
        }
        else if(caseid==2){
            dialogTexts << "脑海中回想起纸条上的话，你选择：";
        }
    }
    /*车棚*/
    else if(id==4){
        if(caseid==1){
            dialogTexts << "小小开锁游戏当然难不倒机智的攻城狮，你成功地打开了宿舍的大门。";
            dialogTexts << "门外不见人影，天色也根本不似早上十点。";
            dialogTexts << "黑沉沉的夜色吞没了一切形状，";
            dialogTexts << "几盏路灯把万物照成细长的影子。";
            dialogTexts << "这不是你所熟悉的那个燕园。";
        }
        else if(caseid==2){
            dialogTexts << "突然，地上一张似曾相识的昏黄纸片映入眼帘。你选择：";
            // dialogTexts << "纸条似乎是从哪里撕下来的，标号并不连贯。";
            // dialogTexts << "上面有许多你曾经听到过的名词，但在这里，它们似乎有了不同的含义。";
            // dialogTexts << "沉思间你已在车棚下待了太久，一团黑影冲破了宿舍的大门，";
            // dialogTexts << "你只能开始新的逃亡......";
        }
    }
    /*餐车 behind*/
    else if(id==5){
        if(caseid==1){
            dialogTexts << "来到29楼附近，你忽然想起新生守则上的第3条：”";
            dialogTexts << "“不吃早饭进入课堂是不被允许的”";
            dialogTexts << "你本对这条规定嗤之以鼻，可前面的奇遇却让你不得不收起轻视的念头。";
            dialogTexts << "“还是在这里买一份早饭吧。”,你想";
        }
        else if(caseid == 2){
            dialogTexts << "你会选择:";
        }
        else if(caseid == 3){
            dialogTexts << "全家是24小时营业的。你很庆幸自己记住了这点。";
            dialogTexts << "无人值班并没有什么妨碍，自助售货机已经能满足你的需求了。";
            dialogTexts << "一个饭团下肚，你的精神似乎振作了一点。";
        }
        else if(caseid==4){
            dialogTexts << "走出全家,你发现一个身穿制服、骑着电瓶车的身影一闪而过,你选择:";
        }
        else if(caseid==5){
            dialogTexts << "“真正的保卫处人员是值得信赖的”,你现在理解了这句话。";
            dialogTexts << "请寻找保卫处人员遗留的一张和之前相同材质的昏黄纸张，上面记载着如下文字:";
            dialogTexts << "请点击图中的纸条！";
        }
    }
    /*behind*/
    else if(id==6){
        if(caseid==1){
            dialogTexts << "走到百周年讲堂的门前，一个人影凑上前来搭话，";
            dialogTexts << "口中念叨着什么“国家精品课”“两朵乌云”“符号落地与尝试获取”一类的话语。";
        }
        else if(caseid==2){
            dialogTexts << "余光中你只瞥见一个硕大无朋却发量稀疏的脑壳。你选择：";
        }
        else if(caseid==3){
            dialogTexts << "你的话语似乎戳中了他的痛处，他手中的扇形电脑落在地上，发出巨响。";
            dialogTexts << "响动吸引来了那团由ce、tle和wa组成的怪物，你只能继续踏上逃亡的旅途……";
        }
    }
    /*二教门口*/
    else if(id==7){
        if(caseid==1){
            dialogTexts << "历经千辛万苦，你终于来到了二教的门前。";
            dialogTexts << "现在，你距离心心念念的程设课堂可真是只有一步之遥了。";
            dialogTexts << "你飞快地冲上楼";
        }
    }
    else if(id==8){
        if(caseid==1){
            dialogTexts << "你终于来到了程设的课堂，赶上了今天的早十。";
            dialogTexts << "忽然，你发现PPT似曾相识，老师讲的内容也是那么熟悉，";
            dialogTexts << "一阵闹铃声传来，你这才发现自己躺在寝室的床上，";
            dialogTexts << "一阵闹铃声传来，你这才发现自己躺在寝室的床上，";
            dialogTexts << "刚才发生的一切，不过是太思念程设的课堂，在梦里来了一场与程设的双向奔赴。";
        }
    }
    else if(id==9){
        dialogTexts << "克服了千难万险，你终于来到了程设的课堂，赶上了今天的早十。";
        dialogTexts << "忽然，你发现PPT似曾相识，老师讲的内容也是那么熟悉，";
        dialogTexts << "好像，好像在上周经历过一样。";
        dialogTexts << "一阵闹铃声传来，你这才发现自己躺在寝室的床上，";
        dialogTexts << "刚才发生的一切，不过是太思念程设的课堂，在梦里来了一场与程设的双向奔赴。";
    }
}
