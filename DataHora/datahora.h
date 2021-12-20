#ifndef DATAHORA_H
#define DATAHORA_H

#include <QMainWindow>
#include <QDateTime>

QT_BEGIN_NAMESPACE
namespace Ui { class DataHora; }
QT_END_NAMESPACE

class DataHora : public QMainWindow
{
    Q_OBJECT

public:
    DataHora(QWidget *parent = nullptr);
    ~DataHora();

private:
    Ui::DataHora *ui;
};
#endif // DATAHORA_H
