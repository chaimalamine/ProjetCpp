#include "gestion_employe.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    gestion_employe w;
    w.show();
    return a.exec();
}
