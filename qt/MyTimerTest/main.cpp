#include <QCoreApplication>
#include "mytimertest.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    new MyTimerTest();

    return a.exec();
}
