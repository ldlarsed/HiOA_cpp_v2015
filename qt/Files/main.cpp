#include <QCoreApplication>
#include <QFile>
#include <QString>
#include <QDebug>
#include <QTextStream>
#include <QDir>

void Write(QString Filename){

    QFile mFile(Filename);

    if(!mFile.open(QFile::WriteOnly | QFile::Text)){
        qDebug() << "Could not open file for writing";
        return;
    }

    QTextStream out(&mFile);
    out << "Hello World!";
    mFile.flush();
    mFile.close();
}


void Read(QString Filename){

    QFile mFile(Filename);

    if(!mFile.open(QFile::ReadOnly | QFile::Text)){
        qDebug () << "Could not open file for reading";
        return;
    }

    QTextStream in(&mFile);
    QString mText = in.readAll();
    qDebug() << mText;
    //Trenger ikke flush for lesing
    mFile.close();

}

/**
 * Listing contents of a direcotry.
 * @brief ListDir
 * @param Filename
 */
void ListDir(QString Filename){

    QDir myDir(Filename);
    QStringList fileList = myDir.entryList();

    foreach (QDir d, fileList) {
        qDebug () << d;
    }

}


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString mFile = "./testfile.txt";

//    ListDir(""); //Her trengs det filtre for at alt kommer bare ut
    Write(mFile);
    Read(mFile);

    //Skal ta å lese fra resource filen her
//    Read(":/MyFiles/Files.pro");

    return a.exec();
}
