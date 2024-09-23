#include "matriosca.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Matriosca w;
    w.show();
    return a.exec();
}
