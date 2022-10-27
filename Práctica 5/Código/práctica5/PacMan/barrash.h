#ifndef BARRASH_H
#define BARRASH_H
#include <QGraphicsItem>
#include <QPainter>
#include <QPixmap>

class BarrasH : public QGraphicsItem
{
private:
    float px, py;
    float dx, dy;
public:
    BarrasH();
    BarrasH(float px, float py);

    virtual QRectF boundingRect() const;
    virtual void paint( QPainter *painter,
                        const QStyleOptionGraphicsItem *option,
                        QWidget *widget = nullptr);
};

#endif // BARRASH_H
