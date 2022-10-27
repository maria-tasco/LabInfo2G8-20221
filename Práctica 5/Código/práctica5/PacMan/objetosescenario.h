#ifndef OBJETOSESCENARIO_H
#define OBJETOSESCENARIO_H

#include <QGraphicsItem>
#include <QPainter>
#include <QPixmap>

class ObjetosEscenario : public QGraphicsItem
{
private:
    float px, py;
    float dx, dy;
public:
    ObjetosEscenario();
    ObjetosEscenario(float px, float py);

    virtual QRectF boundingRect() const;
    virtual void paint( QPainter *painter,
                        const QStyleOptionGraphicsItem *option,
                        QWidget *widget = nullptr);
};

#endif // OBJETOSESCENARIO_H
