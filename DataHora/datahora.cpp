#include "datahora.h"
#include "ui_datahora.h"

DataHora::DataHora(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::DataHora)
{
    ui->setupUi(this);
    QDateTime UTC(QDateTime::currentDateTimeUtc());
    QDateTime local(UTC.toLocalTime());

    int hora = local.time().hour();
    int minuto = local.time().minute();
    int segundo = local.time().second();

    int dia = local.date().day();
    int mes = local.date().month();
    int ano = local.date().year();

    QString hora_full = QString::number(hora) + ":" + QString::number(minuto) + ":" + QString::number(segundo);
    QString data_full = QString::number(dia) + "/" + QString::number(mes) + "/" + QString::number(ano);

    ui->textBrowser->setText("SOMENTE HORA: <b>" + QString::number(hora) + "</b><br>"
                             "SOMENTE MINUTO: <b>" + QString::number(minuto) + "</b><br>"
                             "SOMENTE SEGUNDO: <b>" + QString::number(segundo) + "</b><br>"
                             "SOMENTE DIA: <b>" + QString::number(dia) + "</b><br>"
                             "SOMENTE MÊS: <b>" + QString::number(mes) + "</b><br>"
                             "SOMENTE ANO: <b>" + QString::number(ano) + "</b><br>"
                             "<hr>"
                             "HORÁRIO <b>" + hora_full + "</b><br>"
                             "DATA ATUAL <b>" + data_full + "</b><br>");
}

DataHora::~DataHora()
{
    delete ui;
}

