#ifndef TABLERO_H
#define TABLERO_H

#include <QMainWindow>
#include <QKeyEvent>
#include <QGraphicsScene>
#include <QTimer>
#include <QVector>
#include "personaje.h"
#include "muro.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Tablero; }
QT_END_NAMESPACE

class Tablero : public QMainWindow
{
    Q_OBJECT

public:
    Tablero(QWidget *parent = nullptr);
    ~Tablero();

    void KeyPressEvent( QKeyEvent *event);
    void crearMapa(void);
private slots:
    void on_pushButtonStart_clicked();

private:
    Ui::Tablero *ui;

    QGraphicsScene *scene;
    QTimer *time;

    Personaje *p1;

    int mapa[20][20];
    QVector<Muro> muros;
};
#endif // TABLERO_H
