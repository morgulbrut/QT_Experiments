#include "seriallogger.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SerialLogger w;
    w.show();

    return a.exec();
}
