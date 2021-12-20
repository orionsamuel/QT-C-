#ifndef BARRAS_H
#define BARRAS_H

#include <QMainWindow>
#include <QMessageBox>

QT_BEGIN_NAMESPACE
namespace Ui { class Barras; }
QT_END_NAMESPACE

class Barras : public QMainWindow
{
    Q_OBJECT

public:
    Barras(QWidget *parent = nullptr);
    ~Barras();

private slots:
    void on_actionSobre_esse_programa_triggered();

private:
    Ui::Barras *ui;
};
#endif // BARRAS_H
