#include <iostream>

using namespace std;

int main()
{
    unsigned short int op=1;

    do {
        unsigned int cant_billetes=0, num1=0, num2[10][2]={{50000,0},{20000,0},{10000,0},{5000,0},{2000,0},{1000,0},{500,0},{200,0},{100,0},{50,0}};
        cout<< "Ingrese la cantidad deseada para determinar la mínima combinación de billetes y monedas: "<< endl;
        cin >> num1;
        for(int i=0; i<10; i++){
            cant_billetes=num1/num2[i][0];
            if(cant_billetes>0){ // esto me esta diciendo la cantidad de billetes que debo usar
                num1-=(num2[i][0]*cant_billetes);
                num2[i][1]=cant_billetes;
            }
        }
        for(int i=0;i<10;i++)
            cout<<num2[i][0]<<" : "<<num2[i][1]<<endl;
        cout<<"Faltante = "<<num1<< endl;

        cout<<"Ingrese 1 para seguir probando o ingrese 0 para salir"<<endl; cin>>op;
    } while (op!=0);


    return 0;
}
