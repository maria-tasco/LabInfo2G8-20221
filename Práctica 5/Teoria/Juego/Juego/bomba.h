#ifndef BOMBA_H
#define BOMBA_H

#include <QGraphicsItem>
#include <QPainter>
#include <QPixmap>
#include <QTimer>
#include <QDebug>


class Bomba : public QObject, public QGraphicsItem
{
    Q_OBJECT

private:
    QTimer *duracion;

public:
    Bomba();
    Bomba(float px, float py);

    virtual QRectF boundingRect() const;
    virtual void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = nullptr);

public slots:
    void onExplosion(void);

signals:
    void finBomba(void);

};

#endif // BOMBAS_H
