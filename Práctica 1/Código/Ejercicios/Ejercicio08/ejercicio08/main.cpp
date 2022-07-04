#include <iostream>

using namespace std;

int main()
{
    unsigned short int op=1;
    do {
        int rta=1, num1=0;
        cout << "Ingrese un numero para hallar su factorial: " << endl; cin>>num1;

        for (int aux= 1; aux<=num1; aux++)
            rta*=aux;

        cout << num1 << "! = "<< rta << endl;

        cout<<"Ingrese 1 para seguir probando o ingrese 0 para salir"<<endl; cin>>op;
    } while (op!=0);
    return 0;
}
