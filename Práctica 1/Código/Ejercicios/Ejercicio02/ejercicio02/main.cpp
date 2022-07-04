#include <iostream>

using namespace std;

int main()
{
    unsigned short int op=1;
    do {
        int num1=0;
        cout << "Ingrese un numero para saber si es impar" << endl; cin>>num1;
        if(num1%2!=0)
            cout<<"el numero "<<num1<<" es impar"<<endl;
        else
            cout<<"el numero"<<num1<<" es par"<<endl;

        cout<<"Ingrese 1 para seguir probando o ingrese 0 para salir"<<endl; cin>>op;
    } while (op!=0);

    return 0;
}
