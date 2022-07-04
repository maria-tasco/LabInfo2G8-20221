#include <iostream>

using namespace std;

int main()
{
    unsigned short int op=0;
    do {
        unsigned int k=0, num_triang=0,n=1, cant_div=0;
        cout << "Ingrese un numero entero positivo para hallar el numero "
                "triangular con mayor divisores que el numero ingresado: "<< endl; cin>>k;

        while (cant_div<k) {
            num_triang=(n*(n+1))/2;
            n++; cant_div=0;
            for(unsigned int i=1;i<=num_triang;i++){
                if(num_triang%i==0) //si es un divisor
                    cant_div++;
            }
        }
        cout<<"el numero es: "<<num_triang<<" que tiene "<<cant_div<<" divisores."<<endl;

        cout<<"Ingrese 1 para seguir probando o ingrese 0 para salir: "<<endl; cin>>op;
    } while (op!=0);

    return 0;
}
