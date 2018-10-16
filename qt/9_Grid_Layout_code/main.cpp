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
