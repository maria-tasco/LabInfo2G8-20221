#ifndef PERSONAJE_H
#define PERSONAJE_H

#include <QGraphicsItem>
#include <string>
#include <QPainter>
#include <QPixmap>
#include "proyectil.h"

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

    QVector<Proyectil *> Proyectiles;
public:
    Personaje();
    Personaje(float px, float py, string nombre);

    float getVx() const;
    void setVx(float newVx);
    float getVy() const;
    void setVy(float newVy);

    virtual QRectF boundingRect() const;
    virtual void paint( QPainter *painter,
                        const QStyleOptionGraphicsItem *option,
                        QWidget *widget = nullptr);

    void advance (int phase);
    void disparar(void);
};


#endif // PERSONAJE_H
