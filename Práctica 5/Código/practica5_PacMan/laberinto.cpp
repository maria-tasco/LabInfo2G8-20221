#include "laberinto.h"
#include "ui_laberinto.h"

Laberinto::Laberinto(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Laberinto)
{
    ui->setupUi(this);

    scene = new QGraphicsScene(this);
    ui->graphicsView->setScene(scene);

    connect(ui->pushButtonStart, &QPushButton::clicked, this, &Laberinto::on_pushButtonStart_clicked);
}

Laberinto::~Laberinto()
{
    delete ui;
}

void Laberinto::create_world()
{
    scene->addItem(barras);
}



void Laberinto::on_pushButtonStart_clicked()
{
    create_world();
}

