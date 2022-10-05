#include "tablero.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Tablero w;
    w.show();
    return a.exec();
}
//el dinamyc_cast sirve para las clases y punteros
//collidingItems me retorna un puntero de objetos graficos
//¿QUé es el polimorfismo
/*
    if(!colisiones_p1.isEmpty()){
        for(auto c : colisiones_p1){
            Muro *muro = dinamyc_cast<Muro *>(c);
            if(muro){
                qDebug()<<"muro";
                //cuando me choque con un muro voy a frenar
                p1->setVx(0);
                p1->setVy(0);
            }
            Proyectil *proyectil = dinamyc_cast<Proyectil *>(c);
            if(proyectil){
                qDebug()<<"proyectil";
            }
            Moneda *moneda = dinamyc_cast<Moneda *>(c);
            if(moneda){
                qDebug()<<"moneda";
                //Del grupo de galletas elimine del vector la galleta
                con la que me estoy chocando y de la escena.
                scena->removeItem(moneda);
                monedas.removeOne(moneda);
            }
        }
    }
*/
//hacer que el persojane se mueva en multiplos de 30
//Para que el pacman se teletransporte, definir en el mapa un numero 3
//QGraphicsLineItem *l1 = new QGraphicsLineItem(0,300,0,300);
//scene->addItem(l1);

//QGraphicsLineItem *portal = dinamyc_cast<QGraphicsLineItem *>(c);
//p1->setPx(530);
