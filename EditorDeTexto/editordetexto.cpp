#include "editordetexto.h"
#include "ui_editordetexto.h"

EditorDeTexto::EditorDeTexto(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::EditorDeTexto)
{
    ui->setupUi(this);
    this->setCentralWidget(ui->textEdit);
}

EditorDeTexto::~EditorDeTexto()
{
    delete ui;
}


void EditorDeTexto::on_actionNovo_triggered()
{
    local_file_name = "";
    ui->textEdit->clear();
    ui->textEdit->setFocus();
}


void EditorDeTexto::on_actionAbrir_triggered()
{
    QString file_name = QFileDialog::getOpenFileName(this, "Abrir", QDir::homePath(), all_files);
    QFile file(file_name);
    local_file_name = file_name;

    if(file.exists()){
        if(!file.open(QFile::ReadOnly | QFile::Text)){
            QMessageBox::warning(this, "Erro ao abrir arquivo", "Arquivo não pode ser aberto");
            return;
        }

        QTextStream enter_file(&file);
        QString text = enter_file.readAll();
        ui->textEdit->setText(text);
    }

    file.close();
}


void EditorDeTexto::on_actionSalvar_Como_triggered()
{
    QString file_name = QFileDialog::getSaveFileName(this, "Salvar Como", QDir::homePath(), all_files);
    local_file_name = file_name;

    if(local_file_name == ""){
        return;
    }

    QFile file(file_name);

    if(!file.open(QFile::WriteOnly | QFile::Text)){
        if(file.exists()){
            QMessageBox::warning(this, "Erro ao salvar arquivo", "Arquivo não pode ser salvo");
        }

        return;
    }

    QTextStream out_file(&file);
    QString text = ui->textEdit->toPlainText();
    out_file << text << '\n';

    file.flush();
    file.close();
}


void EditorDeTexto::on_actionSalvar_triggered()
{
    QFile file(local_file_name);

    if(file.exists()){
        if(!file.open(QFile::WriteOnly | QFile::Text)){
            QMessageBox::warning(this, "Erro", "Arquivo não pode ser salvo");
            return;
        }

        QTextStream out_file(&file);
        QString text = ui->textEdit->toPlainText();
        out_file << text << '\n';

        file.flush();
        file.close();
    }else{
        on_actionSalvar_Como_triggered();
    }
}


void EditorDeTexto::on_actionSair_triggered()
{
    close();
}


void EditorDeTexto::on_actionCopiar_triggered()
{
    ui->textEdit->copy();
}


void EditorDeTexto::on_actionColar_triggered()
{
    ui->textEdit->paste();
}


void EditorDeTexto::on_actionRecortar_triggered()
{
    ui->textEdit->cut();
}


void EditorDeTexto::on_actionRefazer_triggered()
{
    ui->textEdit->redo();
}


void EditorDeTexto::on_actionDesfazer_triggered()
{
    ui->textEdit->undo();
}


void EditorDeTexto::on_actionCor_triggered()
{
    QColor color = QColorDialog::getColor(Qt::black, this, "Escolha uma cor");
    if(color.isValid()){
        ui->textEdit->setTextColor(color);
    }
}


void EditorDeTexto::on_actionBackground_triggered()
{
    QColor color = QColorDialog::getColor(Qt::black, this, "Escolha uma cor");
    if(color.isValid()){
        ui->textEdit->setTextBackgroundColor(color);
    }
}


void EditorDeTexto::on_actionFonte_triggered()
{
    bool ok;
    QFont font = QFontDialog::getFont(&ok, this);
    if(ok){
        ui->textEdit->setFont(font);
    }else{
        return;
    }
}


void EditorDeTexto::on_actionSobre_triggered()
{
    QMessageBox::about(this, "Sobre esse programa", "Desenvolvido por Samuel Oliveira em 2021.<br>"
                                                    "<a href='https://www.github.com/orionsamuel'>"
                                                    "Acesse https://www.github.com/orionsamuel </a><br>");
}


void EditorDeTexto::on_actionImprimir_triggered()
{
    QPrinter printer;
    QPrintDialog dialog_printer;

    if(dialog_printer.exec() == QDialog::Rejected){
        return;
    }

    ui->textEdit->print(&printer);
}

