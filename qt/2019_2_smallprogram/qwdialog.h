#ifndef QWDIALOG_H
#define QWDIALOG_H

#include <QDialog>

namespace Ui {
class QWDialog;
}

class QWDialog : public QDialog
{
    Q_OBJECT

public:
    explicit QWDialog(QWidget *parent = nullptr);
    ~QWDialog();

private slots:
    void on_cbUnder_clicked(bool checked);

    void on_cbItalic_clicked(bool checked);

    void on_cbBold_clicked(bool checked);
    void setTextFontColor();

private:
    Ui::QWDialog *ui;
};

#endif // QWDIALOG_H
