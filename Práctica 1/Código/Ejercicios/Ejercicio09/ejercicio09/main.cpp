#include <iostream>

using namespace std;
int potenciacion(int a, int b);
int main()
{
    unsigned short int op=1;
    do {
        int radio=0;
        float pi=3.1416, area=0.0, perimetro=0.0;
        cout <<"Ingrese un numero entero positivo que sera el radio de un ciruclo para hallar su area y perimetro"<< endl;
        cin>>radio;

        perimetro=(2*pi)*radio;
        area=pi*potenciacion(radio,2);

        cout<<"Perimetro: "<<perimetro<<endl<<"Area: "<<area<<endl;

        cout<<"Ingrese 1 para seguir probando o ingrese 0 para salir: "<<endl; cin>>op;
    } while (op!=0);
    return 0;
}
int potenciacion(int a, int b){
    int aux_a=a;
    if(b<0)
        b=b*-1;
    for(int i=1; i<b;i++)
        a*=aux_a;

    return a;
}
