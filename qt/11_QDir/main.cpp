#include <QCoreApplication>
#include <QDebug>
#include <QDir>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QDir testDir;

    // qDebug() << testDir.drives();
    foreach(QFileInfo mItm, testDir.drives()){
        qDebug() << mItm.absoluteFilePath();
    }

    // make dir
    QString mStr = "D:/test/test1";
    if(!testDir.exists(mStr))
        testDir.mkdir(mStr);

    QDir mDir("D:/test");
    qDebug() << mDir.exists();


    QDir mDir2("D:/test");

    foreach(QFileInfo mItm, mDir2.entryInfoList())
    {
        // qDebug() << mItm.absoluteFilePath();
        if(mItm.isDir()) qDebug() << "Dir : " << mItm.absoluteFilePath();
        if(mItm.isFile()) qDebug() << "File : " << mItm.absoluteFilePath();
    }

    return a.exec();
}
