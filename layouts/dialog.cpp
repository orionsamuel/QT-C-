#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

void Dialog::show_dados(QString name, QString last, QString mail)
{
    ui->label_name->setText(name);
    ui->label_last->setText(last);
    ui->label_mail->setText(mail);
}

Dialog::~Dialog()
{
    delete ui;
}
