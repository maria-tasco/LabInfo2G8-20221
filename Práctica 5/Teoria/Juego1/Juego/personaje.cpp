#include "personaje.h"

Personaje::Personaje()
    : px(0), py(0),
      vx(0), vy(0),
      ax(0), ay(0),
      dx(30), dy(30)
{
    nombre = "NN";
    vida = 100;
}
Personaje::Personaje(float px, float py, string nombre)
    : px(px), py(py),
    vx(0), vy(0),
    ax(0), ay(0),
    dx(30), dy(30)
{
  this->nombre = nombre;
  vida = 100;
}

float Personaje::getVx() const
{
    return vx;
}

float Personaje::getVy() const
{
    return vy;
}

void Personaje::setVx(float newVx)
{
    vx = newVx;
}

void Personaje::setVy(float newVy)
{
    vy = newVy;
}

QRectF Personaje::boundingRect() const
{
    return QRectF(0,0,dx,dy);
}

void Personaje::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
//    painter->setBrush(Qt::red);
//    painter->drawEllipse(boundingRect());

    QPixmap p(":/Sprites/personaje.png");
    painter->drawPixmap(0,0,dx,dy,p);
}

void Personaje::advance(int phase)
{
    //ax = ax;
    //ay = ay;

    vx = vx + ax*DT;
    vy = vy + ay*DT;

    px = px + vx*DT +0.5*ax*DT*DT;
    py = py + vy*DT +0.5*ay*DT*DT;

    setPos(px,py);
}










