#include <iostream>

using namespace std;

int main()
{

    unsigned short int op=1;
    do {
        float promedio=0,num=0,cont=0;
        do {
            cout<<"Este programa permite ingresar varios numeros uno a lavez hasta que se oprima 0 "
                  "y hallará la sumatoria de los numeros ingresados: "<<endl; cin>>num;
            promedio+=num;
            if(num!=0)
                cont++;
        } while (num!=0);
        promedio=promedio/cont;
        cout<<"El promedio de los numeros ingresados es: "<<promedio<<endl;

        cout<<"==Ingrese 1 para seguir probando o ingrese 0 para salir=="<<endl; cin>>op;
    } while (op!=0);
    return 0;
}
