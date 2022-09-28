#include "proyectil.h"

Proyectil::Proyectil()
{
    dx=16;
    dy=16;
}

Proyectil::Proyectil(float px, float py, float vx, float vy)
    : px(px), py(py), vx(vx), vy(vy)
{
    dx=16;
    dy=16;
    setPos(px+8,py+8);
}

QRectF Proyectil::boundingRect() const
{
    return QRectF(0,0,dx,dy);
}

void Proyectil::paint(QPainter *painter,
                      const QStyleOptionGraphicsItem *option,
                      QWidget *widget)
{
    painter->setBrush(Qt::red);
    painter->drawEllipse(boundingRect());
}

void Proyectil::advance(int phase)
{
    px = px + vx*DT;
    py = py + vy*DT;
}
