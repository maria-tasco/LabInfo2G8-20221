#ifndef PERSONAJE_H
#define PERSONAJE_H
#include <QGraphicsItem>
#include <QPainter>
#include <string>
#include <QPixmap>
using namespace std;

#define DT 0.2

class Personaje : public QGraphicsItem
{
private:
    int vida;
    string nombre;
    float px, py;
    float vx, vy;
    float ax, ay;
    float dx, dy;

public:
    Personaje();
    Personaje(float px, float py, string nombre);

    float getVx() const;
    float getVy() const;

    void setVx(float newVx);
    void setVy(float newVy);

    virtual QRectF boundingRect() const;
    virtual void paint(
            QPainter *painter,
            const QStyleOptionGraphicsItem *option,
            QWidget *widget = nullptr);

    void advance(int phase);
};

#endif // PERSONAJE_H














