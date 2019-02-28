#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    initViews();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionTest_triggered()
{
    close();
}

void MainWindow::initViews()
{
    ui->mainToolBar->addWidget(new QLabel(tr("test")));
    ui->mainToolBar->addSeparator();
    ui->mainToolBar->addWidget(new QLabel(tr("test")));

    ui->statusBar->addWidget(new QProgressBar);
    ui->statusBar->addWidget(new QLabel(tr("test")));

    setCentralWidget(ui->textEdit);
}
