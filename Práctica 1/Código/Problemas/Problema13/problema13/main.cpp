#include <iostream>

using namespace std;

int main()
{
    unsigned short int op=1;
    unsigned int num1=0, num2=0;

    do {
        //num2 lo usaremos como posible numero primo y es el que al final se sacará
        cout << "ingrese un numero: " << endl; cin>> num1;
        if (num1 < 0)
        {
            cout << "La suma empieza conun numero mayor que 0: " << endl;
            return 0;
        }
        int  i = 1, div = 0, aux = 0, suma = 0;
        while (num2 != num1)
        {
            do
            {
                div = num2 % i;
                if ( div == 0)
                    aux ++; // Me cuenta cuántos divisores tiene el numero
                i ++;
            } while ( i <= num2);

            if ( aux == 2)
            {
                cout << num2 << endl;
                suma+= num2;
            }
            aux = 0; i=1; num2 ++;
        }
        num2 -- ;
        cout <<"La resultado de la suma es:" << suma<< endl;

        cout<<"ingrese 1 para seguir probando o ingrese 0 para salir"<<endl; cin>>op;
    } while (op!=0);

    return 0;
}
