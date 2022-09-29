#include "personaje.h"

Personaje::Personaje()
    :px(0), py(0),
     vx(0), vy(0),
     ax(0), ay(0),
     dx(30), dy(30)
{
    nombre = "nn";
    vida = 100;
}

Personaje::Personaje(float px, float py, string nombre)
{
    this->nombre = nombre;
    vida=100;
}

QRectF Personaje::boundingRect() const
{
    return QRectF(0,0,dx,dy);
}

void Personaje::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QPixmap personajePrincipal(":/pacMan/pacMan.png");
    painter->drawPixmap(0,0,dx,dy,personajePrincipal);
}

void Personaje::advance(int phase)
{
    vx = vx + ax*DT;
    vy = vy + ay*DT;

    px = px + vx*DT +0.5*ax*DT*DT;
    py = py + vy*DT +0.5*ay*DT*DT;

    setPos(px,py);
}

void Personaje::disparar()
{
    Proyectiles.push_back(new Proyectil(px,py,vx,vy));
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


