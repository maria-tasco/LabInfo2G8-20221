#include "muro.h"

Muro::Muro()
{
    dx=30;
    dy=30;
}

QRectF Muro::boundingRect() const
{
    return QRectF(0,0,dx,dy);
}

void Muro::paint(QPainter *painter, QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setBrush(Qt::blue);
    painter->drawRect(boundingRect());
}
