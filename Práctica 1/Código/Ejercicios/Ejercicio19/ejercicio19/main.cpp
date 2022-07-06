#include <iostream>

using namespace std;

int main()
{
    unsigned short int op=1;
    do {
        int num=0, cont=0;
        cout <<"Ingrese un numero entero positivo para verificar si es primo: "<< endl; cin>>num;
        if(num<0)
            num*=-1;

        for(int i=1;i<=num;i++){
            if(num%i==0)
                cont++;
        }

        if(cont==2)
            cout<<num<<" es un numero primo"<<endl;
        else
            cout<<num<<" NO es un numero primo"<<endl;

        cout<<"==Ingrese 1 para seguir probando o ingrese 0 para salir=="<<endl; cin>>op;
    } while (op!=0);
    return 0;
}
