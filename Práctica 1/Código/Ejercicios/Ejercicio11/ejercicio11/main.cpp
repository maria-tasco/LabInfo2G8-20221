#include <iostream>

using namespace std;

int main()
{
    unsigned short int op=1;
    do {
        int num=0;
        cout<<"Ingrese un numero para mostrar su tabla de multiplicar del 1 a 10: "<< endl; cin>>num;

        for(int i=1;i<=10;i++)
            cout<<i<<"*"<<num<<"="<<i*num<<endl;


        cout<<"==Ingrese 1 para seguir probando o ingrese 0 para salir=="<<endl; cin>>op;
    } while (op!=0);
    return 0;
}
