#include "qwdialog.h"
#include "ui_qwdialog.h"

QWDialog::QWDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::QWDialog)
{
    ui->setupUi(this);
    connect(ui->btnExit, SIGNAL(clicked()), this, SLOT(close()));

    connect(ui->rbRed, SIGNAL(clicked()), this, SLOT(setTextFontColor()));
    connect(ui->rbBlack, SIGNAL(clicked()), this, SLOT(setTextFontColor()));
    connect(ui->rbBlue, SIGNAL(clicked()), this, SLOT(setTextFontColor()));
}


QWDialog::~QWDialog()
{
    delete ui;
}

void QWDialog::on_cbUnder_clicked(bool checked)
{
    QFont font = ui->txtEdit->font();
    font.setUnderline(checked);
    ui->txtEdit->setFont(font);
}

void QWDialog::on_cbItalic_clicked(bool checked)
{
    QFont font = ui->txtEdit->font();
    font.setItalic(checked);
    ui->txtEdit->setFont(font);
}

void QWDialog::on_cbBold_clicked(bool checked)
{
    QFont font = ui->txtEdit->font();
    font.setBold(checked);
    ui->txtEdit->setFont(font);
}

void QWDialog::setTextFontColor()
{
    QPalette plet = ui->txtEdit->palette();
    if (ui->rbRed->isChecked()){
        plet.setColor(QPalette::Text, Qt::red);
    } else if (ui->rbBlack->isChecked()) {
        plet.setColor(QPalette::Text, Qt::black);
    } else if (ui->rbBlue->isChecked()) {
        plet.setColor(QPalette::Text, Qt::blue);
    }
    ui->txtEdit->setPalette(plet);
}
