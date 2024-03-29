#include "red.h"
#include "enrutador.h"

red::red()
{

}

void red::agregar_enrutador_red(enrutador enr)
{
    /*agregará un enrutador a la matriz de adyacencia*/
    string nombre_nodo;
    cout<<"Ingrese el nombre del nodo en mayuscula, ejm: A: "<<endl;
    cin>>nombre_nodo;
    enr.agregar_enrutador();
    mi_red.insert(pair<string,enrutador>(nombre_nodo,enr));
    cout<<"\t ver el contenido de mi red "<<endl;
    for(itrd=mi_red.begin(); itrd!=mi_red.end(); ++itrd){
        cout<<itrd->first<<" \t -> "<<itrd->second.imprimir_enrutador()<<endl;
    }
}

void red::matriz_adyacencia()
{
    /*se va a ir llenando con las talas de enrutamiento de cada nodo
    a trabes de la función agregar enrutador red y/o actualizar tabla
    de enrutamiento(que permite moficar nombre o costo o eliminar nodo)
    se va a modificar la matriz de adyacencia de cada red*/

}

void red::remover_enrutadores_red(enrutador enr, string nombre_enr_eliminar)
{
    /*debo eliminar el nombre del nodo de enlace y el enr con su
    clave y valor(tabla de enrutamiento)*/
    for(itrd=mi_red.begin();itrd!=mi_red.end();){
        if(itrd->first == nombre_enr_eliminar){
            itrd=mi_red.erase(itrd);

            }
        else
            ++itrd;
    }
    for(const auto &p : mi_red){
        cout<<&p.second<<" ";
    }
}

//void red::crear_red(string nombre_arch)
//{

//    enrutador j;
//    int tamanio= tamanio_de_la_red(nombre_arch);
//    j.agregar_enrutador(nombre_arch,tamanio);
//    mi_red.insert(pair<string,enrutador>(nombre_arch,j));
//}

//int red::tamanio_de_la_red(string nombre_archivo)
//{
//    unsigned long long tam = 0;
//    fstream text(nombre_archivo, fstream::in| fstream::ate | fstream::binary);
//    if (text.is_open())
//        tam = text.tellg();
//    text.close();
//    return tam;
//}
