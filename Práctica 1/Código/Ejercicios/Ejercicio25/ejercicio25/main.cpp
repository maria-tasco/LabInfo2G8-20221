#include <iostream>

using namespace std;

int main()
{
    unsigned short int op=1;
    do {
        long long int num=0, aux=0, cont=0;
        cout <<"Ingrese un numero para saber cuantos digitos tiene: "<< endl; cin>>num;
        aux=num;
        while(aux!=0){
            aux/=10;
            cont++;
        }
        cout<<num<<" tiene "<<cont<<" digitos."<<endl;

        cout<<"==Ingrese 1 para seguir probando o ingrese 0 para salir=="<<endl; cin>>op;
    } while (op!=0);
    return 0;
}
