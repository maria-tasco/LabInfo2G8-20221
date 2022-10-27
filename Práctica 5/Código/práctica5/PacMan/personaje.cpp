#include "personaje.h"

Personaje::Personaje()
    : vx(0), vy(0),
      ax(0), ay(0),
      dx(25), dy(25),
      px(30), py(0)
{
    vida = 3;
}

Personaje::Personaje(float px, float py)
    : vx(0), vy(0),
      ax(0), ay(0),
      dx(25), dy(25),
      px(px), py(py)
{
    vida = 1;
}

QRectF Personaje::boundingRect() const
{
    return QRectF(0,0,dx,dy);
}

void Personaje::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QPixmap pacMan(":/P_F/pacMan.png");
    painter->drawPixmap(0,0,dx,dy,pacMan);
}

void Personaje::advance(int phase)
{
    vx = vx + ax*DT;
    vy = vy + ay*DT;

    px = px + vx*DT +0.5*ax*DT*DT;
    py = py + vy*DT +0.5*ay*DT*DT;

    setPos(px,py);
}

float Personaje::getVx() const
{
    return vx;
}

void Personaje::setVx(float newVx)
{
    vx = newVx;
}

float Personaje::getVy() const
{
    return vy;
}

void Personaje::setVy(float newVy)
{
    vy = newVy;
}

float Personaje::getPx() const
{
    return px;
}

void Personaje::setPx(float newPx)
{
    px = newPx;
}

float Personaje::getPy() const
{
    return py;
}

void Personaje::setPy(float newPy)
{
    py = newPy;
}

