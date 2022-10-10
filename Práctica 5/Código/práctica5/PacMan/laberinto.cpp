#include "laberinto.h"
#include "ui_laberinto.h"

Laberinto::Laberinto(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Laberinto)
{
    ui->setupUi(this);
    scene = new QGraphicsScene(this);
    scene->setSceneRect(0,0,650,350);
    ui->graphicsView->setScene(scene);

    connect(ui->pushButtonStart, &QPushButton::clicked,
            this, &Laberinto::on_pushButtonStart_clicked);
}

Laberinto::~Laberinto()
{
    delete ui;
}

void Laberinto::keyPressEvent(QKeyEvent *event)
{
    if(event->key()==Qt::Key_A){
        PacMan->setVx(-20);
        PacMan->setVy(0);
    }else if(event->key()==Qt::Key_D){
        PacMan->setVx(20);
        PacMan->setVy(0);
    }else if(event->key()==Qt::Key_W){
        PacMan->setVy(-20);
        PacMan->setVx(0);
    }else if(event->key()==Qt::Key_S){
        PacMan->setVy(20);
        PacMan->setVx(0);
    }else if(event->key()==Qt::Key_Space){
        PacMan->setVx(0);
        PacMan->setVy(0);
    }
}

void Laberinto::crearMundo()
{

}

void Laberinto::on_pushButtonStart_clicked()
{
    PacMan = new Personaje;
    scene->addItem(PacMan);

    time = new QTimer;
    time->start(100);

    connect(time, &QTimer::timeout, scene,
            &QGraphicsScene::advance);

    ui->pushButtonStart->hide();
}

