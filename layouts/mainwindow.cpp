#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap logo("/home/samuel/Documentos/Udemy/QT Creator/QT-C-plus-plus/layouts/assets/img/logo-terminalroot.png");
    ui->logo->setPixmap(logo.scaled(192,58,Qt::KeepAspectRatio));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btn_send_clicked()
{
    QString name, last, mail;
    name = ui->field_name->text();
    last = ui->field_last->text();
    mail = ui->field_mail->text();
    /*QMessageBox::information(this, "Formulario de contato", "O nome que você digitou é: <b>" + name + "</b>" +
                             "<br> O seu sobrenome é: <b>" + last + "</b>" +
                             "<br> E seu e-mail é: <b>" + mail + "</b>");*/
    Dialog dados;
    dados.show_dados(name, last, mail);
    dados.exec();

    ui->field_name->clear();
    ui->field_last->clear();
    ui->field_mail->clear();

    ui->field_name->setFocus();
}

