#include "radiobutton.h"
#include "ui_radiobutton.h"

RadioButton::RadioButton(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::RadioButton)
{
    ui->setupUi(this);
}

RadioButton::~RadioButton()
{
    delete ui;
}


void RadioButton::on_btn_resp_clicked()
{
    QString r;
    if(ui->a->isChecked()){
        r = ui->a->text();
    }else if(ui->b->isChecked()){
        r = ui->b->text();
    }else if(ui->c->isChecked()){
        r = ui->c->text();
    }else if(ui->d->isChecked()){
        r = ui->d->text();
    }else{
        r = "Escolha uma alternativa";
    }

    ui->label_resp->setText("Você escolheu: <b>" + r + "</b>");
}

