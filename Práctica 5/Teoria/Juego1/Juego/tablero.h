#ifndef TABLERO_H
#define TABLERO_H

#include <QMainWindow>
#include <QDebug>
#include <QGraphicsScene>
#include <QTimer>
#include <QKeyEvent>

#include "personaje.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Tablero; }
QT_END_NAMESPACE

class Tablero : public QMainWindow
{
    Q_OBJECT

public:
    Tablero(QWidget *parent = nullptr);
    ~Tablero();
    void keyPressEvent(QKeyEvent *event);


public slots:
    void cambiarMensaje(void);

private:
    Ui::Tablero     *ui;
    QGraphicsScene  *scene;
    QTimer          *tiempo;

    Personaje *p1;
};
#endif // TABLERO_H








