#ifndef EDITORDETEXTO_H
#define EDITORDETEXTO_H

#include <QMainWindow>
#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include <QMessageBox>
#include <QFontDialog>
#include <QFont>
#include <QColor>
#include <QColorDialog>
#include <QPrintDialog>
#include <QPrinter>

QT_BEGIN_NAMESPACE
namespace Ui { class EditorDeTexto; }
QT_END_NAMESPACE

class EditorDeTexto : public QMainWindow
{
    Q_OBJECT

public:
    EditorDeTexto(QWidget *parent = nullptr);
    QString local_file_name;
    QString all_files = "Arquivos de texto (*.txt) ;; Arquivos Markdown (*.md)";
    ~EditorDeTexto();

private slots:
    void on_actionNovo_triggered();

    void on_actionAbrir_triggered();

    void on_actionSalvar_Como_triggered();

    void on_actionSalvar_triggered();

    void on_actionSair_triggered();

    void on_actionCopiar_triggered();

    void on_actionColar_triggered();

    void on_actionRecortar_triggered();

    void on_actionRefazer_triggered();

    void on_actionDesfazer_triggered();

    void on_actionCor_triggered();

    void on_actionBackground_triggered();

    void on_actionFonte_triggered();

    void on_actionSobre_triggered();

    void on_actionImprimir_triggered();

private:
    Ui::EditorDeTexto *ui;
};
#endif // EDITORDETEXTO_H
