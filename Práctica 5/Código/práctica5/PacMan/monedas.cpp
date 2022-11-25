#include "monedas.h"
Monedas::Monedas()
{
    dx=16;
    dy=16;
}

Monedas::Monedas(float px, float py) : px(px), py(py)
{
    dx=16;
    dy=16;
    setPos(px+8,py+8);
}

QRectF Monedas::boundingRect() const
{
    return QRectF(0,0,dx,dy);
}

void Monedas::paint(QPainter *painter,
                      const QStyleOptionGraphicsItem *option,
                      QWidget *widget)
{
    painter->setBrush(Qt::yellow);
    painter->drawEllipse(boundingRect());
}
