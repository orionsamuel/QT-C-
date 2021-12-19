#include "loginsenha.h"
#include "ui_loginsenha.h"

LoginSenha::LoginSenha(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LoginSenha)
{
    ui->setupUi(this);
}

LoginSenha::~LoginSenha()
{
    delete ui;
}


void LoginSenha::on_btn_session_clicked()
{
    if(ui->field_login->text() == "orionsamuel" && ui->field_pass->text() == "123456"){
        QMessageBox::information(this, "Home", "Logado com sucesso!");

        if(ui->chk->isChecked()){
            ui->statusbar->showMessage("É pra manter logado!");
        }else{
            ui->statusbar->showMessage("Logado com sucesso!");
        }

        ui->field_login->clear();
        ui->field_pass->clear();
        ui->field_login->setFocus();
    }else{
        //QMessageBox::critical(this, "Falha", "Falha ao logar");
        ui->statusbar->showMessage("Falha ao logar");
        ui->field_login->clear();
        ui->field_pass->clear();
        ui->field_login->setFocus();
    }
}


void LoginSenha::on_chk_stateChanged(int arg1)
{
    if(arg1 > 0){
        ui->statusbar->showMessage("Checkbox marcado!");
    }else{
        ui->statusbar->showMessage("Não marcado o checkbox!");
    }
}

