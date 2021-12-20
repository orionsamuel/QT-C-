#ifndef HASH_H
#define HASH_H

#include <QMainWindow>
#include <QCryptographicHash>

QT_BEGIN_NAMESPACE
namespace Ui { class Hash; }
QT_END_NAMESPACE

class Hash : public QMainWindow
{
    Q_OBJECT

public:
    Hash(QWidget *parent = nullptr);
    ~Hash();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Hash *ui;
};
#endif // HASH_H
