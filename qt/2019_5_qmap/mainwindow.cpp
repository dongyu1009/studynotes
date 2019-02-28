#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setCentralWidget(ui->textEdit);

    btnTest = new QToolButton();
    // ui->mainToolBar->addWidget(btnTest);
    ui->statusBar->addWidget(btnTest);
    connect(btnTest, SIGNAL(triggered()), this, SLOT(testfunction()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::testfunction()
{
    // NO USE
    close();
}

void MainWindow::on_actiontest_triggered()
{

    QMap<QString, int> map;
    map.insert("maybe", 1237);
    map["boost"] = 1298;
    int res1 = map["boost"];
    int res2 = map.value("maybe");
    ui->textEdit->appendPlainText(QString("The value 1 is : %1").arg(res1));
    ui->textEdit->appendPlainText(QString("The value 2 is : %1").arg(res2));

    QVariantMap map2;
    map2["INPUT"] = "test";
    map2["OUTPUT"] = 1.65;
    QString res3 = map2.value("INPUT").value<QString>();
    double res4 = map2.value("OUTPUT").toDouble();
    ui->textEdit->appendPlainText(QString("The value 3 is : %1").arg(res3));
    ui->textEdit->appendPlainText(QString("The value 4 is : %1").arg(res4));
    // close();
}
