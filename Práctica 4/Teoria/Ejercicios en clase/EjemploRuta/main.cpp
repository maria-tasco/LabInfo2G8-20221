#include <iostream>
#include <map>
#include <vector>
#include "nodo.h"

using namespace std;
void calcularRutas(char origen, char destino, map<char,Nodo> Red, map<string,int>& Rutas, string ruta="", int costo=0);
void mejor_ruta(map<string,int>& Rutas, string ruta="",int costo);
int main()
{
    cout << "Hello World!" << endl;

    Nodo n1('A');
    /*Al nodo n1 ingrese una nueva conexión*/
    n1.agregarConexion('B',5);
    n1.agregarConexion('C',4);

    Nodo n2('B');
    n2.agregarConexion('A',5);
    n2.agregarConexion('C',7);
    n2.agregarConexion('E',10);

    Nodo n3('C');
    n3.agregarConexion('A',4);
    n3.agregarConexion('D',8);
    n3.agregarConexion('E',3);

    Nodo n4('D');
    n4.agregarConexion('C',8);
    n4.agregarConexion('E',6);
    n4.agregarConexion('F',6);

    Nodo n5('E');
    n4.agregarConexion('B',11);
    n4.agregarConexion('D',9);
    /*red donde le voy a dar el nombre y el nodo correspondiente*/
    map<char,Nodo> Red;
    Red.insert(make_pair('A',n1));
    Red.insert(make_pair('B',n2));
    Red.insert(make_pair('C',n3));
    Red.insert(make_pair('D',n4));
    Red.insert(make_pair('E',n5));

//    for(int i=0; i<Red.size(); i++){
//        //cout<<Red[i].getNombre()<<endl;
//        Red[i].verConexiones();
//    }

    char origen = 'A';
    char destino = 'E';
    cout<<Red[origen].getCosto(destino)<<endl;
    map<string,int> Rutas;
    calcularRutas('A','E',Red,Rutas);
    for(auto r: Rutas){
        cout<<r.first<<":"<<r.second<<endl;
    }

    Rutas.clear();
    calcularRutas('B','E',Red,Rutas);
    for(auto r: Rutas){
        cout<<r.first<<":"<<r.second<<endl;
    }
    return 0;
}

void calcularRutas(char origen, char destino, map<char,Nodo> Red, map<string,int>& Rutas, string ruta, int costo){
    cout<<"------------(i)"<<origen<<"-----------"<<endl;
    ruta += origen;

    if(origen==destino){
        cout<<"Nueva ruta!!!"<<ruta<<":"<<costo<<endl;
        Rutas.insert(make_pair(ruta,costo));
        return;
    }

    for(auto n : Red){
        if(Red[origen].isConectado(n.first)){
            if(ruta.find(n.first) == string::npos){
                cout<<"["<<ruta<<":"<<costo<<"] ->"<<n.first<<":"<<Red[origen].getCosto(n.first)<<endl;
                costo += Red[origen].getCosto(n.first);
                calcularRutas(n.first,destino,Red,Rutas,ruta,costo);
            }
        }
    }
    cout<<"------------(f)"<<origen<<"-----------"<<endl;
}
void mejor_ruta(map<string, int> &Rutas, string ruta,int costo){

}








