#include "tablero.h"
#include "ui_tablero.h"

Tablero::Tablero(QWidget *parent) : QMainWindow(parent), ui(new Ui::Tablero)
{
    ui->setupUi(this);

    scene = new QGraphicsScene(this);
    scene->setSceneRect(0,0,600,600);
    ui->graphicsView->setScene(scene);

    p1 = nullptr;

    connect(ui->pB_start, &QPushButton::clicked, this, &Tablero::onStart);
}

Tablero::~Tablero()
{
    delete ui;
}

void Tablero::onUpdate(void){
    scene->advance();

    QList<QGraphicsItem* > Colisiones = scene->collidingItems(p1);
    if(!Colisiones.isEmpty()){
        //qDebug()<<"colision";
        for (auto c: Colisiones) {
            Bloque *bloque = dynamic_cast<Bloque *>(c);
            if(bloque){
                if(bloque->getTipo()==destructible){
                    scene->removeItem(bloque);
                }
                p1->setVx(0);
                p1->setVy(0);
            }
            Bloques.removeOne(bloque);
            qDebug()<<Bloques.size();

        }
    }
}

void Tablero::onStart(void){
    p1 = new Personaje(0,0,0);
    scene->addItem(p1);

    crearMundo();

    tiempo = new QTimer();
    tiempo->start(100);
    connect(tiempo, &QTimer::timeout, this, &Tablero::onUpdate);
}


void Tablero::keyPressEvent(QKeyEvent *event){
    if(p1!=nullptr){
        if(event->key()==Qt::Key_A){
            qDebug()<<"A";
            p1->setVx(-20);
            p1->setVy(0);
        }else if(event->key()==Qt::Key_D){
            qDebug()<<"D";
            p1->setVx(20);
            p1->setVy(0);
        }else if(event->key()==Qt::Key_W){
            qDebug()<<"W";
            p1->setVy(-20);
            p1->setVx(0);
        }else if(event->key()==Qt::Key_S){
            qDebug()<<"S";
            p1->setVy(20);
            p1->setVx(0);
        }else if(event->key()==Qt::Key_Space){
            qDebug()<<"Space";
            p1->setVy(0);
            p1->setVx(0);
        }
        else if(event->key()==Qt::Key_B){
            qDebug()<<"B";
            Bomba *b = p1->crearBomba();
            if(b!=nullptr){
                scene->addItem(b);
                connect(b,&Bomba::finBomba, this, &Tablero::onDeleteBomba);
            }

        }
    }

}

void Tablero::crearMundo()
{
    for (int i=0; i<20; i++) {
        for (int j=0; j<20; j++) {
            if(i<3 && j<3){
                Matriz[i][j] = 0;
                continue;
            }

            if(i%2==1 && j%2==1){
                Matriz[i][j] = fijo;
            }else{
                Matriz[i][j] = destructible;
            }
        }
    }

    for (int i=0; i<20; i++) {
        for (int j=0; j<20; j++) {
            if(Matriz[i][j]!=0){
                Bloques.append(new Bloque(i*30,j*30, Matriz[i][j]));
                scene->addItem(Bloques.last());
            }
        }
    }
}

void Tablero::onDeleteBomba(){
    Bomba *b = p1->destruirBomba();
    if(b!=nullptr){
        scene->removeItem(b);
        disconnect(b,&Bomba::finBomba, this, &Tablero::onDeleteBomba);
    }
}









