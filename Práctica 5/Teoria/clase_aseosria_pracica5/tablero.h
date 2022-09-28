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

    void keyPressEvent(QKeyEvent *event);
    void crearMapa(void);
private slots:
    void on_pushButtonStart_clicked();

private:
    Ui::Tablero *ui;

    QGraphicsScene *scene;
    QTimer *time;

    Personaje *p1;

    int mapa[20][20];
    /*Se crea un vector de punteros a muros para que yo pueda crear muros
    dinamciamente. Crearlo cuando yo lo necesite*/
    QVector<Muro *> muros;
};
#endif // TABLERO_H
