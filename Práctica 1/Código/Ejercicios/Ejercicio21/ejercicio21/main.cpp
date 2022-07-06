#include <iostream>

using namespace std;

int main()
{
    unsigned short int op=1;
    do {
        char letra=' ';
        cout <<"Ingrese una letra: "<< endl; cin>>letra;
        if((letra>=65 && letra<=90))
            letra+=32;
        else if((letra>=97 && letra<=122))
            letra-=32;
        else{
            cout<<"EL caracter ingresado no es una letra, intente de nuevo"<<endl;
            return 0;
        }
        cout<<"La letra convertida: "<<letra<<endl;

        cout<<"==Ingrese 1 para seguir probando o ingrese 0 para salir=="<<endl; cin>>op;
    } while (op!=0);
    return 0;
}
