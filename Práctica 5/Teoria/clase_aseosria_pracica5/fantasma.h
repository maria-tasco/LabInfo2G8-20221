#ifndef FANTASMA_H
#define FANTASMA_H

#include <QGraphicsItem>
#include <string>
#include <QPainter>
#include <QPixmap>

using namespace std;

class Fantasma : public QGraphicsItem
{
private:
    string nombre;
    float px, py;
    float vx, vy;
    float dx, dy;
public:
    Fantasma();
    Fantasma(float px, float py);

    virtual QRectF boundingRect() const;
    virtual void paint( QPainter *painter,
                        const QStyleOptionGraphicsItem *option,
                        QWidget *widget = nullptr);
    void advance (int phase);
    float getVx() const;
    void setVx(float newVx);
    float getVy() const;
    void setVy(float newVy);
};

#endif // FANTASMA_H
