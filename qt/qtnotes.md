# Hello, world

#include <QCoreApplication>
#include <QDebug>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QString mStr = "hello, world!";
    qDebug() << mStr;
    return a.exec();
}

# GUI application

ui->pushButton->setText("hello");

F3 to edit widget
F4 to edit the signal/slot, you could set button click to form close


# Signal/Slot

Connecting the signal and slot:

connect(ui->slider, SIGNAL(valuechanged(int)), ui->progressBar, SLOT(setValue(int)));

disconnect(ui->slider, SIGNAL(valuechanged(int)), ui->progressBar, SLOT(setValue(int)));


# Form and Dialog

setCentralWidget(ui->plainTextEdit);

New Window -> Qt Designer Form Class and Create a toolbutton in the main window with a trigger:

Method 1:

#include "mydialog.h"

void MainWindow::on_actionDialog_triggered()
{
    MyDialog myDialog;
    myDialog.setModal(true);
    myDialog.exec();
}

Method 2:

Declare a pointer in the interface file firstly and 

void MainWindow::on_actionDialog_triggered()
{
    mDialog = new MyDialog(this);
    mDialog->show();
}


# Layout

click()->close();

click()->accept();

#  Basic Qt Project


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

SOURCES += \
    main.cpp

    
#include <QApplication>
#include <QLabel>


int main(int argc, char*argv[])
{

    QApplication app(argc, argv);
    QLabel *label = new QLabel("<b>hello</b> <i>world</i>");

    label->show();

    return app.exec();
}

   
# Layout by code

#include <QApplication>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>


int main(int argc, char*argv[])
{

    QApplication app(argc, argv);

    // QWidget *window = new QWidget();
    QWidget *window = new QWidget;
    window->setWindowTitle("Title");
    QPushButton *btn1 = new QPushButton("one");
    QPushButton *btn2 = new QPushButton("two");
    QPushButton *btn3 = new QPushButton("three");

    // QHBoxLayout *hlayout = new QHBoxLayout;
    //hlayout->addWidget(btn1);
    //hlayout->addWidget(btn2);
    //hlayout->addWidget(btn3);
    QVBoxLayout *vlayout = new QVBoxLayout;
    vlayout->addWidget(btn1);
    vlayout->addWidget(btn2);
    vlayout->addWidget(btn3);

    window->setLayout(vlayout);

    window->show();

    return app.exec();
}



# GridLayout by code 

#include <QApplication>
#include <QWidget>
#include <QtGui>
#include <QtCore>
#include <QGridLayout>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>


int main(int argc, char*argv[])
{

    QApplication app(argc, argv);

    QWidget *window = new QWidget;
    window->setWindowTitle("Title");

    QGridLayout *layout = new QGridLayout;

    QLabel *label1 = new QLabel("Name:");
    QLineEdit *txtName = new QLineEdit;

    layout->addWidget(label1, 0, 0);
    layout->addWidget(txtName, 0, 1);

    QLabel *label2 = new QLabel("Passwd:");
    QLineEdit *txtName2 = new QLineEdit;

    layout->addWidget(label2, 1, 0);
    layout->addWidget(txtName2, 1, 1);

    QPushButton *button1 = new QPushButton("OK");
    layout->addWidget(button1, 2, 0, 1, 2);

    window->setLayout(layout);

    window->show();

    return app.exec();
}

# Splitter

See the Program

# QDir


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


# QFile




