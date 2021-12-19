#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btn_info_clicked()
{
    QMessageBox::information(this, "Terminal Root", "Essa é minha informação");
}


void MainWindow::on_btn_perigo_clicked()
{
    QMessageBox::critical(this, "Terminal Root alerta!", "Erro de alguma coisa!");
}


void MainWindow::on_btn_aviso_clicked()
{
    QMessageBox::warning(this, "Terminal Root aviso", "Aviso de algo");
}


void MainWindow::on_btn_about_clicked()
{
    QMessageBox::about(this, "Sobre Terminal Root", "<h2>Terminal Root informa</h2>"
                       "<a href='https://terminalroot.com.br/'>Acesse o site para mais informmações.</a>"
                       "<br>"
                       "<i>Meu about</i>");
}

