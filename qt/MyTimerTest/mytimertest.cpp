#include "mytimertest.h"



MyTimerTest::MyTimerTest()
{

    timer = new QTimer(this); //timer vil bli automatisk slettet dersom vi bruker den her.

    //kobler sammen
    connect(timer, SIGNAL(timeout()), this, SLOT(MySlot()));
    timer->start(1000); //antall milisekunder
}

MyTimerTest::~MyTimerTest()
{

}

void MyTimerTest::MySlot(){
    qDebug() << "Timer executes";
}
