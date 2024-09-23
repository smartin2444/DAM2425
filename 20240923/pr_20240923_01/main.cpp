#include "ginylcd.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    GinyLCD w;
    w.show();
    return a.exec();
}
