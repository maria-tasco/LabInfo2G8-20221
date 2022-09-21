#ifndef LABERINTO_H
#define LABERINTO_H

#include <QMainWindow>
#include <QGraphicsScene>
#include "piezas.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Laberinto; }
QT_END_NAMESPACE

class Laberinto : public QMainWindow
{
    Q_OBJECT

public:
    Laberinto(QWidget *parent = nullptr);
    ~Laberinto();

    void create_world(void);
private slots:

    void on_pushButtonStart_clicked();

private:
    Ui::Laberinto *ui;
    QGraphicsScene *scene;

    Piezas *barras;
};
#endif // LABERINTO_H
