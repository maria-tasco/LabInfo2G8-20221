#include "laberinto.h"
#include "ui_laberinto.h"

Laberinto::Laberinto(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Laberinto)
{
    ui->setupUi(this);
}

Laberinto::~Laberinto()
{
    delete ui;
}


void Laberinto::on_pushButton_clicked()
{

}

