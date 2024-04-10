#include "employee.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Employee w;
    w.show();
    return a.exec();
}
