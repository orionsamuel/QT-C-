#include "datahora.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DataHora w;
    w.show();
    return a.exec();
}
