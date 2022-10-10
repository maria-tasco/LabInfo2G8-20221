#ifndef PERSONAJE_H
#define PERSONAJE_H

#include<QGraphicsItem>
#include<QPixmap>
#include <QPainter>

#define DT 0.2
class Personaje : public QGraphicsItem
{
private:
    int vida;
    float vx, vy;
    float ax, ay;
    float dx, dy;
    float px, py;
public:
    Personaje();
    Personaje(float px, float py);

    virtual QRectF boundingRect() const;
    virtual void paint( QPainter *painter,
                        const QStyleOptionGraphicsItem *option,
                        QWidget *widget = nullptr);

    void advance(int phase);

    float getVx() const;
    void setVx(float newVx);

    float getVy() const;
    void setVy(float newVy);

    float getPx() const;
    void setPx(float newPx);

    float getPy() const;
    void setPy(float newPy);
};

#endif // PERSONAJE_H
