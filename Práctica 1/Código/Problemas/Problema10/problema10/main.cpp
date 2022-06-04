#include <iostream>

using namespace std;

int main()
{
    unsigned short int op=1;
    unsigned int num1=0, num2 = 1;

    do {
        cout << "Ingrese un numero: " << endl; cin>> num1; // Numero base de prueba --> Enesimo primo
        if (num1 < 0)
        {
            cout << "El conteo se hace a partir de 0 o 1" << endl;
            return 0;
        }

        //num2 lo usaremos como posible numero primo y es el que al final se sacará
        int cont = 0, i = 1, div = 0, aux = 0;
        while (cont != num1)
        {
            do
            {
                div = num2 % i;
                if ( div == 0)
                    aux ++; // Me cuenta cuántos divisores tiene el numero
                i ++;
            } while ( i <= num2);
            i=1; num2 ++;
            if ( aux == 2)
            {
                cont ++; // cuenta los numeros primos
            }
            aux = 0;
        }
        num2 -- ;
        cout <<"El primo numero " << num1 << " Es: "<<num2 << endl;

        cout<<"Ingrese 1 para seguir probando o ingrese 0 para salir: "<<endl; cin>>op;
    } while (op!=0);

    return 0;
}
