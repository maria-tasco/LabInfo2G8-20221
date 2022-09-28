#ifndef PROYECTIL_H
#define PROYECTIL_H
#include <QGraphicsItem>
#include <string>
#include <QPainter>
#include <QPixmap>

using namespace std;
#define DT 0.2

class Proyectil : public QGraphicsItem
{
private:
    float px, py;
    float vx, vy;
    float dx, dy;
public:
    Proyectil();
    Proyectil(float px, float py, float vx, float vy);

    virtual QRectF boundingRect() const;
    virtual void paint( QPainter *painter,
                        const QStyleOptionGraphicsItem *option,
                        QWidget *widget = nullptr);

    void advance (int phase);
};

#endif // PROYECTIL_H
