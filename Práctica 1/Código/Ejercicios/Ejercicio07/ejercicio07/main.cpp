#include <iostream>

using namespace std;

int main()
{
    unsigned short int op=1;
    do {
        unsigned int num1=0, suma=0;
        cout<<"Ingrese un numero entero positivo para calcular la suma desde 0 hasta ese numero: "<<endl; cin>>num1;
        for(unsigned int i=0;i<=num1;i++)
            suma+=i;
        cout<<"La sumatoria desde 0 hasta "<<num1<<" es: "<<suma<<endl;
        cout<<"Ingrese 1 para seguir probando o ingrese 0 para salir"<<endl; cin>>op;
    } while (op!=0);
    cout << "Hello World!" << endl;
    return 0;
}
