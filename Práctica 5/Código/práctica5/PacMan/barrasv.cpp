#include "barrasv.h"

BarrasV::BarrasV() : px(0), py(0)
{
    dx=30;
    dy=30;
}

BarrasV::BarrasV(float px, float py) : px(px), py(py)
{
    dx=30;
    dy=30;
    setPos(px,py);
}

QRectF BarrasV::boundingRect() const
{
    return QRectF(0,0,dx,dy);
}

void BarrasV::paint(QPainter *painter,
                      const QStyleOptionGraphicsItem *option,
                      QWidget *widget)
{
    QPixmap pacMan(":/scoring objects/bloqueV.png");
    painter->drawPixmap(0,0,dx,dy,pacMan);
}
