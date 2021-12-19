#ifndef LOGINSENHA_H
#define LOGINSENHA_H

#include <QMainWindow>
#include <QMessageBox>

QT_BEGIN_NAMESPACE
namespace Ui { class LoginSenha; }
QT_END_NAMESPACE

class LoginSenha : public QMainWindow
{
    Q_OBJECT

public:
    LoginSenha(QWidget *parent = nullptr);
    ~LoginSenha();

private slots:
    void on_btn_session_clicked();

    void on_chk_stateChanged(int arg1);

private:
    Ui::LoginSenha *ui;
};
#endif // LOGINSENHA_H
