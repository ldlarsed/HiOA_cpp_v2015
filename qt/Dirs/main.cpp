#include <QCoreApplication>
#include <QDebug>
#include <QDir>
#include <QFileInfo>
#include <QString>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    QDir mDir("./");
//    QString mPath = ""

//    qDebug () << mDir.exists(); //returnerer boolsk

    foreach(QFileInfo f, mDir.entryInfoList()){
//        qDebug() << f.absoluteFilePath();
        if(f.isDir())
            qDebug() << f.absoluteFilePath();
    }




    return a.exec();
}
