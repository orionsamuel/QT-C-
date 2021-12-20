#include "barras.h"
#include "ui_barras.h"

Barras::Barras(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Barras)
{
    ui->setupUi(this);
}

Barras::~Barras()
{
    delete ui;
}


void Barras::on_actionSobre_esse_programa_triggered()
{
    QMessageBox::about(this, "Sobre esse programa", "<h2> Esse programa é blá blá blá </h2>");
}

