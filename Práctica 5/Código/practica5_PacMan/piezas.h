#ifndef PIEZAS_H
#define PIEZAS_H

#include <QGraphicsItem>
#include <QPainter>
#include <QPixmap>

class Piezas : public QGraphicsItem
{
public:
    Piezas();
    Piezas(float px, float py);

    virtual QRectF boundingRect() const;
    virtual void paint(QPainter *painter, QWidget *widget = nullptr);

};

#endif // PIEZAS_H
