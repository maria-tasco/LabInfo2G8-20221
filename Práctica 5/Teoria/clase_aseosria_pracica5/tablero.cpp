#include "tablero.h"
#include "ui_tablero.h"

Tablero::Tablero(QWidget *parent) : QMainWindow(parent) , ui(new Ui::Tablero)
{
    ui->setupUi(this);
    scene = new QGraphicsScene(this);
    scene->setSceneRect(0,0,400,400);
    ui->graphicsView->setScene(scene);

    connect(ui->pushButtonStart, &QPushButton::clicked,
            this, &Tablero::on_pushButtonStart_clicked);
}

Tablero::~Tablero()
{
    delete ui;
}

void Tablero::keyPressEvent(QKeyEvent *event)
{
    if(event->key()==Qt::Key_A){
        p1->setVx(-20);
        p1->setVy(0);
    }else if(event->key()==Qt::Key_D){
        p1->setVx(20);
        p1->setVy(0);
    }else if(event->key()==Qt::Key_W){
        p1->setVy(-20);
        p1->setVx(0);
    }else if(event->key()==Qt::Key_S){
        p1->setVy(20);
        p1->setVx(0);
    }else if(event->key()==Qt::Key_Space){
        p1->setVx(0);
        p1->setVy(0);
    }
}

void Tablero::on_pushButtonStart_clicked()
{
    p1 = new Personaje;
    scene->addItem(p1);

    crearMapa();

    time = new QTimer;
    time->start(100);

    QGraphicsLineItem linea(0,0,400,400);
    scene->addItem(&linea);

    connect(time, &QTimer::timeout,
            scene, &QGraphicsScene::advance);

    ui->pushButtonStart->hide();
}

void Tablero::crearMapa(void)
{
    for(int i=0; i<20; i++){
        for(int j=0; j<20; j++){
            if(i%2==1 && j%2==1){
                mapa[i][j]=1;
            }else{
                mapa[i][j]=0;
            }
        }
    }
}

