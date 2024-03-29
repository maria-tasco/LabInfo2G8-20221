#ifndef FANTASMA_H
#define FANTASMA_H

#include <QGraphicsItem>
#include <string>
#include <QPainter>
#include <QPixmap>

using namespace std;
#define DT 0.2

class Fantasma : public QGraphicsItem
{
private:
    string nombre;
    float px, py;
    float vx, vy;
    float dx, dy;
public:
    Fantasma();
    Fantasma(float px, float py, float vx, float vy);

    virtual QRectF boundingRect() const;
    virtual void paint( QPainter *painter,
                        const QStyleOptionGraphicsItem *option,
                        QWidget *widget = nullptr);

    void advance (int phase);

    float getVx() const;
    void setVx(float newVx);
    float getVy() const;
    void setVy(float newVy);
    float getPx() const;
    void setPx(float newPx);
    float getPy() const;
    void setPy(float newPy);
};

#endif // FANTASMA_H
