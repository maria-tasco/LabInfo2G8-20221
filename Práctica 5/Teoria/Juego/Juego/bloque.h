#ifndef BLOQUE_H
#define BLOQUE_H

#include <QGraphicsItem>
#include <QPainter>
#include <QPixmap>

enum Ladrillo{ fijo=1, destructible };

class Bloque : public QGraphicsItem
{
public:
    Bloque();
    Bloque(float px, float py, int tipo);

    virtual QRectF boundingRect() const;
    virtual void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = nullptr);

    int getTipo() const;
    void setTipo(int value);

private:
    int tipo;

};

#endif // BLOQUE_H
