#ifndef TABLERO_H
#define TABLERO_H

#include <QMainWindow>
#include <QDebug>
#include <QTimer>
#include <QKeyEvent>
#include <QGraphicsScene>
#include <QVector>

#include "personaje.h"
#include "bloque.h"

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
    void crearMundo(void);

public slots:
    void onUpdate(void);
    void onStart(void);
    void onDeleteBomba(void);


private:
    Ui::Tablero *ui;
    QGraphicsScene *scene;

    Personaje *p1;
    QTimer *tiempo;

    int Matriz[20][20];
    QVector<Bloque *> Bloques;
};
#endif // TABLERO_H












