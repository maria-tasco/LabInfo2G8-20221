#include <iostream>

using namespace std;

int main()
{
    unsigned short int op=1;
    do {
        int num=0;
        cout <<"Ingrese un numero positivo para hallar todos sus divisores: "<< endl; cin>>num;
        for(int i=1;i<=num;i++){
            if(num%i==0) //Si es divisor
                cout<<i<<endl;
        }

        cout<<"==Ingrese 1 para seguir probando o ingrese 0 para salir=="<<endl; cin>>op;
    } while (op!=0);
    return 0;
}
