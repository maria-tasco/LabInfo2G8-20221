#include "laberinto.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Laberinto w;
    w.show();
    return a.exec();
}
/*personalidades de los fantasmas de pacman
- sigan un patron
- random
- siga al pacman*/
