#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QToolButton>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actiontest_triggered();

private:
    QToolButton *btnTest;
    Ui::MainWindow *ui;
    void testfunction();
};

#endif // MAINWINDOW_H
