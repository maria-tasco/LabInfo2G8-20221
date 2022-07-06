#include <iostream>

using namespace std;

int main()
{
    unsigned short int op=1;
    do {
        cout <<"Este programa imprime 2 columnas paralelas del 1-50 y del 50-1"<< endl;
        for(int i=1,j=50;i<=50;i++,j--)
            cout<<i<<"\t"<<j<<endl;

        cout<<"==Ingrese 1 para seguir probando o ingrese 0 para salir=="<<endl; cin>>op;
    } while (op!=0);
    return 0;
}
