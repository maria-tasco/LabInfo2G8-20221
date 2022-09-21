#include "bloque.h"

Bloque::Bloque()
{

}

Bloque::Bloque(float px, float py, int tipo) : tipo(tipo)
{
    setPos(px,py);
}

QRectF Bloque::boundingRect() const{
    return QRectF(0,0,30,30);//tamaño y la posición
}

void Bloque::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget){
    if(tipo==fijo){
        QPixmap pixman(":/bloque1.jpeg");
        painter->drawPixmap(0,0,30,30,pixman);
    }else{
        QPixmap pixman(":/bloque2.jpeg");
        painter->drawPixmap(0,0,30,30,pixman);
    }

}

int Bloque::getTipo() const
{
    return tipo;
}

void Bloque::setTipo(int value)
{
    tipo = value;
}

