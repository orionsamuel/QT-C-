#ifndef RADIOBUTTON_H
#define RADIOBUTTON_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class RadioButton; }
QT_END_NAMESPACE

class RadioButton : public QMainWindow
{
    Q_OBJECT

public:
    RadioButton(QWidget *parent = nullptr);
    ~RadioButton();

private slots:
    void on_btn_resp_clicked();

private:
    Ui::RadioButton *ui;
};
#endif // RADIOBUTTON_H
