#include "fantasma.h"

Fantasma::Fantasma()
{
    dx=16;
    dy=16;
}

Fantasma::Fantasma(float px, float py) : px(px), py(py)
{
    dx=16;
    dy=16;
    setPos(px+8,py+8);
}

QRectF Fantasma::boundingRect() const
{
    return QRectF(0,0,dx,dy);
}

void Fantasma::paint(QPainter *painter,
                      const QStyleOptionGraphicsItem *option,
                      QWidget *widget)
{
    painter->setBrush(Qt::yellow);
    painter->drawEllipse(boundingRect());
}

float Fantasma::getVx() const
{
    return vx;
}

void Fantasma::setVx(float newVx)
{
    vx = newVx;
}

float Fantasma::getVy() const
{
    return vy;
}

void Fantasma::setVy(float newVy)
{
    vy = newVy;
}
