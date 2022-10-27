#include "barrash.h"

BarrasH::BarrasH() : px(0), py(0)
{
    dx=30;
    dy=30;
}

BarrasH::BarrasH(float px, float py) : px(px), py(py)
{
    dx=30;
    dy=30;
    setPos(px,py);
}

QRectF BarrasH::boundingRect() const
{
    return QRectF(0,0,dx,dy);
}

void BarrasH::paint(QPainter *painter,
                      const QStyleOptionGraphicsItem *option,
                      QWidget *widget)
{
    QPixmap pacMan(":/scoring objects/bloqueH.png");
    painter->drawPixmap(0,0,dx,dy,pacMan);
}
