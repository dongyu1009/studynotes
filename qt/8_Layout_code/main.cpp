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
