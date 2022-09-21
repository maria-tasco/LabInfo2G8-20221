#ifndef NODO_H
#define NODO_H
#include <iostream>
#include <map>

using namespace std;

class Nodo
{
private:
    /*Cada nodo tiene su nombre y esta en privado porque no voy a usar
    herencia*/
    char nombre; //A,B,C,etc...
    /*La conexión es un conjunto de elementos guardados en un mapa*/
    map<char,int> conexion;
    /*del Nodo al nodo char, string esta es la ruta. Estoy guardando las
    rutas que puede llegar a tener el Nodo(origen) al nodo char (destino)*/
    map<char,string> rutas;

public:
    Nodo();
    Nodo(char name);
    /*se crean los metodos para obtener y mostrar el nombre del nodo*/
    char getNombre() const;
    void setNombre(char value);
    /*Agregar enlaces/conexiones al nodo de enlace*/
    void agregarConexion(char n, int c);
    void verConexiones();
    int  getCosto(char c);
    bool isConectado(char c);



};

#endif // NODO_H
