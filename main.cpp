#include "projecth3.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ProjectH3 w;
    w.show();

    return a.exec();
}
