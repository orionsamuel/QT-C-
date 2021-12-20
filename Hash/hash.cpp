#include "hash.h"
#include "ui_hash.h"

Hash::Hash(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Hash)
{
    ui->setupUi(this);
}

Hash::~Hash()
{
    delete ui;
}


void Hash::on_pushButton_clicked()
{
    QString str = ui->lineEdit->text();
    str = QString("%1").arg(QString(QCryptographicHash::hash(str.toUtf8(), QCryptographicHash::Md5).toHex()));
    ui->label->setText("Hash completa: <b>" + str + "</b>");
    QString str2 = str.toUpper().left(6);
    ui->label_2->setText("Hash minificada: <b>" + str2 + "</b>");
}

