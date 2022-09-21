#include "personaje.h"

Personaje::Personaje()
{
    px = py = 0;
    vx = vy = 0;
    ax = ay = 0;
    maxBombas = 3;
    setPos(px,py);
}


Personaje::Personaje(float p, float v, float a) : px(p), py(p)
{
    vx = vy = v;
    ax = ay = a;
    maxBombas = 3;
    setPos(px,py);
}


float Personaje::getPx() const
{
    return px;
}

void Personaje::setPx(float value)
{
    px = value;
}

float Personaje::getPy() const
{
    return py;
}

void Personaje::setPy(float value)
{
    py = value;
}

float Personaje::getVx() const
{
    return vx;
}

void Personaje::setVx(float value)
{
    vx = value;
}

float Personaje::getVy() const
{
    return vy;
}

void Personaje::setVy(float value)
{
    vy = value;
}

float Personaje::getAx() const
{
    return ax;
}

void Personaje::setAx(float value)
{
    ax = value;
}

float Personaje::getAy() const
{
    return ay;
}

void Personaje::setAy(float value)
{
    ay = value;
}

void Personaje::advance(int phase)
{
    ax = ax;
    ay = ay;

    vx = vx + ax*DT;
    vy = vy + ay*DT;

    px = px + vx*DT + 0.5*ax*DT*DT;
    py = py + vy*DT + 0.5*ay*DT*DT;

    if(vx!=0 && (int)px%30==0){
        vx=0;
    } else if(vy!=0 && (int)py%30==0){
        vy=0;
    }

    setPos(px,py);
}

QRectF Personaje::boundingRect() const{
    return QRectF(0,0,29,29);
}

void Personaje::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget){
//    painter->setBrush(Qt::darkRed);
//    painter->drawEllipse(boundingRect());
    QPixmap pixman(":/personaje.png");
    painter->drawPixmap(0,0,29,29,pixman);
}

Bomba *Personaje::crearBomba()
{
    if(Bombas.size()<3){
        Bombas.append(new Bomba(px,py));
        return Bombas.last();
    }
    return nullptr;
}

Bomba *Personaje::destruirBomba()
{
    if(Bombas.size()>0){
        Bomba *b = Bombas.first();
        Bombas.remove(0);
        return b;
    }
    return nullptr;
}













