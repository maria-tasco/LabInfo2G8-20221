#include <iostream>

using namespace std;

int main()
{
    unsigned short int op=1;
    do {
        int num=0, cont=0;
        cout <<"Ingrese un numero entero positivo para verificar si es cuadrado perfecto: "<< endl; cin>>num;
        for(int i=1;i<=num;i++){
            if((((2*i)*i)/2) == num){
                cont++; break;
            }
        }
        if(cont==0)
            cout<<num<<" NO es un cuadrado perfecto"<<endl;
        else
            cout<<num<<" es un cuadrado perfecto"<<endl;

        cout<<"==Ingrese 1 para seguir probando o ingrese 0 para salir=="<<endl; cin>>op;
    } while (op!=0);
    return 0;
}
