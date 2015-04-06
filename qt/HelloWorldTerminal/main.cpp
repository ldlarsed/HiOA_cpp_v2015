#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qDebug() << "Hello World from Terminal";

    QString testStreng = "Hello World from a QString";

    qDebug() << testStreng;

    return a.exec();
}
