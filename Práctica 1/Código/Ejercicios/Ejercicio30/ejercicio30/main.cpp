#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    unsigned short int op=1;
    do {
        int num_aleatorio=0, posible_aleatorio=0, intentos=0;
        cout <<"Este programa generara un numero aleatorio de 0-100 y usted tendrá que adivinarlo"<< endl;
        num_aleatorio=rand() % 101;
        while (posible_aleatorio!=num_aleatorio) {

            cout<<"Ingrese el posible numero aleatorio: "<<endl; cin>>posible_aleatorio;

            if(posible_aleatorio>num_aleatorio){
                cout<<"El numero ingresado es mayor que el numero aleatorio"<<endl;
                intentos++;
                }
            else if(posible_aleatorio<num_aleatorio){
                cout<<"El numero ingresado es menor que el numero aleatorio"<<endl;
                intentos++;
                }
            else if(posible_aleatorio==num_aleatorio)
                cout<<"Ha adivinado el numero aleatorio "<<num_aleatorio<<" con "<<intentos<<" intentos"<<endl;
        }


        cout<<"==Ingrese 1 para seguir probando o ingrese 0 para salir=="<<endl; cin>>op;
    } while (op!=0);
    return 0;
}
