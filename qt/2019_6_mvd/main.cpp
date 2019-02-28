#include "mainwindow.h"
#include <QApplication>
#include <QSplitter>
#include <QTreeView>
#include <QListView>
#include <QFileSystemModel>
#include <QDir>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    // MainWindow w;
    // w.show();
    // QWidget *widget = new QWidget;
    // widget->show();
    QSplitter *splitter = new QSplitter;

    QFileSystemModel *model = new QFileSystemModel;
    model->setRootPath(QDir::currentPath());

    QTreeView *treeView = new QTreeView(splitter);
    treeView->setModel(model);
    treeView->setRootIndex(model->index(QDir::currentPath()));
    QListView *listView = new QListView(splitter);
    listView->setModel(model);
    listView->setRootIndex(model->index(QDir::currentPath()));


    splitter->show();

    return a.exec();
}
