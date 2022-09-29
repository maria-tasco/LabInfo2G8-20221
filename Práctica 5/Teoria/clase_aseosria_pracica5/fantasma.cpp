#include "fantasma.h"

Fantasma::Fantasma()
{
    dx=16;
    dy=16;
}

Fantasma::Fantasma(float px, float py, float vx, float vy)
    : px(px), py(py), vx(vx), vy(vy)
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
    QPixmap fRosa(":/Fantasmas/fantasmaRosa.png");
    painter->drawPixmap(0,0,dx,dy,fRosa);
}

void Fantasma::advance(int phase)
{
    px = px + vx*DT;
    py = py + vy*DT;
    setPos(px,py);
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

float Fantasma::getPx() const
{
    return px;
}

void Fantasma::setPx(float newPx)
{
    px = newPx;
}

float Fantasma::getPy() const
{
    return py;
}

void Fantasma::setPy(float newPy)
{
    py = newPy;
}
