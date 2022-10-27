#ifndef BARRASV_H
#define BARRASV_H
#include <QGraphicsItem>
#include <QPainter>
#include <QPixmap>

class BarrasV : public QGraphicsItem
{
private:
    float px, py;
    float dx, dy;
public:
    BarrasV();
    BarrasV(float px, float py);

    virtual QRectF boundingRect() const;
    virtual void paint( QPainter *painter,
                        const QStyleOptionGraphicsItem *option,
                        QWidget *widget = nullptr);
};

#endif // BARRASV_H
