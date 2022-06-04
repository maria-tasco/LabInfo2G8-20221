#include <iostream>

using namespace std;

int main()
{
    unsigned short int op=1;
    unsigned int num1=0,num2=0;

    do {
        cout<< "Ingrese la cantidad deseada para determinar la mínima combinación de billetes y monedas: "<< endl;
        cin >> num1;
        num2 = 10000;
            for (int i=0; i<3; i++)
            {
                for ( int j=0; j<3; j++)
                {
                cout << (j*j-4*j+5)*num2 << " = "<< num1/((j*j-4*j+5)*num2) << endl ;
                num1 = num1 % ((j*j-4*j+5)*num2);
                }
                num2/=10;
            }
        cout << "50 = " << num1/50 << endl << "Faltante = "<< num1 % 50 << endl;

        cout<<"Ingrese 1 para seguir probando o ingrese 0 para salir"<<endl; cin>>op;
    } while (op!=0);


    return 0;
}
