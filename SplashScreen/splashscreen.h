#ifndef SPLASHSCREEN_H
#define SPLASHSCREEN_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class SplashScreen; }
QT_END_NAMESPACE

class SplashScreen : public QMainWindow
{
    Q_OBJECT

public:
    SplashScreen(QWidget *parent = nullptr);
    ~SplashScreen();

private:
    Ui::SplashScreen *ui;
};
#endif // SPLASHSCREEN_H
