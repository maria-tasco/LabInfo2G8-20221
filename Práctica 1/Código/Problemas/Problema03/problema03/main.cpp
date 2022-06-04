#include <iostream>

using namespace std;

int main()
{
    unsigned short int op=0;
    unsigned int num1=0, num2=0;

    do {
        cout << "Ingrese el numero de un mes 1-12: "<< endl; cin >> num1;

        if ( (num1 > 12) || (num1 < 1))
        {
            cout << num1 <<" Es un mes invalido "<< endl;
            return 0;
        }

        cout << "Ingrese el día del mes:  " << endl; cin >> num2;

        if ( (num1 == 1) || (num1 == 3) || (num1 == 5) || (num1 == 7) || (num1 == 8) || (num1 == 10) || (num1 == 12) )
        {
            if (num2 <= 31 && num2 >=1)
                cout << num2 << " / " << num1 << " Es una fecha valida" << endl;
            else
                cout << num2 << " / " << num1 << " Es una fecha invalida" << endl;
        }
        else if ( num1 == 2)
        {
            if ( num2 <=28 && num2 >=1)
                cout << num2 << " / " << num1 << " Es una fecha valida" << endl;
            else if (num2 == 29)
                cout << num2 << " / " << num1 << " Es una fecha valida en bisiesto" << endl;
            else
                cout << num2 << " / " << num1 << " Es una fecha invalida" << endl;
        }
        else
        {
            if ( num2 <= 30 && num2 >=1)
                cout << num2 << " / " << num1 << " Es una fecha valida" << endl;
            else
                cout << num2 << " / " << num1 << " Es una fecha invalida" << endl;
        }

        cout<<"Ingrese 1 para seguir probando o ingrese 0 para salir"<<endl; cin>>op;
    } while (op!=0);

    return 0;
}
