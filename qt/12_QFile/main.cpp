#include <QCoreApplication>
#include <QFile>
#include <QString>
#include <QDebug>

void Write(QString Filename);

void Read(QString Filename);

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString mFilename = "E:/test/good.md";

    Write(mFilename);
    Read(mFilename);

    return a.exec();
}

void Write(QString Filename){
    QFile mFile(Filename);
    if(!mFile.open(QFile::WriteOnly | QFile::Text)){
        qDebug() << "could not open file file writing!";
    }
}


void Read(QString Filename){

}
