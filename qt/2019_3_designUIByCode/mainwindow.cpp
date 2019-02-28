#include "mainwindow.h"


MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent)
{
    // add a pushbutton
    QWidget *widget = new QWidget();
    this->setCentralWidget(widget);

    btnTest = new QPushButton(tr("确定"));
    QVBoxLayout *mainLayout =new QVBoxLayout;
    mainLayout->addWidget(btnTest);
    mainLayout->addWidget(new QRadioButton(tr("ress")));
    // can NOT use setLayout method directly in QMainWindow
    // setLayout(mainLayout);
    centralWidget()->setLayout(mainLayout);

    setWindowTitle("Designed By EDila");
}


MainWindow::~MainWindow()
{
    //
}

void MainWindow::onButtonClicked()
{
    close();
}
