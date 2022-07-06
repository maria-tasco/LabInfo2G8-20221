#include <iostream>

using namespace std;

int main()
{
    unsigned short int op=1;
    do {
        int num=0, num_aux=0, cont=0;
        do {
            cout<<"Este programa permite ingresar varios numeros uno a la vez hasta que se oprima 0 "
                  "y hallará el numero mayor de los ingresados: "<<endl; cin>>num;

            while (cont==0) { //para tener el primer valor de referencia
                if(num<0)
                    num_aux=num;
                cont++;
            }

            if(num>num_aux && num!=0)
                num_aux=num;


        } while (num!=0);
        cout<<"El numero mayor es: "<<num_aux<<endl;

        cout<<"==Ingrese 1 para seguir probando o ingrese 0 para salir=="<<endl; cin>>op;
    } while (op!=0);
    return 0;
}
