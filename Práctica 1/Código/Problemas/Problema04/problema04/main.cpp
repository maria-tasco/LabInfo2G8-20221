#include <iostream>

using namespace std;

int main()
{
    unsigned short int op=1;
    unsigned int num1=0, num2=0;

    do {
        cout << "Ingrese la hora inicial : "<< endl; cin >> num1;
        cout << "Ingrese el tiempo que tarda: " << endl; cin >> num2;
        int min1 = 0, min2 = 0, h1 = 0, h2 = 0, minf = 0, hf = 0, horafinal = 0;

         h1 = num1 / 100 ;
         cout << h1 << endl;
         min1 = num1 % 100 ;
         cout << min1 << endl;

         h2 = num2 / 100 ;
         cout << h2 << endl;
         min2 = num2 % 100 ;
         cout << min2 << endl;

        if ( h1 > 24 )
            return 0 ;
        else
        {
            minf = min1 + min2;
            hf = h1 + h2;
            if (minf > 60)
            {
                minf -= 60;
                hf += 1;
                cout << hf<< minf << endl;
                if ( hf >= 24)
                {
                    hf -= 24;
                    horafinal = (hf*100) + minf ;
                    cout << "La hora es: "<< horafinal << " del otro dia" << endl;
                    return 0;
                }
            }
        }
        horafinal = (hf*100) + minf;
        cout << "La hora es: "<< horafinal << endl;

        cout<<"Ingrese 1 para seguir probando o ingrese 0 para salir"<<endl; cin>>op;
    } while (op!=0);

    return 0;
}
