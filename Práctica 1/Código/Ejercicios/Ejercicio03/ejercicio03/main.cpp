#include <iostream>

using namespace std;

int main()
{
    unsigned short int op=1;
    do {
        int num1=0, num2=0;
        cout << "Ingrese 2 numero para saber cual es el mayor" << endl;
        cin>>num1; cin>>num2;
        if(num1>num2)
            cout<<"El mayor es: "<<num1;
        else if (num2>num1)
            cout<<"El mayor es: "<<num2;
        else
            cout<<"Los dos numeros son iguales: "<<num1;

        cout<<endl<<"==Ingrese 1 para seguir probando o ingrese 0 para salir=="<<endl; cin>>op;
    } while (op!=0);

    return 0;
}
