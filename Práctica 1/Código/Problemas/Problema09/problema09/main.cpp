#include <iostream>

using namespace std;

int main()
{
    unsigned short int op=1;
    int num=0, rtamodulo=0, suma=0, aux=0, potencia=1;

    do {
        cout << "ingrese un numero: "<< endl;
        cin>> num;
        while (num > 0 )
        {
            rtamodulo = num % 10;
            num= num/10;
            cout << "rtamodulo "<<rtamodulo << endl;
            cout<< "num "<< num << endl;
            //aqui hacer una función o colocar el código que me eleve cada rtamodulo así mismo para luego ser sumado
            if (rtamodulo == 0)
                suma+=0; //¿Debería ser cero o que salga del programa con un break aquí.
            else
            {
                aux=rtamodulo;
                for (aux; aux > 0; aux --)
                {
                    potencia*=rtamodulo;
                    //cout<< "potencia del exponente "<< rtamodulo << " = "<< potencia << endl;

                }
                suma+=potencia;
                //cout<< "suma del exponente "<< rtamodulo << " = "<< suma << endl;
            }
            potencia=1;
        }
        cout << "El resultado de la suma es:  "<< suma << endl;

        cout<<"Ingrese 1 para seguir probando o ingrese 0 para salir"<<endl; cin>>op;
    } while (op!=0);

    return 0;
}
