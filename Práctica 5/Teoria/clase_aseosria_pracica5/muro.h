#ifndef MURO_H
#define MURO_H

#include <QGraphicsItem>
#include <string>
#include <QPainter>
#include <QPixmap>

using namespace std;

class Muro : public QGraphicsItem
{
private:
    float px, py;
    float dx, dy;
public:
    Muro();
    Muro(float px, float py);

    virtual QRectF boundingRect() const;
    virtual void paint( QPainter *painter,
                        const QStyleOptionGraphicsItem *option,
                        QWidget *widget = nullptr);
};

#endif // MURO_H
