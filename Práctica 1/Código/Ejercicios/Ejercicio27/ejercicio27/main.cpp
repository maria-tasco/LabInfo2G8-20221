#include <iostream>

using namespace std;

int main()
{
    unsigned short int op=1;
    do {
        float num1=0, num2=0;
        char operacion=' ';
        cout <<"Ingrese un numero, una operacion (+,-,*,/) y otro numero: "<< endl;
        cin>>num1; cin>>operacion; cin>>num2;

        if(operacion==42)
            cout<<num1<<operacion<<num2<<"="<<num1*num2<<endl;
        else if(operacion==43)
            cout<<num1<<operacion<<num2<<"="<<num1+num2<<endl;
        else if(operacion==45)
            cout<<num1<<operacion<<num2<<"="<<num1-num2<<endl;
        else if(operacion==47)
            cout<<num1<<operacion<<num2<<"="<<num1/num2<<endl;

        cout<<"==Ingrese 1 para seguir probando o ingrese 0 para salir=="<<endl; cin>>op;
    } while (op!=0);
    return 0;
}
