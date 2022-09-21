#include "bomba.h"

Bomba::Bomba()
{

}

Bomba::Bomba(float px, float py)
{
    setPos(px,py);
    duracion = new QTimer();
    duracion->start(2000);

    connect(duracion, &QTimer::timeout, this, &Bomba::onExplosion);
}


QRectF Bomba::boundingRect() const
{
    return QRectF(0,0,30,30);
}

void Bomba::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setBrush(Qt::darkBlue);
    painter->drawEllipse(boundingRect());
}

void Bomba::onExplosion()
{
    qDebug()<<"booom!!";
    duracion->stop();
    emit finBomba();
}



















