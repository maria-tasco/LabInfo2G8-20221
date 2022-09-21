#ifndef PERSONAJE_H
#define PERSONAJE_H

#include <QGraphicsItem>
#include <QPainter>
#include <QPixmap>

#include "bomba.h"

#define DT 0.3

class Personaje : public QGraphicsItem
{
private:
    float px, py;
    float vx, vy;
    float ax, ay;
    int maxBombas;
    QVector<Bomba *> Bombas;

public:
    Personaje();
    Personaje(float p, float v, float a);

    //get
    float getPx() const;
    float getPy() const;
    float getVx() const;
    float getVy() const;
    float getAx() const;
    float getAy() const;

    //set
    void setPx(float value);
    void setPy(float value);
    void setVx(float value);
    void setVy(float value);
    void setAx(float value);
    void setAy(float value);

    //Proceso
    void advance(int phase);

    virtual QRectF boundingRect() const;
    virtual void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = nullptr);

    Bomba* crearBomba(void);
    Bomba* destruirBomba(void);

};

#endif // PERSONAJE_H
