#include <iostream>

using namespace std;

int main()
{
    unsigned short int op=1;
    do {
        int num1=0,num2=0;
        cout <<"Ingrese 2 numeros para sacar el residuo entre los dos" << endl; cin>>num1; cin>>num2;
        cout<<num1/num2<<endl;

        cout<<"==Ingrese 1 para seguir probando o ingrese 0 para salir=="<<endl;
    } while (op!=0);

    return 0;
}
