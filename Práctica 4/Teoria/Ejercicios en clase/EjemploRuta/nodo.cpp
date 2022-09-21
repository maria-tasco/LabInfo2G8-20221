#include "nodo.h"

Nodo::Nodo()
{

}
/*constructor sobrecargado me recibe el nombre del nodo de enlace*/
Nodo::Nodo(char name) : nombre(name)
{
    conexion[nombre]=0;
}

char Nodo::getNombre() const
{
    return nombre;
}

void Nodo::setNombre(char value)
{
    nombre = value;
}

void Nodo::agregarConexion(char n, int c){
    /*Conexion en la posición nodo agrege el costo*/
    conexion[n]=c;
}

//B:5, C:4, E:20
void Nodo::verConexiones(){
    cout<<"Conexiones del nodo: "<<nombre<<endl;
    for(auto nodo : conexion){
        cout<<nodo.first<<":"<<nodo.second<<endl;
    }
}

int Nodo::getCosto(char c){
    if(conexion.find(c) != conexion.end())
        return conexion[c];
    /*Si no hay conexión, no hay costo y se retorna -1*/
    return -1;
}

bool Nodo::isConectado(char c){
    if(conexion.find(c) != conexion.end() && conexion[c]!=-1)
        return true;
    return false;
}


