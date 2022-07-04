#include <iostream>

using namespace std;

int potenciacion(int a, int b);
int main()
{
    unsigned short int op=1;
    do {
        int num1=0, num2=0;
        cout << "Ingrese 2 numeros para hallar la potencia del primero a la el segundo: " << endl;
        cin>>num1; cin>>num2;

        if(num2==0)
            cout<<num1<<"^"<<num2<<"="<<1<<endl;
        else if(num2<0){
            cout<<num1<<"^"<<num2<<"= 1/"<<potenciacion(num1,num2)<<endl;
            }
        else
            cout<<num1<<"^"<<num2<<"="<<potenciacion(num1,num2)<<endl;


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
