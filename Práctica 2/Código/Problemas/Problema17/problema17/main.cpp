/*! Link Tinkercad: https://www.tinkercad.com/things/4VlCEO4HAJF*/
#include <iostream>

using namespace std;

int divisores(int n);

int main()
{
    unsigned short int op=1;
    do {
        int num=0, addi_divA=0, addi_divB=0, sumaA=0, sumaB=0, result=0;
        cout<<"Ingrese un numero mayor que 220: "<<endl; cin>>num;
        if(num<220)
            cout<<"no hay numeros amigables menores que 220"<<endl;
        else{
            for(int i=220; i<=num; i++){
                addi_divA=divisores(i);
                addi_divB=divisores(addi_divA);
                if(addi_divB==i){
                    sumaA+=addi_divA;
                    sumaB+=addi_divB;
                }
            }
        }
        result=sumaA+sumaB;
        cout<<"El resultado de la suma es: "<<result<<endl;

        cout<<"==Ingrese 1 para seguir probando o ingrese 0 para salir=="<<endl; cin>>op;
    } while (op!=0);

    return 0;
}
int divisores(int n){
    int addi=0;
    for(int i=1; i<n; i++){
        if(n%i==0)
            addi+=i;
    }
    return addi;
}
