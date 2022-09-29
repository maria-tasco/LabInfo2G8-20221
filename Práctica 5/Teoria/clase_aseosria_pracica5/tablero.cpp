#include "tablero.h"
#include "ui_tablero.h"

Tablero::Tablero(QWidget *parent) : QMainWindow(parent) , ui(new Ui::Tablero)
{
    ui->setupUi(this);
    scene = new QGraphicsScene(this);
    scene->setSceneRect(0,0,630,630);
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
    }else if(event->key()==Qt::Key_R){
        p1->disparar();
    }
}

void Tablero::on_pushButtonStart_clicked()
{
    p1 = new Personaje;
    scene->addItem(p1);

    crearMapa();

    fantasmas.push_back(new Fantasma(100,100,20,0));
    scene->addItem(fantasmas.last());

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
    /*Algoritmo que llena la logica -> Archivo, radom, ciclo
    una función que se encargue de leer y llenar la matriz
    con los datos*/
    for(int i=0; i<20; i++){
        for(int j=0; j<20; j++){
            if(i<5 && j<5){
                mapa[i][j]=0; //espacio libre para iniciar el jugador
                continue;
            }

            if(i%2==1 && j%2==1){
                mapa[i][j]=1; //muro
            }else{
                mapa[i][j]=2; //Moneda
            }
        }
    }

    /*Algoritmo que gráfica la logica
    una función que gráfica*/
    for(int i=0; i<20; i++){
        for(int j=0; j<20; j++){
            if(mapa[i][j] ==1 ){
                /*quiere decir que ahí va un muro así que debo crealo
                ´y multiplico por 30 la posicion que estoy trabajando*/
                Muro *m = new Muro(i*30,j*30);
                /*Al vector de muros le agrego los que voy creando*/
                muros.push_back(m);
                /*con memoria dinamica puedo crear muros más rápido de
                esta manera: muros.push_back(new Muro(i*30,j*30)); new Muro
                me retorna ya directamente el puntero*/
                /*Agregar a la escena ese muro, el último muro agregado*/
                scene->addItem(muros.last());
            }else if(mapa[i][j] ==2){
                moneditas.push_back(new Monedas(i*30,j*30));
                scene->addItem(moneditas.last());
            }
        }
    }
}

