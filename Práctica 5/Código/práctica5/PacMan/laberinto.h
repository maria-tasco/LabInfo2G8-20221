#ifndef LABERINTO_H
#define LABERINTO_H

#include <QMainWindow>
#include <QKeyEvent>
#include <QGraphicsScene>
#include <QTimer>
#include "personaje.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Laberinto; }
QT_END_NAMESPACE

class Laberinto : public QMainWindow
{
    Q_OBJECT

public:
    Laberinto(QWidget *parent = nullptr);
    ~Laberinto();
    void keyPressEvent(QKeyEvent *event); //para las funcionalidades con las teclas
    void crearMundo(void);
private slots:
    void on_pushButtonStart_clicked();//para cuando oprima el boton start

private:
    Ui::Laberinto *ui;
    QGraphicsScene *scene;
    QTimer *time;

    Personaje *PacMan;
};
#endif // LABERINTO_H
