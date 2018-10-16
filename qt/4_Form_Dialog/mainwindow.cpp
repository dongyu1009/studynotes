#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mydialog.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setCentralWidget(ui->plainTextEdit);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionbbb_2_triggered()
{
    mDialog = new MyDialog(this);
    mDialog->show();
    // MyDialog myDialog;
    // myDialog.setModal(false);
    // myDialog.exec();
}
