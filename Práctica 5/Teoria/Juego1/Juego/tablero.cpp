#include "tablero.h"
#include "ui_tablero.h"

Tablero::Tablero(QWidget *parent) : QMainWindow(parent) , ui(new Ui::Tablero)
{
    ui->setupUi(this);
    scene = new QGraphicsScene(this);
    scene->setSceneRect(0,0,400,400);
    ui->graphicsView->setScene(scene);

    p1 = new Personaje;
    scene->addItem(p1);

    tiempo = new QTimer;
    tiempo->start(100);

    QGraphicsLineItem linea(0,0,400,400);
    scene->addItem(&linea);

    connect(tiempo, &QTimer::timeout,
            scene, &QGraphicsScene::advance);

    connect(ui->pB_start, &QPushButton::clicked,
            this, &Tablero::cambiarMensaje);
}

Tablero::~Tablero()
{
    delete ui;
}

void Tablero::keyPressEvent(QKeyEvent *event)
{
    if(event->key()==Qt::Key_A){
        p1->setVx(-20);
    }else if(event->key()==Qt::Key_D){
        p1->setVx(20);
    }else if(event->key()==Qt::Key_W){
        p1->setVy(-20);
    }else if(event->key()==Qt::Key_S){
        p1->setVy(20);
    }else if(event->key()==Qt::Key_Space){
        p1->setVx(0);
        p1->setVy(0);
    }
}

void Tablero::cambiarMensaje()
{
    ui->lb_titulo->setText("Juego");
}














