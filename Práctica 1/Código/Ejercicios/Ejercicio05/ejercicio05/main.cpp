#include <iostream>

using namespace std;

int main()
{
    unsigned short int op=1;
    do {
        int num1=1, num2=1, div_int=1;
        float div_float=1;
        cout << "Ingrese 2 numero para hacer la division entre ellos con redondeo: " << endl;
        cin>>num1; cin>>num2;

        float num1_aux=num1, num2_aux=num2;

        div_float=num1_aux/num2_aux;
        div_int=num1/num2;

        if(div_float-div_int>=0.5)
            cout<<num1<<"/"<<num2<<"="<<div_int+1<<endl;
        else
            cout<<num1<<"/"<<num2<<"="<<div_int+1<<endl;

        cout<<"==Ingrese 1 para seguir probando o ingrese 0 para salir=="<<endl; cin>>op;
    } while (op!=0);

    return 0;
}
