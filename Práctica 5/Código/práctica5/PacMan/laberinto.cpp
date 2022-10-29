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
    char laberinto[30] = "laberinto.txt";
    char *data_file = nullptr;
    read(laberinto,data_file,20);
    /*Algoritmo que llena la logica -> Archivo, radom, ciclo
    una función que se encargue de leer y llenar la matriz
    con los datos*/
    for(int i=0; i<20; i++){
        for(int j=0; j<20; j++){
            if(i<3 && j<3){
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
                BarrasH *m = new BarrasH(i*30,j*30);
                /*Al vector de muros le agrego los que voy creando*/
                bh.push_back(m);
                /*con memoria dinamica puedo crear muros más rápido de
                esta manera: muros.push_back(new Muro(i*30,j*30)); new Muro
                me retorna ya directamente el puntero*/
                /*Agregar a la escena ese muro, el último muro agregado*/
                scene->addItem(bh.last());
            }/*else if(mapa[i][j] ==2){
                moneditas.push_back(new Monedas(i*30,j*30));
                scene->addItem(moneditas.last());
            }*/
        }
    }
}

void Laberinto::on_pushButtonStart_clicked()
{
    PacMan = new Personaje;
    scene->addItem(PacMan);

    crearMundo();

    time = new QTimer;
    time->start(100);

    connect(time, &QTimer::timeout, scene,
            &QGraphicsScene::advance);

    ui->pushButtonStart->hide();
}

