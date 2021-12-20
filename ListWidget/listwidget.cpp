#include "listwidget.h"
#include "ui_listwidget.h"

ListWidget::ListWidget(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ListWidget)
{
    ui->setupUi(this);
    QListWidgetItem *so = new QListWidgetItem("Linux");
    ui->list_itens->addItem(so);
}

ListWidget::~ListWidget()
{
    delete ui;
}


void ListWidget::on_btn_adicionar_clicked()
{   if(ui->field_itens->text() != ""){
        ui->statusbar->showMessage("");
        ui->list_itens->addItem(ui->field_itens->text());
        ui->field_itens->clear();
    }else{
        ui->statusbar->showMessage("Infome o nome para adicionar");
    }
}


void ListWidget::on_btn_deletar_clicked()
{
    foreach(QListWidgetItem * NAME, ui->list_itens->selectedItems()){
        delete ui->list_itens->takeItem(ui->list_itens->row(NAME));
    }
}

