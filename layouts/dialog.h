#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    void show_dados(QString, QString, QString);
    ~Dialog();

private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H
