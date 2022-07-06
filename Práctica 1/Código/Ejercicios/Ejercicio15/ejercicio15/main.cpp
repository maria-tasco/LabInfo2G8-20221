#include <iostream>

using namespace std;

int main()
{
    int num=1;
    unsigned short int op=1;
    do {
        int suma=0;
        do {
            cout<<"Este programa permite ingresar varios numeros uno a lavez hasta que se oprima 0 "
                  "y hallará la sumatoria de los numeros ingresados: "<<endl; cin>>num;
            suma+=num;
        } while (num!=0);
        cout<<"El resultado de la sumatoria es: "<<suma<<endl;

        cout<<"==Ingrese 1 para seguir probando o ingrese 0 para salir=="<<endl; cin>>op;
    } while (op!=0);
    return 0;
}
