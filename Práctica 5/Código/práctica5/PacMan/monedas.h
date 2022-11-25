#ifndef MONEDAS_H
#define MONEDAS_H
#include <QGraphicsItem>
#include <QPainter>
#include <QPixmap>

class Monedas : public QGraphicsItem
{
private:
    float px, py;
    float dx, dy;
public:
    Monedas();
    Monedas(float px, float py);

    virtual QRectF boundingRect() const;
    virtual void paint( QPainter *painter,
                        const QStyleOptionGraphicsItem *option,
                        QWidget *widget = nullptr);
};

#endif // MONEDAS_H
