#include "hash.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Hash w;
    w.show();
    return a.exec();
}
