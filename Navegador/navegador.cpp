#include "navegador.h"
#include "ui_navegador.h"

Navegador::Navegador(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Navegador)
{
    ui->setupUi(this);
    QWebEngineView *view = new QWebEngineView;
    view->load(QUrl("https://google.com.br"));
    ui->textBrowser->close();
    ui->textBrowser->setHtml("<h1>Minha página incial</h1> Primeira página de exibição");
    ui->gridLayout->addWidget(view);
}

Navegador::~Navegador()
{
    delete ui;
}


void Navegador::on_pushButton_clicked()
{
    QWebEngineView *view = new QWebEngineView;
    view->load(QUrl("https://" + ui->lineEdit->text()));
    ui->textBrowser->close();

    QWidget *widget = ui->gridLayout->itemAt(1)->widget();
    delete(widget);

    ui->gridLayout->addWidget(view);
}

