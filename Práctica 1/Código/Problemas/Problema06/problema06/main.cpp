#include <iostream>

using namespace std;

int factorial (int num1);

int main()
{
        unsigned short int op=1;
    do {

        unsigned int num1=0, num2=0;
        float suma = 0.0;

        cout << "Ingrese el numero de elemento que quiere usar para la aproximacion del numero de euler: " << endl; cin >> num1;
        num1 -- ;

        for (int i=num1; i>=0; i--)
        {
            num2 = factorial(num1);
            suma += 1/(float)num2;
            num1 -- ;
        }

        cout << "e es aproximadamente: " <<  suma << endl;

        cout<<"Ingrese 1 para seguir probando o ingrese 0 para salir"<<endl; cin>>op;
    } while (op!=0);

    return 0;
}

int factorial (int num1)
{
    int rta=1;
    for (int aux= 1; aux<=num1; aux++)
    {
        rta*=aux;
    }
    cout << num1 << "! = "<< rta << endl;
    return rta;
}
