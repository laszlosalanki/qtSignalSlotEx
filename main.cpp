#include "proba.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Proba w;
    w.show();
    return a.exec();
}
