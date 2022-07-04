#include <iostream>

using namespace std;

int main()
{
    unsigned short int op=1;
    do {
        unsigned int num=0, factor_primo=2;
        bool band=true;
        cout << "Ingrese un numero entero positivo para hallar su maximo factor primo: " << endl;
        cin>>num;

        while(band==true){
            if(num%factor_primo==0){
                if(num/factor_primo==1)
                    band=false;
                else
                    num/=factor_primo;
             }
            else
                factor_primo++;
        }
        cout<<factor_primo<<endl;

        cout<<"=====Ingrese 1 para seguir probando o ingrese 0 para salir: ======="<<endl; cin>>op;
    } while (op!=0);

    return 0;
}
