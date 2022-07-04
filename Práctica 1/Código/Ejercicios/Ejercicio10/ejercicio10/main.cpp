#include <iostream>

using namespace std;

int main()
{
    unsigned short int op=1;
    do {
        unsigned short int num=0, multiplos=0;
        cout <<"Ingrese un numero para hallar sus multiplos entre 1 y 100: "<< endl; cin>>num;

        cout<<"Multilpos de "<<num<<" menores que 100: "<<endl;
        for(int i=1;i<100;i++){
            multiplos=i*num;
            if(multiplos>100)
                break;
            else
                cout<<multiplos<<endl;
        }

        cout<<"==Ingrese 1 para seguir probando o ingrese 0 para salir=="<<endl; cin>>op;
    } while (op!=0);
    return 0;
}
