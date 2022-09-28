#include "piezas.h"

Piezas::Piezas(float px, float py)
{
    setPos(px,py);
}

QRectF Piezas::boundingRect() const
{
    return QRectF(0,0,30,30);//tamaño y la posición
}

void Piezas::paint(QPainter *painter, QWidget *widget)
{
    QPixmap pixman(":/barra.png");
    painter->drawPixmap(0,0,30,30,pixman);
}
