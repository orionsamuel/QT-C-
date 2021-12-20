#include "splashscreen.h"

#include <QApplication>
#include <QSplashScreen>
#include <QTimer>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QSplashScreen *splash_screen = new QSplashScreen;
    splash_screen->setPixmap(QPixmap(":terminalroot.jpg"));
    splash_screen->show();

    SplashScreen w;

    QTimer::singleShot(3000, splash_screen, SLOT(close()));
    QTimer::singleShot(3000, &w, SLOT(show()));
    //w.show();
    return a.exec();
}
