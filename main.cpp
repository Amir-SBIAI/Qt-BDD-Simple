#include "window.h"
#include "bdd.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Window w;
    Gestion gestionBDD;
    gestionBDD.connexionBDD();

    w.show();
    return a.exec();
}
