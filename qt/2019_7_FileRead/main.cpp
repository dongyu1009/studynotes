#include <QCoreApplication>
#include <QDebug>
#include <QFile>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    QString FILE_PATH = "F:/testdata/1005geography/landform_table.txt";
    QFile csvFile(FILE_PATH);
    if (csvFile.open(QIODevice::ReadWrite))  {

        QTextStream stream(&csvFile);
        stream.readLine();
        while (!stream.atEnd())
        {
            QString line = stream.readLine();
            // qDebug() << line;

            QString type = line.section(',', 0, 0).trimmed();
            QString value = line.section(',', 1, 1).trimmed();
            qDebug() << type << ", " << value;

            // CSVList.push_back(stream.readLine());
        }
        csvFile.close();
    }
    // qDebug() << "test" << endl;
    return a.exec();
}
